#include <stdlib.h>
#include <stdint.h>
#include "st7789.h" // st7789_init, st7789_fill_rect, st7789_draw_text, etc.
#include "util.h"   // pg_printd (デバッグ用)

// ハードウェアで定義したボタンのMMIOアドレス
#define BTN_REG_ADDR    0x80000000
volatile const uint32_t* BTN_REG = (volatile const uint32_t*)BTN_REG_ADDR;

// ボタン割り当てマスク
#define MASK_NEXT       (1 << 0) // BTN0
#define MASK_SELECT     (1 << 1) // BTN1
#define MASK_RESET      (1 << 2) // BTN2

// 画面サイズとゲーム定数
#define WIDTH 240
#define HEIGHT 240
#define CELL_SIZE (WIDTH / 3) // 80 pixels

// 色定義 (ST7789はRGB565形式 16bit)
#define COLOR_BLACK 0x0000
#define COLOR_WHITE 0xFFFF
#define COLOR_O     0x07E0 // Green
#define COLOR_X     0xF800 // Red
#define COLOR_CURSOR 0xFFE0 // Yellow

// ゲーム状態変数
int board[9] = {0};     // 0:空, 1:O, 2:X
int cursor_pos = 0;     // 0-8
int current_player = 1; // 1:O, 2:X
int game_state = 0;     // 0:プレイ中, 1:O勝利, 2:X勝利, 3:引き分け

void reset_game() {
    for (int i = 0; i < 9; i++) board[i] = 0;
    cursor_pos = 0;
    current_player = 1;
    game_state = 0;
}

// 勝敗判定ロジック (三目並べの勝利条件をすべて確認)
int check_winner() {
    // 勝利パターン（インデックス）
    const int wins[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // 横
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // 縦
        {0, 4, 8}, {2, 4, 6}             // 斜め
    };

    for (int i = 0; i < 8; i++) {
        int a = wins[i][0], b = wins[i][1], c = wins[i][2];
        if (board[a] != 0 && board[a] == board[b] && board[a] == board[c]) {
            return board[a]; // 1 (O) または 2 (X)
        }
    }
    
    // 引き分け判定
    for (int i = 0; i < 9; i++) {
        if (board[i] == 0) return 0; // プレイ継続
    }
    return 3; // 引き分け
}

void draw_game() {
    // 画面をクリア
    st7789_fill_rect(0, 0, WIDTH, HEIGHT, COLOR_BLACK);

    // 1. グリッド線を描画 (マス目の区切り)
    st7789_draw_line(CELL_SIZE, 0, CELL_SIZE, HEIGHT, COLOR_WHITE);
    st7789_draw_line(CELL_SIZE * 2, 0, CELL_SIZE * 2, HEIGHT, COLOR_WHITE);
    st7789_draw_line(0, CELL_SIZE, WIDTH, CELL_SIZE, COLOR_WHITE);
    st7789_draw_line(0, CELL_SIZE * 2, WIDTH, CELL_SIZE * 2, COLOR_WHITE);

    // 2. カーソルを描画 (現在選択中のマス)
    int cx = (cursor_pos % 3) * CELL_SIZE;
    int cy = (cursor_pos / 3) * CELL_SIZE;
    st7789_fill_rect(cx, cy, CELL_SIZE, CELL_SIZE, COLOR_CURSOR); // マス全体を黄色でハイライト

    // 3. ○と×を描画
    for (int i = 0; i < 9; i++) {
        int x_center = (i % 3) * CELL_SIZE + (CELL_SIZE / 2) - 10; // X座標の微調整
        int y_center = (i / 3) * CELL_SIZE + (CELL_SIZE / 2) - 10; // Y座標の微調整
        
        if (board[i] == 1) {
            // "O" (文字描画を使う)
            st7789_draw_text(x_center, y_center, "O", COLOR_O); 
        } else if (board[i] == 2) {
            // "X"
            st7789_draw_text(x_center, y_center, "X", COLOR_X);
        }
    }

    // 4. ゲーム終了メッセージ
    if (game_state != 0) {
        int tx = 50, ty = 100;
        st7789_fill_rect(tx - 10, ty - 10, WIDTH - 100, 40, COLOR_BLACK);
        if (game_state == 1) st7789_draw_text(tx, ty, "O WIN!", COLOR_O);
        else if (game_state == 2) st7789_draw_text(tx, ty, "X WIN!", COLOR_X);
        else if (game_state == 3) st7789_draw_text(tx, ty, "DRAW", COLOR_WHITE);
    }
}

int main () {
    // 1. ST7789初期化
    st7789_init(); 
    
    // 2. 変数初期化
    reset_game();
    uint32_t last_btn_state = 0; // 前回サイクルでのボタン状態

    // 3. メインゲームループ
    while (1) {
        // --- 入力処理 ---
        uint32_t current_btn_state = *BTN_REG;
        // 押された瞬間を検出 (チャタリング対策も兼ねる)
        uint32_t btn_pressed = current_btn_state & ~last_btn_state; 
        
        if (game_state == 0) { // プレイ中の処理
            // BTN0 (次へ): カーソル移動
            if (btn_pressed & MASK_NEXT) {
                cursor_pos = (cursor_pos + 1) % 9;
            }
            
            // BTN1 (決定): O/X配置
            if (btn_pressed & MASK_SELECT) {
                if (board[cursor_pos] == 0) { // マスが空の場合のみ配置
                    board[cursor_pos] = current_player;
                    
                    game_state = check_winner(); // 勝敗判定
                    
                    if (game_state == 0) { // ゲーム継続
                        current_player = (current_player == 1) ? 2 : 1;
                    }
                }
            }
        }
        
        // BTN2 (リセット): 常にリセット可能
        if (btn_pressed & MASK_RESET) {
            reset_game();
        }

        // --- 描画処理 ---
        draw_game(); 
        
        // --- 状態更新 ---
        last_btn_state = current_btn_state;
        
        // 遅延 (フレームレート調整。ハードウェアの速度に合わせて調整が必要です)
        for (volatile int i = 0; i < 50000; i++); 
    }
    return 0; // ここには到達しない
}