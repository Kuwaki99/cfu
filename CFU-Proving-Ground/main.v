/* CFU Proving Ground since 2025-02    Copyright(c) 2025 Archlab. Science Tokyo /
/ Released under the MIT license https://opensource.org/licenses/mit           */

`resetall `default_nettype none

`include "config.vh"

module main (
    input  wire clk_i,
    input  wire [3:0] btn_in,       // ★追加: ボタン入力ポート (BTN0-BTN3)
    output wire st7789_SDA,
    output wire st7789_SCL,
    output wire st7789_DC,
    output wire st7789_RES
);
    reg rst_ni = 0; initial #15 rst_ni = 1; [cite: 85]
    wire clk, locked; [cite: 85]

`ifdef SYNTHESIS
    clk_wiz_0 clk_wiz_0 (
        .clk_out1 (clk),      // output clk_out1
        .reset    (!rst_ni),  // input reset
        .locked   (locked),   // output locked
        .clk_in1  (clk_i)     // input clk_in1
    ); [cite: 86]
`else
    assign clk    = clk_i; [cite: 87]
    assign locked = 1'b1; [cite: 87]
`endif

    wire                        rst = !rst_ni || !locked; [cite: 88, 89]
    wire [`IBUS_ADDR_WIDTH-1:0] imem_raddr; [cite: 89]
    wire [`IBUS_DATA_WIDTH-1:0] imem_rdata; [cite: 89]
    wire                        dbus_we; [cite: 89]
    wire [`DBUS_ADDR_WIDTH-1:0] dbus_addr; [cite: 90]
    wire [`DBUS_DATA_WIDTH-1:0] dbus_wdata; [cite: 90]
    wire [`DBUS_STRB_WIDTH-1:0] dbus_wstrb; [cite: 90]
    wire [`DBUS_DATA_WIDTH-1:0] dbus_rdata; [cite: 90]

    // ====================================================================
    // ★追加: ボタンI/Oロジック
    // MMIOアドレス 0x8000_0000 (dbus_addr[31]のみが立っている領域)
    // ====================================================================
    wire [3:0] physical_buttons = btn_in;

    // ボタンの状態をクロックに同期
    reg [31:0] synced_btn_data = 0;
    always @(posedge clk) begin
        synced_btn_data[3:0] <= physical_buttons;
    end

    // アドレスデコード: dbus_addr[31]が立ち、かつ他のI/Oフラグが立っていない場合
    wire btn_read_en = dbus_addr[31] && !dbus_addr[30] && !dbus_addr[29] && !dbus_addr[28];
    wire [31:0] btn_rdata;
    assign btn_rdata = synced_btn_data;


    // ====================================================================
    // ★既存の dbus_rdata の割り当てを変更
    // CPUへ返すデータの選択 (優先度順)
    // ====================================================================
    reg rdata_sel = 0; [cite: 91]
    always @(posedge clk) rdata_sel <= dbus_addr[30]; [cite: 91]
    
    // perf (bit 30) か btn (bit 31) か dmem (bit 28)
    assign dbus_rdata = (btn_read_en) ? btn_rdata : // ★追加: ボタンレジスタが最優先
                        (dbus_addr[30]) ? perf_rdata : // パフォーマンスカウンタ [cite: 91, 107]
                        dmem_rdata; // デフォルト: データメモリ [cite: 91]
                        
    // ====================================================================


    cpu cpu (
        .clk_i         (clk),         // input  wire [cite: 92]
        .rst_i         (rst),         // input  wire [cite: 92]
        .stall_i       (0),           // input  wire [cite: 92]
        .ibus_araddr_o (imem_raddr),  // output wire [`IBUS_ADDR_WIDTH-1:0] [cite: 92, 93]
        .ibus_rdata_i  (imem_rdata),  // input  wire [`IBUS_DATA_WIDTH-1:0] [cite: 93]
        .dbus_addr_o   (dbus_addr),   // output wire [`DBUS_ADDR_WIDTH-1:0] [cite: 93]
        .dbus_wvalid_o (dbus_we),     // output wire [cite: 93]
        .dbus_wdata_o  (dbus_wdata),  // output wire [`DBUS_DATA_WIDTH-1:0] [cite: 93]
        .dbus_wstrb_o  (dbus_wstrb),  // output wire [`DBUS_STRB_WIDTH-1:0] [cite: 93]
        .dbus_rdata_i  (dbus_rdata),  // input  wire [`DBUS_DATA_WIDTH-1:0] [cite: 93]
        .dbus_ren_o    ()             // output wire [cite: 94]
    );
    m_imem imem (
        .clk_i   (clk),         // input  wire [cite: 95]
        .raddr_i (imem_raddr),  // input  wire [ADDR_WIDTH-1:0] [cite: 95]
        .rdata_o (imem_rdata)   // output reg  [DATA_WIDTH-1:0] [cite: 95]
    );
    wire [31:0] dmem_addr  = dbus_addr; [cite: 96]
    wire [31:0] dmem_wdata = dbus_wdata; [cite: 96]
    wire  [3:0] dmem_wstrb = dbus_wstrb; [cite: 96]
    wire        dmem_re    = !dbus_we & (dbus_addr[28]); [cite: 97]
    wire        dmem_we    =  dbus_we & (dbus_addr[28]); [cite: 98]
    wire [31:0] dmem_rdata; [cite: 98]
    m_dmem dmem (
        .clk_i   (clk),         // input  wire [cite: 99]
        .we_i    (dmem_we),     // input  wire [cite: 99]
        .re_i    (dmem_re),     // input  wire                 [cite: 99]
        .addr_i  (dmem_addr),   // input  wire [ADDR_WIDTH-1:0] [cite: 99, 100]
        .wdata_i (dmem_wdata),  // input  wire [DATA_WIDTH-1:0] [cite: 100]
        .wstrb_i (dmem_wstrb),  // input  wire [STRB_WIDTH-1:0] [cite: 100]
        .rdata_o (dmem_rdata)   // output reg  [DATA_WIDTH-1:0] [cite: 100]
    );
    wire        vmem_we    = dbus_we & (dbus_addr[29]); [cite: 101]
    wire [15:0] vmem_addr  = dbus_addr[15:0]; [cite: 102]
    wire  [2:0] vmem_wdata = dbus_wdata[2:0]; [cite: 102]
    wire [15:0] vmem_raddr; [cite: 102]
    wire  [2:0] vmem_rdata_t; [cite: 102]
    vmem vmem (
        .clk_i   (clk),          // input wire [cite: 103]
        .we_i    (vmem_we),      // input wire [cite: 103]
        .waddr_i (vmem_addr),    // input wire [15:0] [cite: 103]
        .wdata_i (vmem_wdata),   // input wire [15:0] [cite: 103]
        .raddr_i (vmem_raddr),   // input wire [15:0] [cite: 103]
        .rdata_o (vmem_rdata_t)  // output wire [15:0] [cite: 104]
    );
    wire        perf_we    = dbus_we & (dbus_addr[30]); [cite: 105]
    wire  [3:0] perf_addr  = dbus_addr[3:0]; [cite: 106]
    wire  [2:0] perf_wdata = dbus_wdata[2:0]; [cite: 106]
    wire [31:0] perf_rdata; [cite: 106]
    perf_cntr perf (
        .clk_i   (clk),         // input  wire [cite: 107]
        .addr_i  (perf_addr),   // input  wire [3:0] [cite: 107]
        .wdata_i (perf_wdata),  // input  wire [2:0] [cite: 107]
        .w_en_i  (perf_we),     // input  wire [cite: 107]
        .rdata_o (perf_rdata)   // output wire [31:0] [cite: 107]
    );
    wire [15:0] vmem_rdata = {{5{vmem_rdata_t[2]}}, {6{vmem_rdata_t[1]}}, {5{vmem_rdata_t[0]}}}; [cite: 108]
    m_st7789_disp st7789_disp (
        .w_clk      (clk),         // input  wire [cite: 108]
        .st7789_SDA (st7789_SDA),  // output wire [cite: 108]
        .st7789_SCL (st7789_SCL),  // output wire [cite: 108]
        .st7789_DC  (st7789_DC),   // output wire [cite: 108]
        .st7789_RES (st7789_RES),  // output wire [cite: 108]
        .w_raddr    (vmem_raddr),  // output wire [15:0] [cite: 109]
        .w_rdata    (vmem_rdata)   // input  wire [15:0] [cite: 109]
    );
    /**************************************************************************************/ [cite: 110]
parameter CACHE_ENTRIES = 1024; [cite: 110]
    parameter CACHE_INDEX_BITS = 10; // log2(1024) = 10 [cite: 110]
    parameter CACHE_OFFSET_BITS = 2; [cite: 110]
// 4 bytes per block [cite: 111]
    parameter CACHE_TAG_BITS = 32 - CACHE_INDEX_BITS - CACHE_OFFSET_BITS; [cite: 111]
// 32 - 10 - 2 = 20 [cite: 112]

    // Cache memory arrays
    reg dc_valid [CACHE_ENTRIES-1:0]; [cite: 112]
    reg [CACHE_TAG_BITS-1:0] dc_tag [CACHE_ENTRIES-1:0]; [cite: 113]
    reg [31:0] dc_data [CACHE_ENTRIES-1:0]; [cite: 113]

    // Initialize valid bits to 0 for simulation
    integer i; [cite: 113]
    initial begin [cite: 114]
        for (i = 0; i < CACHE_ENTRIES; i = i + 1) begin [cite: 114]
            dc_valid[i] = 0; [cite: 114]
        end [cite: 115]
    end [cite: 115]

    // --- Combinational Logic for Address Decode and Hit Check ---

    // Deconstruct current cycle's address (for hit check and write)
    wire [CACHE_INDEX_BITS-1:0] current_index = dbus_addr[CACHE_INDEX_BITS + CACHE_OFFSET_BITS - 1 : CACHE_OFFSET_BITS]; [cite: 115]
// [11:2] [cite: 116]
    wire [CACHE_TAG_BITS-1:0]   current_tag   = dbus_addr[31 : CACHE_INDEX_BITS + CACHE_OFFSET_BITS]; [cite: 116, 117]
// [31:12] [cite: 117]

    // Read from cache memories based on the current index
    wire        cache_valid_out = dc_valid[current_index]; [cite: 117]
    wire [CACHE_TAG_BITS-1:0] cache_tag_out   = dc_tag[current_index]; [cite: 118]

    // Perform hit/miss check for the current CPU request
    wire is_read_hit  = dmem_re && cache_valid_out && (cache_tag_out == current_tag); [cite: 118, 119]
    wire is_write_hit = dmem_we && cache_valid_out && (cache_tag_out == current_tag); [cite: 119]
// --- Sequential Logic for State Latching and Debug --- [cite: 120]

    // Register CPU bus signals for use in the next cycle (for allocation and logging)
    reg r_dmem_re=0, r_dmem_we=0; [cite: 120]
    reg [31:0] r_dbus_addr=0, r_dbus_wdata=0; [cite: 121]
    reg [3:0] r_dbus_wstrb=0; [cite: 121]
    always @(posedge clk) begin [cite: 121]
        {r_dmem_re, r_dmem_we} <= {dmem_re, dmem_we}; [cite: 121, 122]
        {r_dbus_addr, r_dbus_wdata, r_dbus_wstrb} <= {dbus_addr, dbus_wdata, dbus_wstrb}; [cite: 122]
    end [cite: 122]

    // Register hit/miss status for logging
    reg r_dc_hit=0, r_dc_mis=0; [cite: 122, 123]
    always @(posedge clk) begin [cite: 123]
        r_dc_hit <= is_read_hit; [cite: 123]
        r_dc_mis <= dmem_re && !is_read_hit; [cite: 123, 124]
    end [cite: 124]

    // Deconstruct previous cycle's address (for allocation after miss)
    wire [CACHE_INDEX_BITS-1:0] reg_index = r_dbus_addr[CACHE_INDEX_BITS + CACHE_OFFSET_BITS - 1 : CACHE_OFFSET_BITS]; [cite: 124, 125]
// [11:2] [cite: 125]
    wire [CACHE_TAG_BITS-1:0]   reg_tag   = r_dbus_addr[31 : CACHE_INDEX_BITS + CACHE_OFFSET_BITS]; [cite: 125, 126]
// [31:12] [cite: 126]


    // --- Sequential Logic for Cache Updates (Write & Allocation) --- [cite: 126]
    always @(posedge clk) begin [cite: 126]
        // Write Policy: Write-Through / No-Write-Allocate [cite: 127]
        if (is_write_hit) begin [cite: 127]
            if (dbus_wstrb == 4'b1111) begin [cite: 127]
                // Full-word write hit: update cache data (Write-Through) [cite: 127]
                
                dc_data[current_index] <= dbus_wdata; [cite: 127]
            end else begin [cite: 128]
                // Partial-word write hit: invalidate the cache line [cite: 128]
                // This is a simplification to avoid byte-enable logic in the cache. [cite: 128]
                dc_valid[current_index] <= 0; [cite: 128]
            end [cite: 128]
        end [cite: 128]
        
        // Read Miss Allocation [cite: 129]
        // If there was a read miss in the previous cycle, the data from memory (`dmem_rdata`) [cite: 129]
        // is now available. [cite: 129]
        // Write it into the cache. [cite: 129]
        if (r_dmem_re && r_dc_mis) begin [cite: 129]
            dc_valid[reg_index] <= 1; [cite: 130]
            dc_tag[reg_index]   <= reg_tag; [cite: 130]
            dc_data[reg_index]  <= dmem_rdata; [cite: 130]
        end [cite: 130]
    end [cite: 130]


    // --- Debug Logging --- [cite: 131]
    always @(posedge clk) begin [cite: 131]
        // Note: The signals prefixed with 'r_' reflect the state from the *previous* cycle. [cite: 131]
        // This aligns the address/data from a request with its result (hit/miss and memory data) [cite: 131]
        // which arrives one cycle later. [cite: 132]
        if (r_dmem_re) begin [cite: 132]
            $write("LD: adr=%x, data=%x --------- : ", r_dbus_addr, dmem_rdata); [cite: 132, 133]
            if (r_dc_hit) $write("dc_hit (cached data=%x, mem data=%x)\n", dc_data[reg_index], dmem_rdata); [cite: 133]
            if (r_dc_mis) $write("dc_mis (stale data=%x, mem data=%x)\n", dc_data[reg_index], dmem_rdata); [cite: 133, 134]
        end [cite: 134]

        if (r_dmem_we) $write("ST: adr=%x, data=%x strb=%b\n", r_dbus_addr, r_dbus_wdata, r_dbus_wstrb); [cite: 134, 135]
        // Error Check: If it was a read hit, the data from the cache (read combinationally in the previous cycle) [cite: 135]
        // must match the data coming from main memory in this cycle. [cite: 136]
        if (r_dc_hit && dc_data[reg_index] != dmem_rdata) begin [cite: 136]
            $write("!!!!!_Error_in_data_cache: Cache data does not match memory data on a hit.\n"); [cite: 136, 137]
        end [cite: 137]
    end [cite: 137]

endmodule [cite: 137]

module m_imem (
    input  wire        clk_i, [cite: 137]
    input  wire [31:0] raddr_i, [cite: 138]
    output wire [31:0] rdata_o [cite: 138]
); [cite: 138]
    (* ram_style = "block" *) reg [31:0] imem[0:`IMEM_ENTRIES-1]; [cite: 138]
    `include "memi.txt" [cite: 139]

    wire [`IMEM_ADDRW-1:0] valid_raddr = raddr_i[`IMEM_ADDRW+1:2]; [cite: 139]
    reg [31:0] rdata = 0; [cite: 139]
    always @(posedge clk_i) begin [cite: 139]
        rdata <= imem[valid_raddr]; [cite: 139, 140]
    end [cite: 140]
    assign rdata_o = rdata; [cite: 140]
endmodule [cite: 140]

module m_dmem (
    input  wire        clk_i, [cite: 140]
    input  wire        re_i,               [cite: 141]
    input  wire        we_i, [cite: 141]
    input  wire [31:0] addr_i, [cite: 141]
    input  wire [31:0] wdata_i, [cite: 141]
    input  wire  [3:0] wstrb_i, [cite: 141]
    output wire [31:0] rdata_o [cite: 141]
); [cite: 141]
    (* ram_style = "block" *) reg [31:0] dmem[0:`DMEM_ENTRIES-1]; [cite: 141]
    `include "memd.txt" [cite: 142]

    wire [`DMEM_ADDRW-1:0] valid_addr = addr_i[`DMEM_ADDRW+1:2]; [cite: 142]
    reg [31:0] rdata = 0; [cite: 142]
    always @(posedge clk_i) begin [cite: 142]
        if (we_i) begin [cite: 142]
            if (wstrb_i[0]) dmem[valid_addr][7:0]   <= wdata_i[7:0]; [cite: 142, 143]
            if (wstrb_i[1]) dmem[valid_addr][15:8]  <= wdata_i[15:8]; [cite: 143]
            if (wstrb_i[2]) dmem[valid_addr][23:16] <= wdata_i[23:16]; [cite: 143]
            if (wstrb_i[3]) dmem[valid_addr][31:24] <= wdata_i[31:24]; [cite: 143, 144]
        end [cite: 144]
        if (re_i) rdata <= dmem[valid_addr]; [cite: 144, 145]
    end [cite: 145]
    assign rdata_o = rdata; [cite: 145]
endmodule [cite: 145]

module perf_cntr (
    input  wire        clk_i, [cite: 145]
    input  wire  [3:0] addr_i, [cite: 146]
    input  wire  [2:0] wdata_i, [cite: 146]
    input  wire        w_en_i, [cite: 146]
    output wire [31:0] rdata_o [cite: 146]
); [cite: 146]
    reg [63:0] mcycle   = 0; [cite: 146]
    reg  [1:0] cnt_ctrl = 0; [cite: 147]
    reg [31:0] rdata    = 0; [cite: 147]

    always @(posedge clk_i) begin [cite: 147]
        rdata <= (addr_i[2]) ? [cite: 147, 148]
            mcycle[31:0] : mcycle[63:32]; [cite: 148]
        if (w_en_i && addr_i == 0) cnt_ctrl <= wdata_i[1:0]; [cite: 148]
        case (cnt_ctrl) [cite: 149]
            0: mcycle <= 0; [cite: 149]
            1: mcycle <= mcycle + 1; [cite: 150]
            default: ; [cite: 150]
        endcase [cite: 150]
    end [cite: 150]

    assign rdata_o = rdata; [cite: 150, 151]
endmodule [cite: 151]

module vmem (
    input  wire        clk_i, [cite: 151]
    input  wire        we_i, [cite: 151]
    input  wire [15:0] waddr_i, [cite: 151, 152]
    input  wire  [2:0] wdata_i, [cite: 152]
    input  wire [15:0] raddr_i, [cite: 152]
    output wire  [2:0] rdata_o [cite: 152]
); [cite: 152]
    reg [2:0] vmem_lo[0:32767];  // vmem [cite: 152]
    reg [2:0] vmem_hi[0:32767];  // vmem [cite: 153]
    integer i; [cite: 153]
    initial begin [cite: 153]
        for (i = 0; i < 32768; i = i + 1) begin [cite: 153]
            vmem_lo[i] = 0; [cite: 153]
            vmem_hi[i] = 0; [cite: 154]
        end [cite: 154]
    end [cite: 154]

    reg        we; [cite: 154]
    reg        top; [cite: 155]
    reg  [2:0] wdata; [cite: 155]
    reg [14:0] waddr; [cite: 155]
    reg        rtop; [cite: 156]
    reg [14:0] raddr; [cite: 156]
    reg  [2:0] rdata_lo; [cite: 156]
    reg  [2:0] rdata_hi; [cite: 156]
    reg        sel; [cite: 157]

    localparam ADDR_MASK = 16'h7FFF; [cite: 157]
    always @(posedge clk_i) begin [cite: 158]
        we    <= we_i; [cite: 158]
        top   <= waddr_i[15]; [cite: 159]
        waddr <= waddr_i[14:0]; [cite: 159]
        wdata <= wdata_i; [cite: 159]

        rtop  <= raddr_i[15]; [cite: 159]
        raddr <= raddr_i[14:0]; [cite: 160]
        if (we) begin [cite: 160]
            if (top) vmem_hi[waddr&ADDR_MASK] <= wdata; [cite: 160, 161]
            else vmem_lo[waddr&ADDR_MASK] <= wdata; [cite: 161]
        end [cite: 161]

        sel      <= rtop; [cite: 161, 162]
        rdata_lo <= vmem_lo[raddr&ADDR_MASK]; [cite: 162]
        rdata_hi <= vmem_hi[raddr&ADDR_MASK]; [cite: 162]
    end [cite: 162]

    assign rdata_o = (sel) ? rdata_hi : rdata_lo; [cite: 162, 163]
`ifndef SYNTHESIS
    reg  [15:0] r_adr_p = 0; [cite: 163]
    reg  [15:0] r_dat_p = 0; [cite: 164]
    wire [15:0] data = {{5{wdata_i[2]}}, {6{wdata_i[1]}}, {5{wdata_i[0]}}}; [cite: 164]
    always @(posedge clk_i) [cite: 164]
        if (we_i) begin [cite: 164]
            case (waddr_i[15]) [cite: 164]
                0: [cite: 165]
                if (vmem_lo[waddr_i&ADDR_MASK] != wdata_i) begin [cite: 165]
                    r_adr_p <= waddr_i; [cite: 165]
                    r_dat_p <= data; [cite: 165]
                    $write("@D%0d_%0d\n", waddr_i ^ r_adr_p, data ^ r_dat_p); [cite: 165, 166]
                    $fflush(); [cite: 166]
                end [cite: 166]
                1: [cite: 166]
                if (vmem_hi[waddr_i&ADDR_MASK] != wdata_i) begin [cite: 166]
                    r_adr_p <= waddr_i; [cite: 167]
                    r_dat_p <= data; [cite: 167]
                    $write("@D%0d_%0d\n", waddr_i ^ r_adr_p, data ^ r_dat_p); [cite: 167, 168]
                    $fflush(); [cite: 168]
                end [cite: 168]
            endcase [cite: 168]
        end [cite: 168]
`endif [cite: 168]
endmodule [cite: 168]

module m_st7789_disp (
    input  wire        w_clk,  // main clock signal (100MHz) [cite: 169]
    output wire        st7789_SDA, [cite: 169]
    output wire        st7789_SCL, [cite: 169]
    output wire        st7789_DC, [cite: 169]
    output wire        st7789_RES, [cite: 169]
    output wire [15:0] w_raddr, [cite: 169]
    input  wire [15:0] w_rdata [cite: 170]
); [cite: 170]
    reg [31:0] r_cnt = 1; [cite: 170]
    always @(posedge w_clk) r_cnt <= (r_cnt == 0) ? 0 : r_cnt + 1; [cite: 170]
    reg r_RES = 1; [cite: 170]
    always @(posedge w_clk) begin [cite: 171]
        r_RES <= (r_cnt == 100000) ? [cite: 171]
            0 : (r_cnt == 200000) ? 1 : r_RES; [cite: 172]
    end [cite: 172]
    assign st7789_RES = r_RES; [cite: 172]
    wire       busy; [cite: 173]
    reg        r_en      = 0; [cite: 173]
    reg        init_done = 0; [cite: 174]
    reg  [4:0] r_state   = 0; [cite: 174]
    reg [19:0] r_state2  = 0; [cite: 175]
    reg  [8:0] r_dat     = 0; [cite: 175]
    reg [15:0] r_c       = 16'hf800; [cite: 176]

    reg [31:0] r_bcnt = 0; [cite: 176]
    always @(posedge w_clk) r_bcnt <= (busy) ? 0 : r_bcnt + 1; [cite: 177]
    always @(posedge w_clk) [cite: 178]
        if (!init_done) begin [cite: 178]
            r_en <= (r_cnt > 1000000 && !busy && r_bcnt > 1000000); [cite: 178]
        end else begin [cite: 179]
            r_en <= (!busy); [cite: 179, 180]
        end [cite: 180]

    always @(posedge w_clk) if (r_en && !init_done) r_state <= r_state + 1; [cite: 180]
    always @(posedge w_clk) [cite: 181]
        if (r_en && init_done) begin [cite: 181]
            r_state2 <= (r_state2==115210) ? [cite: 181]
                0 : r_state2 + 1; // 11 + 240x240*2 = 11 + 115200 = 115211 [cite: 182]
        end [cite: 182]

    reg [7:0] r_x = 0; [cite: 182]
    reg [7:0] r_y = 0; [cite: 183]
    always @(posedge w_clk) [cite: 183]
        if (r_en && init_done && r_state2[0] == 1) begin [cite: 183]
            r_x <= (r_state2 < 11 || r_x == 239) ? [cite: 183, 184]
                0 : r_x + 1; [cite: 184]
            r_y <= (r_state2 < 11) ? 0 : (r_x == 239) ? [cite: 184, 185]
                r_y + 1 : r_y; [cite: 185]
        end [cite: 185]

    wire [7:0] w_nx = 239 - r_x; [cite: 185, 186]
    wire [7:0] w_ny = 239 - r_y; [cite: 186]
    assign w_raddr = (`LCD_ROTATE == 0) ? [cite: 186, 187]
        {r_y, r_x} :  // default [cite: 187]
        (`LCD_ROTATE == 1) ? [cite: 187, 188]
        {r_x, w_ny} :  // 90 degree rotation [cite: 188]
        (`LCD_ROTATE == 2) ? [cite: 188, 189]
        {w_ny, w_nx} : {w_nx, r_y};  //180 degree, 240 degree rotation [cite: 189]

    reg [15:0] r_color = 0; [cite: 189, 190]
    always @(posedge w_clk) r_color <= w_rdata; [cite: 190]

    always @(posedge w_clk) begin [cite: 190]
        case (r_state2)  ///// [cite: 190]
            0: r_dat <= {1'b0, 8'h2A}; [cite: 191]
// Column Address Set [cite: 191]
            1: r_dat <= {1'b1, 8'h00}; [cite: 191, 192]
// [0] [cite: 192]
            2: r_dat <= {1'b1, 8'h00}; [cite: 192, 193]
// [0] [cite: 193]
            3: r_dat <= {1'b1, 8'h00}; [cite: 193, 194]
// [0] [cite: 194]
            4: r_dat <= {1'b1, 8'd239}; [cite: 194, 195]
// [239] [cite: 195]
            5: r_dat <= {1'b0, 8'h2B}; [cite: 195, 196]
// Row Address Set [cite: 196]
            6: r_dat <= {1'b1, 8'h00}; [cite: 196, 197]
// [0] [cite: 197]
            7: r_dat <= {1'b1, 8'h00}; [cite: 197, 198]
// [0] [cite: 198]
            8: r_dat <= {1'b1, 8'h00}; [cite: 198, 199]
// [0] [cite: 199]
            9: r_dat <= {1'b1, 8'd239}; [cite: 199, 200]
// [239] [cite: 200]
            10: r_dat <= {1'b0, 8'h2C}; [cite: 200, 201]
// Memory Write [cite: 201]
            default: r_dat <= (r_state2[0]) ? [cite: 201, 202]
                {1'b1, r_color[15:8]} : {1'b1, r_color[7:0]}; [cite: 202]
        endcase [cite: 202]
    end [cite: 202]

    reg [8:0] r_init = 0; [cite: 202, 203]
    always @(posedge w_clk) begin [cite: 203]
        case (r_state)  ///// [cite: 203]
            0: r_init <= {1'b0, 8'h01}; [cite: 203, 204]
// Software Reset, wait 120msec [cite: 204]
            1: r_init <= {1'b0, 8'h11}; [cite: 204, 205]
// Sleep Out, wait 120msec [cite: 205]
            2: r_init <= {1'b0, 8'h3A}; [cite: 205, 206]
// Interface Pixel Format [cite: 206]
            3: r_init <= {1'b1, 8'h55}; [cite: 206, 207]
// [65K RGB, 16bit/pixel] [cite: 207]
            4: r_init <= {1'b0, 8'h36}; [cite: 207, 208]
// Memory Data Accell Control [cite: 208]
            5: r_init <= {1'b1, 8'h00}; [cite: 208, 209]
// [000000] [cite: 209]
            6: r_init <= {1'b0, 8'h21}; [cite: 209, 210]
// Display Inversion On [cite: 210]
            7: r_init <= {1'b0, 8'h13}; [cite: 210, 211]
// Normal Display Mode On [cite: 211]
            8: r_init <= {1'b0, 8'h29}; [cite: 211, 212]
// Display On [cite: 212]
            9: init_done <= 1; [cite: 212, 213]
        endcase [cite: 213]
    end [cite: 213]

    wire [8:0] w_data = (init_done) ? r_dat : r_init; [cite: 213, 214]
    m_spi spi0 (
        w_clk, [cite: 214]
        r_en, [cite: 214]
        w_data, [cite: 214]
        st7789_SDA, [cite: 214]
        st7789_SCL, [cite: 214]
        st7789_DC, [cite: 214]
        busy [cite: 214]
    ); [cite: 214]
endmodule [cite: 215]

/****** SPI send module,  SPI_MODE_2, MSBFIRST                                           *****/ [cite: 215]
/*********************************************************************************************/ [cite: 215]
module m_spi (
    input  wire       w_clk,  // 100MHz input clock !! [cite: 216]
    input  wire       en,     // write enable [cite: 216]
    input  wire [8:0] d_in,   // data in [cite: 216]
    output wire       SDA,    // Serial Data [cite: 216]
    output wire       SCL,    // Serial Clock [cite: 216]
    output wire       DC,     // Data/Control [cite: 216]
    output wire       busy    // busy [cite: 217]
); [cite: 217]
    reg [5:0] r_state = 0; [cite: 217]
    reg [7:0] r_cnt   = 0; [cite: 217]
    reg       r_SCL   = 1; [cite: 218]
    reg       r_DC    = 0; [cite: 219]
    reg [7:0] r_data  = 0; [cite: 219]
    reg       r_SDA   = 0; [cite: 220]
    always @(posedge w_clk) begin [cite: 221]
        if (en && r_state == 0) begin [cite: 221]
            r_state <= 1; [cite: 221]
            r_data  <= d_in[7:0]; [cite: 222]
            r_DC    <= d_in[8]; [cite: 222]
            r_cnt   <= 0; [cite: 222]
        end else if (r_state == 1) begin [cite: 223]
            r_SDA   <= r_data[7]; [cite: 223]
            r_data  <= {r_data[6:0], 1'b0}; [cite: 224]
            r_state <= 2; [cite: 224]
            r_cnt   <= r_cnt + 1; [cite: 224]
        end else if (r_state == 2) begin [cite: 225]
            r_SCL   <= 0; [cite: 225]
            r_state <= 3; [cite: 226]
        end else if (r_state == 3) begin [cite: 226]
            r_state <= 4; [cite: 226, 227]
        end else if (r_state == 4) begin [cite: 227]
            r_SCL   <= 1; [cite: 227, 228]
            r_state <= (r_cnt == 8) ? 0 : 1; [cite: 228]
        end [cite: 228]
    end [cite: 228]

    assign SDA  = r_SDA; [cite: 229]
    assign SCL  = r_SCL; [cite: 229]
    assign DC   = r_DC; [cite: 229]
    assign busy = (r_state != 0 || en); [cite: 229]
endmodule
/*********************************************************************************************/
`resetall