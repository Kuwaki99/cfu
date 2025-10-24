// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clk__0 
        = vlSelfRef.top__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "top.v", 8);
    vlSelfRef.top__DOT__rst_n = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xfULL, nullptr, 
                                         "main.v", 
                                         15);
    vlSelfRef.top__DOT__m0__DOT__rst_ni = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "top.v", 
                                             7);
        vlSelfRef.__VdlyVal__top__DOT__clk__v0 = (1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__clk)));
        vlSelfRef.__VdlySet__top__DOT__clk__v0 = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtop__ConstPool__TABLE_h009af01a_0;
extern const VlUnpacked<SData/*8:0*/, 32> Vtop__ConstPool__TABLE_h4db348d4_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h0ba786de_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_0;
    top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_0 = 0;
    CData/*0:0*/ top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_1;
    top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_1 = 0;
    CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__pre_decoder__DOT____VdfgRegularize_h8fbbae0b_0_0;
    top__DOT__m0__DOT__cpu__DOT__pre_decoder__DOT____VdfgRegularize_h8fbbae0b_0_0 = 0;
    CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_5;
    top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_5 = 0;
    CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_6;
    top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_6 = 0;
    CData/*0:0*/ top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_7;
    top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_7 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*0:0*/ __Vdly__top__DOT__cpu_sim_fini;
    __Vdly__top__DOT__cpu_sim_fini = 0;
    CData/*0:0*/ __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem = 0;
    CData/*0:0*/ __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg = 0;
    CData/*0:0*/ __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg = 0;
    IData/*31:0*/ __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder = 0;
    IData/*31:0*/ __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient = 0;
    SData/*15:0*/ __Vdly__top__DOT__m0__DOT__vmem__DOT__r_adr_p;
    __Vdly__top__DOT__m0__DOT__vmem__DOT__r_adr_p = 0;
    SData/*15:0*/ __Vdly__top__DOT__m0__DOT__vmem__DOT__r_dat_p;
    __Vdly__top__DOT__m0__DOT__vmem__DOT__r_dat_p = 0;
    QData/*63:0*/ __Vdly__top__DOT__m0__DOT__perf__DOT__mcycle;
    __Vdly__top__DOT__m0__DOT__perf__DOT__mcycle = 0;
    IData/*31:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_cnt;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_cnt = 0;
    IData/*31:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt = 0;
    CData/*4:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state = 0;
    IData/*19:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state2;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state2 = 0;
    CData/*7:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_x;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_x = 0;
    CData/*5:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state = 0;
    CData/*7:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data = 0;
    CData/*7:0*/ __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__m0__DOT__dc_data__v0;
    __VdlyVal__top__DOT__m0__DOT__dc_data__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__m0__DOT__dc_data__v0;
    __VdlyDim0__top__DOT__m0__DOT__dc_data__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dc_data__v0;
    __VdlySet__top__DOT__m0__DOT__dc_data__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__m0__DOT__dc_data__v1;
    __VdlyVal__top__DOT__m0__DOT__dc_data__v1 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__m0__DOT__dc_data__v1;
    __VdlyDim0__top__DOT__m0__DOT__dc_data__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dc_data__v1;
    __VdlySet__top__DOT__m0__DOT__dc_data__v1 = 0;
    IData/*19:0*/ __VdlyVal__top__DOT__m0__DOT__dc_tag__v0;
    __VdlyVal__top__DOT__m0__DOT__dc_tag__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__m0__DOT__dc_tag__v0;
    __VdlyDim0__top__DOT__m0__DOT__dc_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dc_tag__v0;
    __VdlySet__top__DOT__m0__DOT__dc_tag__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__m0__DOT__dc_valid__v0;
    __VdlyDim0__top__DOT__m0__DOT__dc_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dc_valid__v0;
    __VdlySet__top__DOT__m0__DOT__dc_valid__v0 = 0;
    SData/*9:0*/ __VdlyDim0__top__DOT__m0__DOT__dc_valid__v1;
    __VdlyDim0__top__DOT__m0__DOT__dc_valid__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dc_valid__v1;
    __VdlySet__top__DOT__m0__DOT__dc_valid__v1 = 0;
    SData/*14:0*/ __VdlyVal__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0;
    __VdlyVal__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0 = 0;
    SData/*10:0*/ __VdlyDim0__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0;
    __VdlyDim0__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0;
    __VdlySet__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0 = 0;
    IData/*31:0*/ __VdlyVal__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0;
    __VdlyVal__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0;
    __VdlyDim0__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0;
    __VdlySet__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v0;
    __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v0;
    __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v0;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v0 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v1;
    __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v1 = 0;
    SData/*11:0*/ __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v1;
    __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v1 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v1;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v1 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v2;
    __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v2 = 0;
    SData/*11:0*/ __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v2;
    __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v2 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v2;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v2 = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v3;
    __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v3 = 0;
    SData/*11:0*/ __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v3;
    __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v3 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v3;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v3 = 0;
    CData/*2:0*/ __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0;
    __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0 = 0;
    SData/*14:0*/ __VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0;
    __VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0;
    __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0 = 0;
    CData/*2:0*/ __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0;
    __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0 = 0;
    SData/*14:0*/ __VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0;
    __VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0;
    __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0 = 0;
    // Body
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_cnt 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt;
    __Vdly__top__DOT__cpu_sim_fini = vlSelfRef.top__DOT__cpu_sim_fini;
    __Vdly__top__DOT__m0__DOT__vmem__DOT__r_adr_p = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_adr_p;
    __Vdly__top__DOT__m0__DOT__vmem__DOT__r_dat_p = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_dat_p;
    __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0 = 0U;
    __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0 = 0U;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state;
    __VdlySet__top__DOT__m0__DOT__dc_tag__v0 = 0U;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state2 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_x 
        = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v0 = 0U;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v1 = 0U;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v2 = 0U;
    __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v3 = 0U;
    __VdlySet__top__DOT__m0__DOT__dc_valid__v0 = 0U;
    __VdlySet__top__DOT__m0__DOT__dc_valid__v1 = 0U;
    __Vdly__top__DOT__m0__DOT__perf__DOT__mcycle = vlSelfRef.top__DOT__m0__DOT__perf__DOT__mcycle;
    if (VL_UNLIKELY((vlSelfRef.top__DOT__m0__DOT__r_dmem_re))) {
        VL_WRITEF_NX("LD: adr=%x, data=%x --------- : ",0,
                     32,vlSelfRef.top__DOT__m0__DOT__r_dbus_addr,
                     32,vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata);
        if (VL_UNLIKELY((vlSelfRef.top__DOT__m0__DOT__r_dc_hit))) {
            VL_WRITEF_NX("dc_hit (cached data=%x, mem data=%x)\n",0,
                         32,vlSelfRef.top__DOT__m0__DOT__dc_data
                         [(0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                                     >> 2U))],32,vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata);
        }
        if (VL_UNLIKELY((vlSelfRef.top__DOT__m0__DOT__r_dc_mis))) {
            VL_WRITEF_NX("dc_mis (stale data=%x, mem data=%x)\n",0,
                         32,vlSelfRef.top__DOT__m0__DOT__dc_data
                         [(0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                                     >> 2U))],32,vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata);
        }
    }
    if (VL_UNLIKELY((vlSelfRef.top__DOT__m0__DOT__r_dmem_we))) {
        VL_WRITEF_NX("ST: adr=%x, data=%x strb=%b\n",0,
                     32,vlSelfRef.top__DOT__m0__DOT__r_dbus_addr,
                     32,vlSelfRef.top__DOT__m0__DOT__r_dbus_wdata,
                     4,(IData)(vlSelfRef.top__DOT__m0__DOT__r_dbus_wstrb));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.top__DOT__m0__DOT__r_dc_hit) 
                      & (vlSelfRef.top__DOT__m0__DOT__dc_data
                         [(0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                                     >> 2U))] != vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata))))) {
        VL_WRITEF_NX("!!!!!_Error_in_data_cache: Cache data does not match memory data on a hit.\n",0);
    }
    __VdlySet__top__DOT__m0__DOT__dc_data__v0 = 0U;
    __VdlySet__top__DOT__m0__DOT__dc_data__v1 = 0U;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder;
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor;
    __VdlySet__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0 = 0U;
    __VdlySet__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0 = 0U;
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_cnt 
        = ((0U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt)
            ? 0U : ((IData)(1U) + vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt));
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_RES 
        = ((0x186a0U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt)
            ? 0U : ((0x30d40U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt)
                     ? 1U : (1U & (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_RES))));
    __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__busy)
            ? 0U : ((IData)(1U) + vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt));
    if (vlSelfRef.top__DOT__m0__DOT__r_dc_hit) {
        vlSelfRef.top__DOT__r_num_dchit = ((IData)(1U) 
                                           + vlSelfRef.top__DOT__r_num_dchit);
    }
    if (vlSelfRef.top__DOT__m0__DOT__r_dc_mis) {
        vlSelfRef.top__DOT__r_num_dcmis = ((IData)(1U) 
                                           + vlSelfRef.top__DOT__r_num_dcmis);
    }
    if (((IData)(vlSelfRef.top__DOT__m0__DOT__rst_ni) 
         & (~ (IData)(vlSelfRef.top__DOT__cpu_sim_fini)))) {
        vlSelfRef.top__DOT__mcycle = (1ULL + vlSelfRef.top__DOT__mcycle);
    }
    if (((vlSelfRef.top__DOT__m0__DOT__dbus_addr >> 0x1fU) 
         & (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_we))) {
        if (VL_LIKELY(((0x20000U == vlSelfRef.top__DOT__m0__DOT__dbus_wdata)))) {
            __Vdly__top__DOT__cpu_sim_fini = 1U;
        } else {
            VL_WRITEF_NX("%c",0,8,(0xffU & vlSelfRef.top__DOT__m0__DOT__dbus_wdata));
            Verilated::runFlushCallbacks();
        }
        if ((0x10000000U > vlSelfRef.top__DOT__m0__DOT__dbus_addr)) {
            __Vdly__top__DOT__cpu_sim_fini = 1U;
        }
    }
    if (VL_UNLIKELY((vlSelfRef.top__DOT__cpu_sim_fini))) {
        VL_FINISH_MT("top.v", 44, "");
    }
    if (vlSelfRef.top__DOT__m0__DOT__vmem_we) {
        if ((0x8000U & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr))) {
            if ((0x8000U & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr))) {
                if (VL_UNLIKELY(((vlSelfRef.top__DOT__m0__DOT__vmem__DOT__vmem_hi
                                  [(0x7fffU & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr))] 
                                  != (7U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))))) {
                    VL_WRITEF_NX("@D%0#_%0#\n",0,16,
                                 ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr) 
                                  ^ (IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_adr_p)),
                                 16,((IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__data) 
                                     ^ (IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_dat_p)));
                    Verilated::runFlushCallbacks();
                    __Vdly__top__DOT__m0__DOT__vmem__DOT__r_adr_p 
                        = vlSelfRef.top__DOT__m0__DOT__vmem_addr;
                    __Vdly__top__DOT__m0__DOT__vmem__DOT__r_dat_p 
                        = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__data;
                }
            }
        } else if (VL_UNLIKELY(((vlSelfRef.top__DOT__m0__DOT__vmem__DOT__vmem_lo
                                 [(0x7fffU & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr))] 
                                 != (7U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))))) {
            VL_WRITEF_NX("@D%0#_%0#\n",0,16,((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr) 
                                             ^ (IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_adr_p)),
                         16,((IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__data) 
                             ^ (IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_dat_p)));
            Verilated::runFlushCallbacks();
            __Vdly__top__DOT__m0__DOT__vmem__DOT__r_adr_p 
                = vlSelfRef.top__DOT__m0__DOT__vmem_addr;
            __Vdly__top__DOT__m0__DOT__vmem__DOT__r_dat_p 
                = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__data;
        }
    }
    if (((IData)(vlSelfRef.top__DOT__m0__DOT__rst_ni) 
         & (~ (IData)(vlSelfRef.top__DOT__cpu_sim_fini)))) {
        if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_is_ctrl_tsfr) {
            vlSelfRef.top__DOT__br_pred_cntr = (1ULL 
                                                + vlSelfRef.top__DOT__br_pred_cntr);
        }
        if (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_is_ctrl_tsfr) 
             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp))) {
            vlSelfRef.top__DOT__br_misp_cntr = (1ULL 
                                                + vlSelfRef.top__DOT__br_misp_cntr);
        }
        if (((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)) 
             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v))) {
            vlSelfRef.top__DOT__minstret = (1ULL + vlSelfRef.top__DOT__minstret);
        }
    }
    if (vlSelfRef.top__DOT__m0__DOT__vmem__DOT__we) {
        if (vlSelfRef.top__DOT__m0__DOT__vmem__DOT__top) {
            __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0 
                = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__wdata;
            __VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0 
                = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__waddr;
            __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0 = 1U;
        } else {
            __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0 
                = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__wdata;
            __VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0 
                = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__waddr;
            __VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0 = 1U;
        }
    }
    if (((IData)(vlSelfRef.top__DOT__m0__DOT__r_dmem_re) 
         & (IData)(vlSelfRef.top__DOT__m0__DOT__r_dc_mis))) {
        __VdlyVal__top__DOT__m0__DOT__dc_tag__v0 = 
            (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
             >> 0xcU);
        __VdlyDim0__top__DOT__m0__DOT__dc_tag__v0 = 
            (0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                       >> 2U));
        __VdlySet__top__DOT__m0__DOT__dc_tag__v0 = 1U;
        __VdlyDim0__top__DOT__m0__DOT__dc_valid__v1 
            = (0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                         >> 2U));
        __VdlySet__top__DOT__m0__DOT__dc_valid__v1 = 1U;
        __VdlyVal__top__DOT__m0__DOT__dc_data__v1 = vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata;
        __VdlyDim0__top__DOT__m0__DOT__dc_data__v1 
            = (0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                         >> 2U));
        __VdlySet__top__DOT__m0__DOT__dc_data__v1 = 1U;
    }
    if (((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en) 
         & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done)))) {
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state)));
    }
    if (((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en) 
         & (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done))) {
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state2 
            = ((0x1c20aU == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                ? 0U : (0xfffffU & ((IData)(1U) + vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)));
    }
    if ((((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en) 
          & (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done)) 
         & vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)) {
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_x 
            = (((0xbU > vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2) 
                | (0xefU == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x)))
                ? 0U : (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x))));
        vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y 
            = ((0xbU > vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                ? 0U : (0xffU & ((0xefU == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x))
                                  ? ((IData)(1U) + (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y))
                                  : (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y))));
    }
    if (vlSelfRef.top__DOT__m0__DOT__dmem_we) {
        if ((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb))) {
            __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v0 
                = (0xffU & vlSelfRef.top__DOT__m0__DOT__dbus_wdata);
            __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v0 
                = vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr;
            __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb))) {
            __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v1 
                = (0xffU & (vlSelfRef.top__DOT__m0__DOT__dbus_wdata 
                            >> 8U));
            __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v1 
                = vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr;
            __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb))) {
            __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v2 
                = (0xffU & (vlSelfRef.top__DOT__m0__DOT__dbus_wdata 
                            >> 0x10U));
            __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v2 
                = vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr;
            __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb))) {
            __VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v3 
                = (vlSelfRef.top__DOT__m0__DOT__dbus_wdata 
                   >> 0x18U);
            __VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v3 
                = vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr;
            __VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v3 = 1U;
        }
    }
    if (vlSelfRef.top__DOT__m0__DOT__is_write_hit) {
        if ((0xfU != (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb))) {
            __VdlyDim0__top__DOT__m0__DOT__dc_valid__v0 
                = vlSelfRef.top__DOT__m0__DOT__current_index;
            __VdlySet__top__DOT__m0__DOT__dc_valid__v0 = 1U;
        }
        if ((0xfU == (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb))) {
            __VdlyVal__top__DOT__m0__DOT__dc_data__v0 
                = vlSelfRef.top__DOT__m0__DOT__dbus_wdata;
            __VdlyDim0__top__DOT__m0__DOT__dc_data__v0 
                = vlSelfRef.top__DOT__m0__DOT__current_index;
            __VdlySet__top__DOT__m0__DOT__dc_data__v0 = 1U;
        }
    }
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr 
        = ((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state))
            ? 0x1fU : (0x1fU & ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state))
                                 ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr) 
                                    - (IData)(1U)) : (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr))));
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder 
        = (IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init)
                     ? ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)) 
                        << 0x20U) : (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                                      & (0U == vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                                      ? (0xffffffffULL 
                                         | ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder)) 
                                            << 0x20U))
                                      : (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                                          & (0U != vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                                          ? (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_remainder))
                                          : ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference 
                                                             >> 0x20U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (0x7fffffffU 
                                                                    & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder))) 
                                                   << 0x21U) 
                                                  | ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient)) 
                                                     << 1U))
                                                  : 
                                                 (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     | (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient 
                                                                        << 1U))))))
                                              : (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient))))))) 
                   >> 0x20U));
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient 
        = (IData)(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init)
                    ? ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)) 
                       << 0x20U) : (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                                     & (0U == vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                                     ? (0xffffffffULL 
                                        | ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder)) 
                                           << 0x20U))
                                     : (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                                         & (0U != vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                                         ? (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_remainder))
                                         : ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference 
                                                            >> 0x20U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder))) 
                                                  << 0x21U) 
                                                 | ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient)) 
                                                    << 1U))
                                                 : 
                                                (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    | (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient 
                                                                       << 1U))))))
                                             : (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient))))))));
    if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) {
        __VdlyVal__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt;
        __VdlyDim0__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd;
        __VdlySet__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0 = 1U;
    }
    if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_j_b_insn) {
        __VdlyVal__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0 
            = ((0x7ffcU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc) 
               | (3U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn)
                         ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist) 
                            + (3U > (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist)))
                         : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist) 
                            - (0U < (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist))))));
        __VdlyDim0__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0 
            = (0x7ffU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc 
                         >> 2U));
        __VdlySet__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0 = 1U;
    }
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_mul_stall 
        = (0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_div_stall 
        = (0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state));
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__sel = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rtop;
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_dat 
        = (((((((((0U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2) 
                  | (1U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)) 
                 | (2U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)) 
                | (3U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)) 
               | (4U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)) 
              | (5U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)) 
             | (6U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)) 
            | (7U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2))
            ? ((0U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                ? 0x2aU : ((1U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                            ? 0x100U : ((2U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                                         ? 0x100U : 
                                        ((3U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                                          ? 0x100U : 
                                         ((4U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                                           ? 0x1efU
                                           : ((5U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                                               ? 0x2bU
                                               : 0x100U))))))
            : ((8U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                ? 0x100U : ((9U == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                             ? 0x1efU : ((0xaU == vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                                          ? 0x2cU : 
                                         ((1U & vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2)
                                           ? (0x100U 
                                              | (0xffU 
                                                 & ((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_color) 
                                                    >> 8U)))
                                           : (0x100U 
                                              | (0xffU 
                                                 & (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_color))))))));
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_lo 
        = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__vmem_lo
        [vlSelfRef.top__DOT__m0__DOT__vmem__DOT__raddr];
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_hi 
        = vlSelfRef.top__DOT__m0__DOT__vmem__DOT__vmem_hi
        [vlSelfRef.top__DOT__m0__DOT__vmem__DOT__raddr];
    vlSelfRef.top__DOT__m0__DOT__rdata_sel = (1U & 
                                              (vlSelfRef.top__DOT__m0__DOT__dbus_addr 
                                               >> 0x1eU));
    if (((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en) 
         & (0U == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state)))) {
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state = 1U;
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data 
            = (0xffU & (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__w_data));
        vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_DC 
            = (1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__w_data) 
                     >> 8U));
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt = 0U;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state))) {
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt 
            = (0xffU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt)));
        vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SDA 
            = (1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data) 
                     >> 7U));
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state = 2U;
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data 
            = (0xfeU & ((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data) 
                        << 1U));
    } else if ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state))) {
        vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SCL = 0U;
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state = 3U;
    } else if ((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state))) {
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state = 4U;
    } else if ((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state))) {
        vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SCL = 1U;
        __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state 
            = ((8U == (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt))
                ? 0U : 1U);
    }
    vlSelfRef.top__DOT__m0__DOT__perf__DOT__rdata = 
        ((4U & (IData)(vlSelfRef.top__DOT__m0__DOT__perf_addr))
          ? (IData)(vlSelfRef.top__DOT__m0__DOT__perf__DOT__mcycle)
          : (IData)((vlSelfRef.top__DOT__m0__DOT__perf__DOT__mcycle 
                     >> 0x20U)));
    if ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__perf__DOT__cnt_ctrl))) {
        __Vdly__top__DOT__m0__DOT__perf__DOT__mcycle = 0ULL;
    } else if ((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__perf__DOT__cnt_ctrl))) {
        __Vdly__top__DOT__m0__DOT__perf__DOT__mcycle 
            = (1ULL + vlSelfRef.top__DOT__m0__DOT__perf__DOT__mcycle);
    }
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_mdc_rslt 
        = ((((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state))
              ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__is_high)
                  ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product 
                             >> 0x20U)) : (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product))
              : 0U) | ((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state))
                        ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem)
                            ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg)
                                ? ((IData)(1U) + (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder))
                                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder)
                            : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg)
                                ? ((IData)(1U) + (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient))
                                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient))
                        : 0U)) | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                   & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid))
                                   ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                      | vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                   : 0U));
    if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst) {
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_v = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_ir = 0x13U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_pc = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_v = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_v 
            = ((~ ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp) 
                   | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use))) 
               & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_ir 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_ir;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_pc 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_v 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_v;
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_imm 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Id_imm;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs2_fwd_Ma_to_Ex 
                = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6) 
                   & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd) 
                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs1_fwd_Ma_to_Ex 
                = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6) 
                   & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd) 
                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1)));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rf_we 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rf_we;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src1 
                = (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                    & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1)))
                    ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt
                    : ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1))
                        ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                 & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1) 
                                    == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                 ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                 : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1])));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src2 
                = (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                    & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)))
                    ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt
                    : (((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                         >> 2U))) | 
                        ((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 2U))) 
                         | (4U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 2U)))))
                        ? (((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 2U)))
                             ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc
                             : 0U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Id_imm)
                        : ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2))
                            ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                     & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2) 
                                        == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                     ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                     : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                    [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2]))));
        }
    }
    if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init) {
        __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem 
            = (1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl) 
                     >> 2U));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg 
            = (1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl) 
                      >> 1U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                >> 0x1fU)));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_dividend_neg 
            = (1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl) 
                      >> 1U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                >> 0x1fU)));
        __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg 
            = (1U & (1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl) 
                            >> 1U) & ((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                       ^ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2) 
                                      >> 0x1fU))));
        __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg 
            = (1U & (1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl) 
                            >> 1U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                      >> 0x1fU))));
    } else {
        __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem 
            = (1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg 
            = (1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_dividend_neg 
            = (1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_dividend_neg));
        if (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
             & (0U == vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))) {
            __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg 
                = (1U & 0U);
            __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg 
                = (1U & 0U);
        } else {
            __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg 
                = (1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg));
            __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg 
                = (1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg));
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl 
                = ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                     & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16)) 
                    << 2U) | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9)) 
                               << 1U) | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0)));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl 
                = ((2U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                    >> 2U))) ? (1U 
                                                | ((0x7f0U 
                                                    & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                       >> 0x15U)) 
                                                   | (0xeU 
                                                      & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                         >> 0xbU))))
                    : 0U);
        }
        if ((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product 
                = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplicand), 
                              VL_EXTENDS_QQ(64,33, vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplier));
        }
        if ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__is_high 
                = (1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                         >> 3U));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplicand 
                = (((QData)((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                      >> 1U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                                >> 0x1fU)))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplier 
                = (((QData)((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                      >> 2U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                >> 0x1fU)))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)));
        }
    }
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)
            ? 0U : (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state));
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd;
        }
    }
    if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst) {
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_ir = 0x13U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_ir = 0x13U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_v;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_ir 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_ir;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pat_hist;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_is_ctrl_tsfr 
            = (1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                     | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_br_pred_tkn)));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn 
            = (1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                      >> 7U) | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                  >> 2U) & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq)) 
                                | (((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq)) 
                                    & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                       >> 3U)) | ((
                                                   ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                    >> 4U) 
                                                   & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt)) 
                                                  | ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt)) 
                                                     & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                        >> 5U)))))));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt1 
            = (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc 
               != (0xfffffffeU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt2 
            = (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc 
               != ((IData)(4U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc 
            = (0xfffffffeU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t);
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rf_we 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rf_we;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rslt 
            = ((1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                       >> 2U) & (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                         >> 0x21U)))) 
               | (((8U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                    ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                               >> 1U)) : 0U) | (((0x10U 
                                                  & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                                  ? 
                                                 (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))
                                                  : 0U) 
                                                | (((0x20U 
                                                     & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                                     ? (IData)(
                                                               (0x1ffffffffULL 
                                                                & VL_SHIFTRS_QQI(33,33,5, 
                                                                                (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1))), 
                                                                                (0x1fU 
                                                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))))
                                                     : 0U) 
                                                   | ((((0x40U 
                                                         & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                                         ? 
                                                        (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                                         ^ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                                         : 0U) 
                                                       | ((0x80U 
                                                           & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                                           ? 
                                                          (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                                           & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                                           : 0U)) 
                                                      | (((0x100U 
                                                           & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                                           ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2
                                                           : 0U) 
                                                         | vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_j_pc4))))));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_j_b_insn 
            = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
               & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_v));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_ir 
            = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir;
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl 
                = (((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                      & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15) 
                         | (3U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                         >> 0xcU))))) 
                     << 3U) | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                & (0x1000U == (0x7000U 
                                               & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                               << 2U)) | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                            & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15)) 
                                           << 1U) | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0)));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pat_hist 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pat_hist;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_br_pred_tkn 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_br_pred_tkn;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_j_pc4 
                = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7)
                    ? ((IData)(4U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc)
                    : 0U);
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rd;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rf_we 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rf_we;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl 
                = (((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7) 
                      << 7U) | ((0x19U == (0x1fU & 
                                           (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 2U))) 
                                << 6U)) | (((IData)(
                                                    ((0x60U 
                                                      == 
                                                      (0x7cU 
                                                       & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                     & ((5U 
                                                         == 
                                                         (7U 
                                                          & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                             >> 0xcU))) 
                                                        | (7U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                               >> 0xcU)))))) 
                                            << 5U) 
                                           | ((IData)(
                                                      ((0x60U 
                                                        == 
                                                        (0x7cU 
                                                         & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                       & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9))) 
                                              << 4U))) 
                   | ((((IData)((0x1060U == (0x707cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                        << 3U) | ((IData)((0x60U == 
                                           (0x707cU 
                                            & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                  << 2U)) | (((IData)(
                                                      ((0x60U 
                                                        == 
                                                        (0x7cU 
                                                         & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                       & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_5))) 
                                              << 1U) 
                                             | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7) 
                                                | (0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                       >> 2U)))))));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl 
                = ((((((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                          >> 2U))) 
                       | (5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                          >> 2U)))) 
                      << 8U) | ((((IData)(((0x10U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16))) 
                                  | (IData)(((0x30U 
                                              == (0x7cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                             & ((6U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                | (7U 
                                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))) 
                                 << 7U) | (((IData)(
                                                    ((0x10U 
                                                      == 
                                                      (0x7cU 
                                                       & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                     & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9))) 
                                            | (IData)(
                                                      ((0x30U 
                                                        == 
                                                        (0x7cU 
                                                         & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                       & ((4U 
                                                           == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                          | (6U 
                                                             == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))) 
                                           << 6U))) 
                    | (((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17) 
                          & ((0U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                     >> 0x19U)) | (0x20U 
                                                   == 
                                                   (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 0x19U)))) 
                         | (IData)(((0x30U == (0x7cU 
                                               & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                    & ((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                       | (0x105U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))) 
                        << 5U) | (((IData)((0x1010U 
                                            == (0xfe00707cU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                   | (IData)(((0x30U 
                                               == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))) 
                                  << 4U))) | (((((IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x707cU 
                                                           & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                                 | (IData)(
                                                           ((0x30U 
                                                             == 
                                                             (0x7cU 
                                                              & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                            & ((0U 
                                                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                               | (0x100U 
                                                                  == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21) 
                                                   | (IData)(
                                                             ((0x30U 
                                                               == 
                                                               (0x7cU 
                                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                              & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23)))) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21) 
                                                   | (IData)(
                                                             ((0x30U 
                                                               == 
                                                               (0x7cU 
                                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                              & ((0x100U 
                                                                  == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                                 | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23))))) 
                                                  << 1U) 
                                                 | ((IData)(
                                                            (0x2010U 
                                                             == 
                                                             (0x707cU 
                                                              & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                                    | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17) 
                                                        & (0x20U 
                                                           == 
                                                           (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                            >> 0x19U))) 
                                                       | (IData)(
                                                                 ((0x30U 
                                                                   == 
                                                                   (0x7cU 
                                                                    & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                                  & ((2U 
                                                                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                                     | (0x105U 
                                                                        == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))))));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl 
                = ((((IData)(((0x2000U == (0x7000U 
                                           & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                              & ((0U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                  >> 2U))) 
                                 | (8U == (0x1fU & 
                                           (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 2U)))))) 
                     << 5U) | ((((IData)(((0U == (0x7cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                          & ((1U == 
                                              (7U & 
                                               (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 0xcU))) 
                                             | (5U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 0xcU)))))) 
                                 | (IData)((0x1020U 
                                            == (0x707cU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))) 
                                << 4U) | (((IData)(
                                                   ((0U 
                                                     == 
                                                     (0x7cU 
                                                      & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                            >> 0xcU))) 
                                                       | (4U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                              >> 0xcU)))))) 
                                           | (IData)(
                                                     (0x20U 
                                                      == 
                                                      (0x707cU 
                                                       & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))) 
                                          << 3U))) 
                   | (((IData)(((0U == (0x7cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26))) 
                       << 2U) | (((8U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))) 
                                  << 1U) | (0U == (0x1fU 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 2U))))));
        }
    }
    if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst) {
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir = 0x13U;
    } else if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use)))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__r_pc;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                = vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_br_pred_tkn 
                = (1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry 
                         >> 1U));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pat_hist 
                = (3U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry);
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rf_we 
                = (0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rd));
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rd 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rd;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs1;
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs2;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)))) {
            vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use 
                = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_load_muldiv_use;
        }
    }
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_adr_p 
        = __Vdly__top__DOT__m0__DOT__vmem__DOT__r_adr_p;
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_dat_p 
        = __Vdly__top__DOT__m0__DOT__vmem__DOT__r_dat_p;
    if (__VdlySet__top__DOT__m0__DOT__dc_tag__v0) {
        vlSelfRef.top__DOT__m0__DOT__dc_tag[__VdlyDim0__top__DOT__m0__DOT__dc_tag__v0] 
            = __VdlyVal__top__DOT__m0__DOT__dc_tag__v0;
    }
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_x;
    if (__VdlySet__top__DOT__m0__DOT__dc_valid__v0) {
        vlSelfRef.top__DOT__m0__DOT__dc_valid[__VdlyDim0__top__DOT__m0__DOT__dc_valid__v0] = 0U;
    }
    if (__VdlySet__top__DOT__m0__DOT__dc_valid__v1) {
        vlSelfRef.top__DOT__m0__DOT__dc_valid[__VdlyDim0__top__DOT__m0__DOT__dc_valid__v1] = 1U;
    }
    vlSelfRef.top__DOT__m0__DOT__r_dmem_we = vlSelfRef.top__DOT__m0__DOT__dmem_we;
    vlSelfRef.top__DOT__m0__DOT__r_dbus_wdata = vlSelfRef.top__DOT__m0__DOT__dbus_wdata;
    vlSelfRef.top__DOT__m0__DOT__r_dbus_wstrb = vlSelfRef.top__DOT__m0__DOT__dbus_wstrb;
    if (__VdlySet__top__DOT__m0__DOT__dc_data__v0) {
        vlSelfRef.top__DOT__m0__DOT__dc_data[__VdlyDim0__top__DOT__m0__DOT__dc_data__v0] 
            = __VdlyVal__top__DOT__m0__DOT__dc_data__v0;
    }
    if (__VdlySet__top__DOT__m0__DOT__dc_data__v1) {
        vlSelfRef.top__DOT__m0__DOT__dc_data[__VdlyDim0__top__DOT__m0__DOT__dc_data__v1] 
            = __VdlyVal__top__DOT__m0__DOT__dc_data__v1;
    }
    __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init)
            ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2
            : (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                & (0U != vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_divisor
                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor 
        = __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor;
    vlSelfRef.top__DOT__cpu_sim_fini = __Vdly__top__DOT__cpu_sim_fini;
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state2;
    if (__VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0) {
        vlSelfRef.top__DOT__m0__DOT__vmem__DOT__vmem_lo[__VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0] 
            = __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_lo__v0;
    }
    if (__VdlySet__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0) {
        vlSelfRef.top__DOT__m0__DOT__vmem__DOT__vmem_hi[__VdlyDim0__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0] 
            = __VdlyVal__top__DOT__m0__DOT__vmem__DOT__vmem_hi__v0;
    }
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data;
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt;
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state;
    vlSelfRef.top__DOT__m0__DOT__perf__DOT__mcycle 
        = __Vdly__top__DOT__m0__DOT__perf__DOT__mcycle;
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem 
        = __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem;
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg 
        = __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg;
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg 
        = __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg;
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient 
        = __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient;
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder 
        = __Vdly__top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder;
    if (__VdlySet__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0) {
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[__VdlyDim0__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0] 
            = __VdlyVal__top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram__v0;
    }
    vlSelfRef.top__DOT__m0__DOT__r_dc_hit = vlSelfRef.top__DOT__m0__DOT__is_read_hit;
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__we = vlSelfRef.top__DOT__m0__DOT__vmem_we;
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__top = (1U 
                                                   & ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr) 
                                                      >> 0xfU));
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__waddr = 
        (0x7fffU & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_addr));
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__wdata = 
        (7U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2);
    vlSelfRef.top__DOT__m0__DOT__r_dbus_addr = vlSelfRef.top__DOT__m0__DOT__dbus_addr;
    if (vlSelfRef.top__DOT__m0__DOT__dmem_re) {
        vlSelfRef.top__DOT__m0__DOT__r_dmem_re = 1U;
        vlSelfRef.top__DOT__m0__DOT__r_dc_mis = (1U 
                                                 & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__is_read_hit)));
        vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata 
            = vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem
            [vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr];
    } else {
        vlSelfRef.top__DOT__m0__DOT__r_dmem_re = 0U;
        vlSelfRef.top__DOT__m0__DOT__r_dc_mis = 0U;
    }
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_divisor 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg)
            ? ((IData)(1U) + (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
            : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor);
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rtop = 
        (1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_raddr) 
               >> 0xfU));
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_color 
        = ((0xf800U & ((- (IData)((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t) 
                                         >> 2U)))) 
                       << 0xbU)) | ((0x7e0U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t) 
                                                              >> 1U)))) 
                                               << 5U)) 
                                    | (0x1fU & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t)))))));
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__raddr = 
        (0x7fffU & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_raddr));
    if ((((IData)(vlSelfRef.top__DOT__m0__DOT__dbus_we) 
          & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2) 
             & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                >> 0x1eU))) & (0U == (IData)(vlSelfRef.top__DOT__m0__DOT__perf_addr)))) {
        vlSelfRef.top__DOT__m0__DOT__perf__DOT__cnt_ctrl 
            = (3U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2);
    }
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_remainder 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_dividend_neg)
            ? ((IData)(1U) + (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder))
            : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder);
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference 
        = (0x1ffffffffULL & ((((QData)((IData)((0x7fffffffU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder))) 
                               << 1U) | (QData)((IData)(
                                                        (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient 
                                                         >> 0x1fU)))) 
                             - (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state;
    if (__VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v0) {
        vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem[__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v0] 
            = ((0xffffff00U & vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem
                [__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v0]) 
               | (IData)(__VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v0));
    }
    if (__VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v1) {
        vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem[__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v1] 
            = ((0xffff00ffU & vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem
                [__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v1]) 
               | ((IData)(__VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v1) 
                  << 8U));
    }
    if (__VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v2) {
        vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem[__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v2] 
            = ((0xff00ffffU & vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem
                [__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v2]) 
               | ((IData)(__VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__top__DOT__m0__DOT__dmem__DOT__dmem__v3) {
        vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem[__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v3] 
            = ((0xffffffU & vlSelfRef.top__DOT__m0__DOT__dmem__DOT__dmem
                [__VdlyDim0__top__DOT__m0__DOT__dmem__DOT__dmem__v3]) 
               | ((IData)(__VdlyVal__top__DOT__m0__DOT__dmem__DOT__dmem__v3) 
                  << 0x18U));
    }
    vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t = ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__sel)
                                                  ? (IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_hi)
                                                  : (IData)(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_lo));
    vlSelfRef.top__DOT__m0__DOT__vmem_raddr = (((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y) 
                                                << 8U) 
                                               | (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x));
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en 
        = (1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done)
                  ? (~ (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__busy))
                  : (((0xf4240U < vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt) 
                      & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__busy))) 
                     & (0xf4240U < vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt))));
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt;
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_cnt;
    vlSelfRef.top__DOT__m0__DOT__dbus_rdata = ((IData)(vlSelfRef.top__DOT__m0__DOT__rdata_sel)
                                                ? vlSelfRef.top__DOT__m0__DOT__perf__DOT__rdata
                                                : vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata);
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__busy 
        = ((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state)) 
           | (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en));
    __Vtableidx1 = vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state;
    if ((1U & Vtop__ConstPool__TABLE_h009af01a_0[__Vtableidx1])) {
        vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_init 
            = Vtop__ConstPool__TABLE_h4db348d4_0[__Vtableidx1];
    }
    if ((2U & Vtop__ConstPool__TABLE_h009af01a_0[__Vtableidx1])) {
        vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done 
            = Vtop__ConstPool__TABLE_h0ba786de_0[__Vtableidx1];
    }
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__w_data 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done)
            ? (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_dat)
            : (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_init));
    vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state 
        = __Vdly__top__DOT__m0__DOT__st7789_disp__DOT__r_state;
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7 
        = (1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                  >> 5U) | ((~ ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset) 
                                >> 1U)) & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                           >> 4U))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_8 
        = (IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                    >> 4U) & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset) 
                              >> 1U)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign 
        = (1U & (IData)(((0xcU == (0xcU & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))) 
                         & ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))
                             ? (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                >> 7U) : ((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))
                                           ? (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                              >> 0xfU)
                                           : ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))
                                               ? (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                  >> 0x17U)
                                               : (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                  >> 0x1fU)))))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs2_fwd_Ma_to_Ex)
            ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rslt
            : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src2);
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs1_fwd_Ma_to_Ex)
            ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rslt
            : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src1);
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rf_we) 
           & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn) 
           & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9 
        = ((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign) 
                  | (IData)(((0x14U == (0x14U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))) 
                             & ((2U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))
                                 ? (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                    >> 0x1fU) : (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                 >> 0xfU))))))
            ? 0xffU : 0U);
    vlSelfRef.top__DOT__m0__DOT__vmem__DOT__data = 
        ((0xf800U & ((- (IData)((1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                       >> 2U)))) << 0xbU)) 
         | ((0x7e0U & ((- (IData)((1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                         >> 1U)))) 
                       << 5U)) | (0x1fU & (- (IData)(
                                                     (1U 
                                                      & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq 
        = (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
           == vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2);
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
        = (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_imm 
           + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1);
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt 
        = (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rslt 
           | (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_mdc_rslt 
              | (((((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                     ? (0xffU & ((0x20U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                  ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                  : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                     : 0U) << 0x18U) | (((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                          ? (0xffU 
                                             & ((0x20U 
                                                 & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                                 ? 
                                                (0xffU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                    >> 0x10U))
                                                 : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                          : 0U) << 0x10U)) 
                 | ((((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                       ? (0xffU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7)
                                    ? (0xffU & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                >> 8U))
                                    : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_8)
                                        ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                        : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign)
                                            ? 0xffU
                                            : 0U))))
                       : 0U) << 8U) | ((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                        ? (0xffU & 
                                           (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7) 
                                             | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                                 >> 3U) 
                                                & (0U 
                                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))))
                                             ? (0xffU 
                                                & vlSelfRef.top__DOT__m0__DOT__dbus_rdata)
                                             : ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                                  >> 3U) 
                                                 & (1U 
                                                    == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset)))
                                                 ? 
                                                (0xffU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                    >> 8U))
                                                 : 
                                                (((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                                    >> 3U) 
                                                   & (2U 
                                                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))) 
                                                  | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_8))
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                     >> 0x10U))
                                                  : 
                                                 VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)))))
                                        : 0U)))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rf_we) 
           & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_v));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt 
        = VL_LTS_IQQ(33, (((QData)((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                             >> 1U) 
                                            & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                               >> 0x1fU)))) 
                           << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1))), 
                     (((QData)((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                         >> 1U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                   >> 0x1fU)))) 
                       << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t 
        = (((0x40U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl))
             ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1
             : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc) 
           + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_imm);
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
           & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
              >> 0x1fU));
    vlSelfRef.top__DOT__m0__DOT__dbus_wdata = (((((8U 
                                                   & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl))
                                                   ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl))
                                                    ? 
                                                   (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                    >> 8U)
                                                    : 
                                                   (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                    >> 0x18U))) 
                                                 << 0x18U) 
                                                | (0xff0000U 
                                                   & (((0x20U 
                                                        & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl))
                                                        ? 
                                                       (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                        >> 0x10U)
                                                        : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2) 
                                                      << 0x10U))) 
                                               | ((0xff00U 
                                                   & (((8U 
                                                        & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl))
                                                        ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2
                                                        : 
                                                       (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                        >> 8U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
        = (0x3ffffffffULL & ((1ULL | (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                       << 0x21U) | 
                                      ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)) 
                                       << 1U))) + (
                                                   (((QData)((IData)(
                                                                     ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                                                      & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                                         >> 0x1fU)))) 
                                                     << 0x21U) 
                                                    | ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)) 
                                                       << 1U)) 
                                                   ^ 
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                                                          >> 1U))))))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__r_pc = (0x7fffU 
                                                   & vlSelfRef.__VdfgRegularize_hd87f99a1_1_0);
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry 
        = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb
        [(0x7ffU & (vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 
                    >> 2U))];
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_0 
        = ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
           | (3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7 
        = ((0x1bU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                               >> 2U))) | (0x19U == 
                                           (0x1fU & 
                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 2U))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9 
        = ((4U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                         >> 0xcU))) | (6U == (7U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0xcU))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17 
        = (IData)((0x5010U == (0x707cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21 
        = (IData)(((0x10U == (0x7cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                   & ((2U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0xcU))))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10 
        = ((0x3f8U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                      >> 0x16U)) | (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                          >> 0xcU)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_5 
        = ((4U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                         >> 0xcU))) | (5U == (7U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0xcU))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16 
        = ((6U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                         >> 0xcU))) | (7U == (7U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0xcU))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15 
        = ((1U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                         >> 0xcU))) | (2U == (7U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0xcU))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13 
        = (IData)((0x2000030U == (0xfe00007cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)));
    vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata = 
        vlSelfRef.top__DOT__m0__DOT__imem__DOT__imem
        [(0x1fffU & (vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 
                     >> 2U))];
    if (__VdlySet__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0) {
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb[__VdlyDim0__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0] 
            = __VdlyVal__top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__btb__v0;
    }
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_1 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_0) 
           | (4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23 
        = ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
           | (3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26 
        = ((0U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                         >> 0xcU))) | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
           & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_5) 
              | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_1) 
           | (6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
           & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26) 
              | (3U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                              >> 0xcU)))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type 
        = ((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                              >> 2U))) ? 5U : ((5U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                    >> 2U)))
                                                ? 5U
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                        >> 2U)))
                                                    ? 6U
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                         >> 2U)))
                                                     ? 2U
                                                     : 
                                                    ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                          >> 2U)))
                                                      ? 4U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                           >> 2U)))
                                                       ? 2U
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                            >> 2U)))
                                                        ? 3U
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                             >> 2U)))
                                                         ? 2U
                                                         : 
                                                        ((0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                              >> 2U)))
                                                          ? 1U
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                                               >> 2U)))
                                                           ? 1U
                                                           : 0U))))))))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall 
        = ((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state)) 
           | (0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst = (1U 
                                                  & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__rst_ni)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Id_imm = 
        (((0x80000000U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir) 
          | (0x7ff00000U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2)
                              ? (0x7ffU & (- (IData)(
                                                     (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0x1fU))))
                              : ((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                  ? (0x7ffU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0x14U))
                                  : 0U)) << 0x14U))) 
         | (((0xff000U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_1)
                            ? (0xffU & (- (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0x1fU))))
                            : (((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                | (6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                ? (0xffU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 0xcU))
                                : 0U)) << 0xcU)) | 
             (0x800U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_0)
                          ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir, 0x1fU)
                          : ((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                              ? (1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                       >> 7U)) : ((6U 
                                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                                   ? 
                                                  (1U 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0x14U))
                                                   : 0U))) 
                        << 0xbU))) | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2)
                                         ? (0x3fU & 
                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 0x19U))
                                         : 0U) << 5U) 
                                      | ((0x1eU & (
                                                   (((2U 
                                                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                                     | (6U 
                                                        == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                                     ? 
                                                    (0xfU 
                                                     & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                        >> 0x15U))
                                                     : 
                                                    (((3U 
                                                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                                      | (4U 
                                                         == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                                      ? 
                                                     (0xfU 
                                                      & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                         >> 8U))
                                                      : 0U)) 
                                                   << 1U)) 
                                         | (1U & ((2U 
                                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                                   ? 
                                                  (1U 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0x14U))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                                    ? 
                                                   (1U 
                                                    & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                       >> 7U))
                                                    : 0U)))))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rd = 
        (((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type)) 
          | (4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type)))
          ? 0U : (0x1fU & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                           >> 7U)));
    top__DOT__m0__DOT__cpu__DOT__pre_decoder__DOT____VdfgRegularize_h8fbbae0b_0_0 
        = ((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type)) 
           | (6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs1 = 
        ((IData)(top__DOT__m0__DOT__cpu__DOT__pre_decoder__DOT____VdfgRegularize_h8fbbae0b_0_0)
          ? 0U : (0x1fU & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                           >> 0xfU)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs2 = 
        (((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type)) 
          | (IData)(top__DOT__m0__DOT__cpu__DOT__pre_decoder__DOT____VdfgRegularize_h8fbbae0b_0_0))
          ? 0U : (0x1fU & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                           >> 0x14U)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_v) 
           & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall)) 
              & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rf_we)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_pc_stall 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall) 
           | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst) 
           | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v) 
              & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_is_ctrl_tsfr) 
                 & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn)
                     ? (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt1)
                     : (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt2)))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_v = (
                                                   (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
                                                   & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_v));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_v = (1U 
                                                   & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
                                                      & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use)) 
                                                         | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)
                                                 ? 
                                                ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn)
                                                   ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc)))
                                                 : 
                                                ((1U 
                                                  & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_pc_stall)) 
                                                     & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry 
                                                        >> 1U)))
                                                  ? 
                                                 (0x7ffcU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry)
                                                  : 
                                                 (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__r_pc 
                                                  + 
                                                  ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_pc_stall)
                                                    ? 0U
                                                    : 4U))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_load_muldiv_use 
        = ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
           & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v) 
              & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use)) 
                 & (((0U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                      >> 2U))) | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0) 
                                                  | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0) 
                                                     | (2U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                            >> 2U)))))) 
                    & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rf_we) 
                       & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rd) 
                           == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs1)) 
                          | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rd) 
                             == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs2))))))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_v) 
           & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
              & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall))));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state 
        = (((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state)) 
            & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid) 
               & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl)))
            ? 1U : ((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state))
                     ? 2U : 0U));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init 
        = ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
           & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid) 
              & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl)));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init)
            ? 1U : (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                     & (0U == vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                     ? 3U : (((1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                              & (0U != vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                              ? 2U : (((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                                       & (0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr)))
                                       ? 3U : (((2U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state)) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr)))
                                                ? 2U
                                                : 0U)))));
    vlSelfRef.top__DOT__m0__DOT__dbus_we = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid) 
                                            & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                               >> 1U));
    vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid) 
           & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
               >> 1U) | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl)));
    if (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2) {
        vlSelfRef.top__DOT__m0__DOT__dbus_addr = vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8;
        vlSelfRef.top__DOT__m0__DOT__vmem_addr = (0xffffU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8);
        vlSelfRef.top__DOT__m0__DOT__perf_addr = (0xfU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8);
        vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr 
            = (0xfffU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                         >> 2U));
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset 
            = (3U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8);
        vlSelfRef.top__DOT__m0__DOT__current_index 
            = (0x3ffU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                         >> 2U));
    } else {
        vlSelfRef.top__DOT__m0__DOT__dbus_addr = 0U;
        vlSelfRef.top__DOT__m0__DOT__vmem_addr = 0U;
        vlSelfRef.top__DOT__m0__DOT__perf_addr = 0U;
        vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr = 0U;
        vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset = 0U;
        vlSelfRef.top__DOT__m0__DOT__current_index = 0U;
    }
    vlSelfRef.top__DOT__m0__DOT__vmem_we = ((IData)(vlSelfRef.top__DOT__m0__DOT__dbus_we) 
                                            & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2) 
                                               & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                                                  >> 0x1dU)));
    top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_0 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2) 
           & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
              >> 0x1cU));
    top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_7 
        = ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2) 
           & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
              >> 1U));
    top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_1 
        = (vlSelfRef.top__DOT__m0__DOT__dc_valid[vlSelfRef.top__DOT__m0__DOT__current_index] 
           & (vlSelfRef.top__DOT__m0__DOT__dc_tag[vlSelfRef.top__DOT__m0__DOT__current_index] 
              == ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2)
                   ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                      >> 0xcU) : 0U)));
    vlSelfRef.top__DOT__m0__DOT__dmem_re = ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__dbus_we)) 
                                            & (IData)(top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_0));
    vlSelfRef.top__DOT__m0__DOT__dmem_we = ((IData)(vlSelfRef.top__DOT__m0__DOT__dbus_we) 
                                            & (IData)(top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_0));
    top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_5 
        = (1U & ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                   >> 4U) & (IData)(top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_7)) 
                 | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                    >> 5U)));
    top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_6 
        = (1U & (((~ (IData)(top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_7)) 
                  & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                     >> 4U)) | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                >> 5U)));
    vlSelfRef.top__DOT__m0__DOT__is_read_hit = ((IData)(vlSelfRef.top__DOT__m0__DOT__dmem_re) 
                                                & (IData)(top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_1));
    vlSelfRef.top__DOT__m0__DOT__is_write_hit = ((IData)(vlSelfRef.top__DOT__m0__DOT__dmem_we) 
                                                 & (IData)(top__DOT__m0__DOT____VdfgRegularize_h66f5221b_2_1));
    vlSelfRef.top__DOT__m0__DOT__dbus_wstrb = ((((0xfffffff8U 
                                                  & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                                     & ((3U 
                                                         == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset)) 
                                                        << 3U))) 
                                                 | ((IData)(top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_5) 
                                                    << 3U)) 
                                                | ((0x7ffffffcU 
                                                    & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                                        >> 1U) 
                                                       & ((2U 
                                                           == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset)) 
                                                          << 2U))) 
                                                   | ((IData)(top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_5) 
                                                      << 2U))) 
                                               | (((0x3ffffffeU 
                                                    & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                                        >> 2U) 
                                                       & ((1U 
                                                           == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset)) 
                                                          << 1U))) 
                                                   | ((IData)(top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_6) 
                                                      << 1U)) 
                                                  | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                                       >> 3U) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset))) 
                                                     | (IData)(top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_6))));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__top__DOT__clk__v0) {
        vlSelfRef.__VdlySet__top__DOT__clk__v0 = 0U;
        vlSelfRef.top__DOT__clk = vlSelfRef.__VdlyVal__top__DOT__clk__v0;
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 6, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
