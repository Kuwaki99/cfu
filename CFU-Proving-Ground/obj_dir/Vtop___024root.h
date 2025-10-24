// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__rst_n;
        CData/*0:0*/ top__DOT__cpu_sim_fini;
        CData/*0:0*/ top__DOT__m0__DOT__rst_ni;
        CData/*0:0*/ top__DOT__m0__DOT__dbus_we;
        CData/*3:0*/ top__DOT__m0__DOT__dbus_wstrb;
        CData/*0:0*/ top__DOT__m0__DOT__rdata_sel;
        CData/*0:0*/ top__DOT__m0__DOT__dmem_re;
        CData/*0:0*/ top__DOT__m0__DOT__dmem_we;
        CData/*0:0*/ top__DOT__m0__DOT__vmem_we;
        CData/*2:0*/ top__DOT__m0__DOT__vmem_rdata_t;
        CData/*3:0*/ top__DOT__m0__DOT__perf_addr;
        CData/*0:0*/ top__DOT__m0__DOT__is_read_hit;
        CData/*0:0*/ top__DOT__m0__DOT__is_write_hit;
        CData/*0:0*/ top__DOT__m0__DOT__r_dmem_re;
        CData/*0:0*/ top__DOT__m0__DOT__r_dmem_we;
        CData/*3:0*/ top__DOT__m0__DOT__r_dbus_wstrb;
        CData/*0:0*/ top__DOT__m0__DOT__r_dc_hit;
        CData/*0:0*/ top__DOT__m0__DOT__r_dc_mis;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_v;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_br_pred_tkn;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_pat_hist;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use;
        CData/*2:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_instr_type;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_rf_we;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_rd;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_rs1;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_rs2;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_v;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_br_pred_tkn;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_pat_hist;
        CData/*7:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl;
        CData/*5:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl;
        CData/*3:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl;
        CData/*2:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_rs1_fwd_Ma_to_Ex;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_rs2_fwd_Ma_to_Ex;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_rf_we;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_rd;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_v;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_is_ctrl_tsfr;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt1;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt2;
        CData/*5:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_rf_we;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_rd;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_j_b_insn;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_mul_stall;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_div_stall;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_stall;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__MaWb_v;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__MaWb_rf_we;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__MaWb_rd;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__rst;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__Ma_br_misp;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__If_v;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__Ex_v;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__If_pc_stall;
        CData/*2:0*/ top__DOT__m0__DOT__cpu__DOT__If_instr_type;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__If_rd;
    };
    struct {
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__If_rs1;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__If_rs2;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__If_load_muldiv_use;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__Ex_valid;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__dbus_offset;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_5;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_0;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_1;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__is_high;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__state;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_dividend_neg;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem;
        CData/*4:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr;
        CData/*1:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7;
        CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_8;
        CData/*0:0*/ top__DOT__m0__DOT__vmem__DOT__we;
        CData/*0:0*/ top__DOT__m0__DOT__vmem__DOT__top;
        CData/*2:0*/ top__DOT__m0__DOT__vmem__DOT__wdata;
        CData/*0:0*/ top__DOT__m0__DOT__vmem__DOT__rtop;
        CData/*2:0*/ top__DOT__m0__DOT__vmem__DOT__rdata_lo;
        CData/*2:0*/ top__DOT__m0__DOT__vmem__DOT__rdata_hi;
        CData/*0:0*/ top__DOT__m0__DOT__vmem__DOT__sel;
        CData/*1:0*/ top__DOT__m0__DOT__perf__DOT__cnt_ctrl;
        CData/*0:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_RES;
        CData/*0:0*/ top__DOT__m0__DOT__st7789_disp__DOT__busy;
        CData/*0:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_en;
        CData/*0:0*/ top__DOT__m0__DOT__st7789_disp__DOT__init_done;
        CData/*4:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_state;
        CData/*7:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_x;
        CData/*7:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_y;
        CData/*5:0*/ top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state;
        CData/*7:0*/ top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt;
        CData/*0:0*/ top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SCL;
        CData/*0:0*/ top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_DC;
        CData/*7:0*/ top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data;
        CData/*0:0*/ top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SDA;
        CData/*0:0*/ __VdlyVal__top__DOT__clk__v0;
    };
    struct {
        CData/*0:0*/ __VdlySet__top__DOT__clk__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__m0__DOT__vmem_addr;
        SData/*15:0*/ top__DOT__m0__DOT__vmem_raddr;
        SData/*9:0*/ top__DOT__m0__DOT__current_index;
        SData/*8:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl;
        SData/*10:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl;
        SData/*9:0*/ top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10;
        SData/*11:0*/ top__DOT__m0__DOT__dmem__DOT__valid_addr;
        SData/*14:0*/ top__DOT__m0__DOT__vmem__DOT__waddr;
        SData/*14:0*/ top__DOT__m0__DOT__vmem__DOT__raddr;
        SData/*15:0*/ top__DOT__m0__DOT__vmem__DOT__r_adr_p;
        SData/*15:0*/ top__DOT__m0__DOT__vmem__DOT__r_dat_p;
        SData/*15:0*/ top__DOT__m0__DOT__vmem__DOT__data;
        SData/*8:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_dat;
        SData/*15:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_color;
        SData/*8:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_init;
        SData/*8:0*/ top__DOT__m0__DOT__st7789_disp__DOT__w_data;
        IData/*31:0*/ top__DOT__r_num_dchit;
        IData/*31:0*/ top__DOT__r_num_dcmis;
        IData/*31:0*/ top__DOT__m0__DOT__dbus_addr;
        IData/*31:0*/ top__DOT__m0__DOT__dbus_wdata;
        IData/*31:0*/ top__DOT__m0__DOT__dbus_rdata;
        IData/*31:0*/ top__DOT__m0__DOT__i;
        IData/*31:0*/ top__DOT__m0__DOT__r_dbus_addr;
        IData/*31:0*/ top__DOT__m0__DOT__r_dbus_wdata;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__r_pc;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_pc;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IfId_ir;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_pc;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_ir;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_src1;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_src2;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_imm;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__IdEx_j_pc4;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_pc;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_ir;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_rslt;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__ExMa_mdc_rslt;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__MaWb_pc;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__MaWb_ir;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__MaWb_rslt;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__Id_imm;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__Ex_src1;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__Ex_src2;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__Ma_rslt;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__i;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_remainder;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_divisor;
        IData/*31:0*/ top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9;
        IData/*31:0*/ top__DOT__m0__DOT__imem__DOT__rdata;
        IData/*31:0*/ top__DOT__m0__DOT__dmem__DOT__rdata;
        IData/*31:0*/ top__DOT__m0__DOT__vmem__DOT__i;
        IData/*31:0*/ top__DOT__m0__DOT__perf__DOT__rdata;
        IData/*31:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_cnt;
    };
    struct {
        IData/*19:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_state2;
        IData/*31:0*/ top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_1_0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ top__DOT__mcycle;
        QData/*63:0*/ top__DOT__minstret;
        QData/*63:0*/ top__DOT__br_pred_cntr;
        QData/*63:0*/ top__DOT__br_misp_cntr;
        QData/*33:0*/ top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t;
        QData/*32:0*/ top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplicand;
        QData/*32:0*/ top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplier;
        QData/*63:0*/ top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product;
        QData/*32:0*/ top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference;
        QData/*63:0*/ top__DOT__m0__DOT__perf__DOT__mcycle;
        VlUnpacked<CData/*0:0*/, 1024> top__DOT__m0__DOT__dc_valid;
        VlUnpacked<IData/*19:0*/, 1024> top__DOT__m0__DOT__dc_tag;
        VlUnpacked<IData/*31:0*/, 1024> top__DOT__m0__DOT__dc_data;
        VlUnpacked<SData/*14:0*/, 2048> top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram;
        VlUnpacked<IData/*31:0*/, 8192> top__DOT__m0__DOT__imem__DOT__imem;
        VlUnpacked<IData/*31:0*/, 4096> top__DOT__m0__DOT__dmem__DOT__dmem;
        VlUnpacked<CData/*2:0*/, 32768> top__DOT__m0__DOT__vmem__DOT__vmem_lo;
        VlUnpacked<CData/*2:0*/, 32768> top__DOT__m0__DOT__vmem__DOT__vmem_hi;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
