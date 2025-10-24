// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__m0__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgQData(oldp+2,(vlSelfRef.top__DOT__mcycle),64);
        bufp->chgQData(oldp+4,(vlSelfRef.top__DOT__minstret),64);
        bufp->chgQData(oldp+6,(vlSelfRef.top__DOT__br_pred_cntr),64);
        bufp->chgQData(oldp+8,(vlSelfRef.top__DOT__br_misp_cntr),64);
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__cpu_sim_fini));
        bufp->chgIData(oldp+11,(vlSelfRef.top__DOT__r_num_dchit),32);
        bufp->chgIData(oldp+12,(vlSelfRef.top__DOT__r_num_dcmis),32);
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SDA));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SCL));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_DC));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_RES));
        bufp->chgIData(oldp+17,((0x7fffU & vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata),32);
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__m0__DOT__dbus_we));
        bufp->chgIData(oldp+20,(vlSelfRef.top__DOT__m0__DOT__dbus_addr),32);
        bufp->chgIData(oldp+21,(vlSelfRef.top__DOT__m0__DOT__dbus_wdata),32);
        bufp->chgCData(oldp+22,(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb),4);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__m0__DOT__dbus_rdata),32);
        bufp->chgBit(oldp+24,(vlSelfRef.top__DOT__m0__DOT__rdata_sel));
        bufp->chgBit(oldp+25,(vlSelfRef.top__DOT__m0__DOT__dmem_re));
        bufp->chgBit(oldp+26,(vlSelfRef.top__DOT__m0__DOT__dmem_we));
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata),32);
        bufp->chgBit(oldp+28,(vlSelfRef.top__DOT__m0__DOT__vmem_we));
        bufp->chgSData(oldp+29,(vlSelfRef.top__DOT__m0__DOT__vmem_addr),16);
        bufp->chgCData(oldp+30,((7U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)),3);
        bufp->chgSData(oldp+31,(vlSelfRef.top__DOT__m0__DOT__vmem_raddr),16);
        bufp->chgCData(oldp+32,(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t),3);
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.top__DOT__m0__DOT__dbus_we) 
                               & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2) 
                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                                     >> 0x1eU)))));
        bufp->chgCData(oldp+34,(vlSelfRef.top__DOT__m0__DOT__perf_addr),4);
        bufp->chgIData(oldp+35,(vlSelfRef.top__DOT__m0__DOT__perf__DOT__rdata),32);
        bufp->chgSData(oldp+36,(((0xf800U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t) 
                                                            >> 2U)))) 
                                             << 0xbU)) 
                                 | ((0x7e0U & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t) 
                                                              >> 1U)))) 
                                               << 5U)) 
                                    | (0x1fU & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t)))))))),16);
        bufp->chgSData(oldp+37,(vlSelfRef.top__DOT__m0__DOT__current_index),10);
        bufp->chgIData(oldp+38,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2)
                                  ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                                     >> 0xcU) : 0U)),20);
        bufp->chgBit(oldp+39,(vlSelfRef.top__DOT__m0__DOT__dc_valid
                              [vlSelfRef.top__DOT__m0__DOT__current_index]));
        bufp->chgIData(oldp+40,(vlSelfRef.top__DOT__m0__DOT__dc_tag
                                [vlSelfRef.top__DOT__m0__DOT__current_index]),20);
        bufp->chgBit(oldp+41,(vlSelfRef.top__DOT__m0__DOT__is_read_hit));
        bufp->chgBit(oldp+42,(vlSelfRef.top__DOT__m0__DOT__is_write_hit));
        bufp->chgBit(oldp+43,(vlSelfRef.top__DOT__m0__DOT__r_dmem_re));
        bufp->chgBit(oldp+44,(vlSelfRef.top__DOT__m0__DOT__r_dmem_we));
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__m0__DOT__r_dbus_addr),32);
        bufp->chgIData(oldp+46,(vlSelfRef.top__DOT__m0__DOT__r_dbus_wdata),32);
        bufp->chgCData(oldp+47,(vlSelfRef.top__DOT__m0__DOT__r_dbus_wstrb),4);
        bufp->chgBit(oldp+48,(vlSelfRef.top__DOT__m0__DOT__r_dc_hit));
        bufp->chgBit(oldp+49,(vlSelfRef.top__DOT__m0__DOT__r_dc_mis));
        bufp->chgSData(oldp+50,((0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                                           >> 2U))),10);
        bufp->chgIData(oldp+51,((vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                                 >> 0xcU)),20);
        bufp->chgBit(oldp+52,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid) 
                               & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl))));
        bufp->chgIData(oldp+53,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__r_pc),32);
        bufp->chgBit(oldp+54,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v));
        bufp->chgIData(oldp+55,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc),32);
        bufp->chgIData(oldp+56,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir),32);
        bufp->chgBit(oldp+57,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_br_pred_tkn));
        bufp->chgCData(oldp+58,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pat_hist),2);
        bufp->chgBit(oldp+59,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use));
        bufp->chgCData(oldp+60,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type),3);
        bufp->chgBit(oldp+61,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rf_we));
        bufp->chgCData(oldp+62,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rd),5);
        bufp->chgCData(oldp+63,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1),5);
        bufp->chgCData(oldp+64,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2),5);
        bufp->chgBit(oldp+65,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_v));
        bufp->chgIData(oldp+66,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc),32);
        bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_ir),32);
        bufp->chgBit(oldp+68,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_br_pred_tkn));
        bufp->chgCData(oldp+69,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pat_hist),2);
        bufp->chgSData(oldp+70,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl),9);
        bufp->chgCData(oldp+71,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl),8);
        bufp->chgCData(oldp+72,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl),6);
        bufp->chgCData(oldp+73,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl),4);
        bufp->chgCData(oldp+74,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl),3);
        bufp->chgSData(oldp+75,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl),11);
        bufp->chgBit(oldp+76,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs1_fwd_Ma_to_Ex));
        bufp->chgBit(oldp+77,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs2_fwd_Ma_to_Ex));
        bufp->chgIData(oldp+78,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src1),32);
        bufp->chgIData(oldp+79,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src2),32);
        bufp->chgIData(oldp+80,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_imm),32);
        bufp->chgBit(oldp+81,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rf_we));
        bufp->chgCData(oldp+82,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd),5);
        bufp->chgIData(oldp+83,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_j_pc4),32);
        bufp->chgBit(oldp+84,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v));
        bufp->chgIData(oldp+85,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc),32);
        bufp->chgIData(oldp+86,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_ir),32);
        bufp->chgCData(oldp+87,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist),2);
        bufp->chgBit(oldp+88,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_is_ctrl_tsfr));
        bufp->chgBit(oldp+89,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn));
        bufp->chgBit(oldp+90,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt1));
        bufp->chgBit(oldp+91,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt2));
        bufp->chgIData(oldp+92,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc),32);
        bufp->chgCData(oldp+93,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl),6);
        bufp->chgCData(oldp+94,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset),2);
        bufp->chgBit(oldp+95,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rf_we));
        bufp->chgCData(oldp+96,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd),5);
        bufp->chgIData(oldp+97,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rslt),32);
        bufp->chgIData(oldp+98,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_mdc_rslt),32);
        bufp->chgBit(oldp+99,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_j_b_insn));
        bufp->chgBit(oldp+100,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_mul_stall));
        bufp->chgBit(oldp+101,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_div_stall));
        bufp->chgBit(oldp+102,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall));
        bufp->chgBit(oldp+103,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_v));
        bufp->chgIData(oldp+104,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_pc),32);
        bufp->chgIData(oldp+105,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_ir),32);
        bufp->chgBit(oldp+106,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rf_we));
        bufp->chgCData(oldp+107,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd),5);
        bufp->chgIData(oldp+108,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt),32);
        bufp->chgBit(oldp+109,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst));
        bufp->chgBit(oldp+110,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn));
        bufp->chgBit(oldp+111,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp));
        bufp->chgIData(oldp+112,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)
                                   ? 0U : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn)
                                            ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc
                                            : ((IData)(4U) 
                                               + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc)))),32);
        bufp->chgBit(oldp+113,((1U & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
                                      & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use)) 
                                         | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v))))));
        bufp->chgBit(oldp+114,(((~ ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp) 
                                    | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use))) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v))));
        bufp->chgBit(oldp+115,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_v));
        bufp->chgSData(oldp+116,((0x7fffU & vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)),15);
        bufp->chgSData(oldp+117,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_pc_stall)
                                   ? 0U : 4U)),15);
        bufp->chgBit(oldp+118,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_pc_stall));
        bufp->chgCData(oldp+119,((3U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry)),2);
        bufp->chgBit(oldp+120,((1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry 
                                      >> 1U))));
        bufp->chgIData(oldp+121,((0x7ffcU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry)),32);
        bufp->chgCData(oldp+122,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type),3);
        bufp->chgBit(oldp+123,((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rd))));
        bufp->chgCData(oldp+124,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rd),5);
        bufp->chgCData(oldp+125,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs1),5);
        bufp->chgCData(oldp+126,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs2),5);
        bufp->chgBit(oldp+127,(((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v) 
                                   & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use)) 
                                      & (((0U == (0x1fU 
                                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                     >> 2U))) 
                                          | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0) 
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
                                                  == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs2))))))))));
        bufp->chgCData(oldp+128,(((((0xdU == (0x1fU 
                                              & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 2U))) 
                                    | (4U == (0x1fU 
                                              & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 2U)))) 
                                   << 1U) | (5U == 
                                             (0x1fU 
                                              & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 2U))))),2);
        bufp->chgSData(oldp+129,(((((((0xdU == (0x1fU 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))) 
                                      | (5U == (0x1fU 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U)))) 
                                     << 8U) | ((((IData)(
                                                         ((0x10U 
                                                           == 
                                                           (0x7cU 
                                                            & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                          & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16))) 
                                                 | (IData)(
                                                           ((0x30U 
                                                             == 
                                                             (0x7cU 
                                                              & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                            & ((6U 
                                                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                               | (7U 
                                                                  == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))) 
                                                << 7U) 
                                               | (((IData)(
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
                                         & ((0U == 
                                             (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                              >> 0x19U)) 
                                            | (0x20U 
                                               == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0x19U)))) 
                                        | (IData)((
                                                   (0x30U 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                   & ((5U 
                                                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                      | (0x105U 
                                                         == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))) 
                                       << 5U) | (((IData)(
                                                          (0x1010U 
                                                           == 
                                                           (0xfe00707cU 
                                                            & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                                  | (IData)(
                                                            ((0x30U 
                                                              == 
                                                              (0x7cU 
                                                               & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                             & (1U 
                                                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))) 
                                                 << 4U))) 
                                  | (((((IData)((0x10U 
                                                 == 
                                                 (0x707cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                        | (IData)((
                                                   (0x30U 
                                                    == 
                                                    (0x7cU 
                                                     & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                   & ((0U 
                                                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                      | (0x100U 
                                                         == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))) 
                                       << 3U) | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21) 
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
                                         << 1U) | ((IData)(
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
                                                                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))))))),9);
        bufp->chgCData(oldp+130,((((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7) 
                                     << 7U) | ((0x19U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 2U))) 
                                               << 6U)) 
                                   | (((IData)(((0x60U 
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
                                       << 5U) | ((IData)(
                                                         ((0x60U 
                                                           == 
                                                           (0x7cU 
                                                            & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                          & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9))) 
                                                 << 4U))) 
                                  | ((((IData)((0x1060U 
                                                == 
                                                (0x707cU 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                       << 3U) | ((IData)(
                                                         (0x60U 
                                                          == 
                                                          (0x707cU 
                                                           & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                                 << 2U)) 
                                     | (((IData)(((0x60U 
                                                   == 
                                                   (0x7cU 
                                                    & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                  & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_5))) 
                                         << 1U) | ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7) 
                                                   | (0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                          >> 2U)))))))),8);
        bufp->chgCData(oldp+131,(((((IData)(((0x2000U 
                                              == (0x7000U 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                             & ((0U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                     >> 2U))) 
                                                | (8U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                       >> 2U)))))) 
                                    << 5U) | ((((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x7cU 
                                                           & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                                         & ((1U 
                                                             == 
                                                             (7U 
                                                              & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                                 >> 0xcU))) 
                                                            | (5U 
                                                               == 
                                                               (7U 
                                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                                   >> 0xcU)))))) 
                                                | (IData)(
                                                          (0x1020U 
                                                           == 
                                                           (0x707cU 
                                                            & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))) 
                                               << 4U) 
                                              | (((IData)(
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
                                  | (((IData)(((0U 
                                                == 
                                                (0x7cU 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                               & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26))) 
                                      << 2U) | (((8U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 2U))) 
                                                 << 1U) 
                                                | (0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                       >> 2U))))))),6);
        bufp->chgCData(oldp+132,((((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                     & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15) 
                                        | (3U == (7U 
                                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                     >> 0xcU))))) 
                                    << 3U) | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                               & (0x1000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                       & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15)) 
                                      << 1U) | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0)))),4);
        bufp->chgCData(oldp+133,(((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                    & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16)) 
                                   << 2U) | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                               & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9)) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0)))),3);
        bufp->chgSData(oldp+134,(((2U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U)))
                                   ? (1U | ((0x7f0U 
                                             & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 0x15U)) 
                                            | (0xeU 
                                               & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                  >> 0xbU))))
                                   : 0U)),11);
        bufp->chgIData(oldp+135,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Id_imm),32);
        bufp->chgIData(oldp+136,(((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1))
                                   ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                            & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1) 
                                               == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                            ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                            : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                           [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1]))),32);
        bufp->chgIData(oldp+137,(((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2))
                                   ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                            & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2) 
                                               == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                            ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                            : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                           [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2]))),32);
        bufp->chgBit(oldp+138,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we));
        bufp->chgBit(oldp+139,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6) 
                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd) 
                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1)))));
        bufp->chgBit(oldp+140,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6) 
                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd) 
                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)))));
        bufp->chgBit(oldp+141,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1)))));
        bufp->chgBit(oldp+142,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)))));
        bufp->chgIData(oldp+143,(((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U)))
                                   ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc
                                   : 0U)),32);
        bufp->chgBit(oldp+144,(((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 2U))) 
                                | ((0xdU == (0x1fU 
                                             & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U))) 
                                   | (4U == (0x1fU 
                                             & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U)))))));
        bufp->chgIData(oldp+145,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                   & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1)))
                                   ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt
                                   : ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1))
                                       ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1) 
                                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                                ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                               [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1])))),32);
        bufp->chgIData(oldp+146,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                   & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)))
                                   ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt
                                   : (((5U == (0x1fU 
                                               & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                  >> 2U))) 
                                       | ((0xdU == 
                                           (0x1fU & 
                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 2U))) 
                                          | (4U == 
                                             (0x1fU 
                                              & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 2U)))))
                                       ? (((5U == (0x1fU 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 2U)))
                                            ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc
                                            : 0U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Id_imm)
                                       : ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2))
                                           ? 0U : (
                                                   ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                                    & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2) 
                                                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                                    ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                                    : 
                                                   vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                                   [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2]))))),32);
        bufp->chgIData(oldp+147,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7)
                                   ? ((IData)(4U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc)
                                   : 0U)),32);
        bufp->chgBit(oldp+148,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid));
        bufp->chgIData(oldp+149,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1),32);
        bufp->chgIData(oldp+150,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2),32);
        bufp->chgIData(oldp+151,(((1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                          >> 2U) & (IData)(
                                                           (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                                            >> 0x21U)))) 
                                  | (((8U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                       ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                                  >> 1U))
                                       : 0U) | (((0x10U 
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
                                                         | vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_j_pc4))))))),32);
        bufp->chgBit(oldp+152,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                      | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_br_pred_tkn)))));
        bufp->chgBit(oldp+153,((1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                       >> 7U) | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                   >> 2U) 
                                                  & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq)) 
                                                 | (((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq)) 
                                                     & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                        >> 3U)) 
                                                    | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                         >> 4U) 
                                                        & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt)) 
                                                       | ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt)) 
                                                          & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                             >> 5U)))))))));
        bufp->chgBit(oldp+154,((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc 
                                != (0xfffffffeU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t))));
        bufp->chgBit(oldp+155,((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc 
                                != ((IData)(4U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc))));
        bufp->chgIData(oldp+156,((0xfffffffeU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t)),32);
        bufp->chgCData(oldp+157,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset),2);
        bufp->chgBit(oldp+158,((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state))));
        bufp->chgIData(oldp+159,(((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state))
                                   ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__is_high)
                                       ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product 
                                                  >> 0x20U))
                                       : (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product))
                                   : 0U)),32);
        bufp->chgBit(oldp+160,((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state))));
        bufp->chgIData(oldp+161,(((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state))
                                   ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem)
                                       ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg)
                                           ? ((IData)(1U) 
                                              + (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder))
                                           : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder)
                                       : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg)
                                           ? ((IData)(1U) 
                                              + (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient))
                                           : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient))
                                   : 0U)),32);
        bufp->chgBit(oldp+162,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid))));
        bufp->chgIData(oldp+163,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                   & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid))
                                   ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                      | vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                   : 0U)),32);
        bufp->chgIData(oldp+164,((((((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                      ? (0xffU & ((0x20U 
                                                   & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                                   ? 
                                                  VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                                   : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                      : 0U) << 0x18U) 
                                   | (((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                        ? (0xffU & 
                                           ((0x20U 
                                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                             ? (0xffU 
                                                & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                   >> 0x10U))
                                             : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                        : 0U) << 0x10U)) 
                                  | ((((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                        ? (0xffU & 
                                           ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7)
                                             ? (0xffU 
                                                & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                   >> 8U))
                                             : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_8)
                                                 ? 
                                                VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign)
                                                  ? 0xffU
                                                  : 0U))))
                                        : 0U) << 8U) 
                                     | ((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
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
                                         : 0U)))),32);
        bufp->chgIData(oldp+165,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt),32);
        bufp->chgBit(oldp+166,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))));
        bufp->chgBit(oldp+167,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+168,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                      >> 2U))));
        bufp->chgQData(oldp+169,((1ULL | (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                           << 0x21U) 
                                          | ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)) 
                                             << 1U)))),34);
        bufp->chgQData(oldp+171,((0x3ffffffffULL & 
                                  ((((QData)((IData)(
                                                     ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                                      & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                         >> 0x1fU)))) 
                                     << 0x21U) | ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)) 
                                                  << 1U)) 
                                   ^ (- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                                            >> 1U)))))))),34);
        bufp->chgQData(oldp+173,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t),34);
        bufp->chgBit(oldp+175,((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                         >> 2U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                                   >> 0x21U)))));
        bufp->chgIData(oldp+176,(((8U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                   ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                              >> 1U))
                                   : 0U)),32);
        bufp->chgQData(oldp+177,((((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)))),33);
        bufp->chgCData(oldp+179,((0x1fU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)),5);
        bufp->chgIData(oldp+180,(((0x10U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                   ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                      << (0x1fU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))
                                   : 0U)),32);
        bufp->chgIData(oldp+181,(((0x20U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                   ? (IData)((0x1ffffffffULL 
                                              & VL_SHIFTRS_QQI(33,33,5, 
                                                               (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1))), 
                                                               (0x1fU 
                                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))))
                                   : 0U)),32);
        bufp->chgIData(oldp+182,((((0x40U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                    ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                       ^ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                    : 0U) | ((0x80U 
                                              & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                              ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                              : 0U))),32);
        bufp->chgIData(oldp+183,(((0x100U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                   ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2
                                   : 0U)),32);
        bufp->chgSData(oldp+184,((0x7ffcU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry)),15);
        bufp->chgCData(oldp+185,((3U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn)
                                         ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist) 
                                            + (3U > (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist)))
                                         : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist) 
                                            - (0U < (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist)))))),2);
        bufp->chgSData(oldp+186,((0x7ffU & (vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 
                                            >> 2U))),11);
        bufp->chgSData(oldp+187,((0x7ffU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc 
                                            >> 2U))),11);
        bufp->chgIData(oldp+188,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry),32);
        bufp->chgQData(oldp+189,((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                     >> 1U) 
                                                    & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)))),33);
        bufp->chgQData(oldp+191,((((QData)((IData)(
                                                   (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                     >> 1U) 
                                                    & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                       >> 0x1fU)))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)))),33);
        bufp->chgBit(oldp+193,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq));
        bufp->chgBit(oldp+194,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt));
        bufp->chgIData(oldp+195,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t),32);
        bufp->chgCData(oldp+196,((7U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                        >> 1U))),3);
        bufp->chgCData(oldp+197,((0x7fU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                           >> 4U))),7);
        bufp->chgCData(oldp+198,((0x7fU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)),7);
        bufp->chgCData(oldp+199,((0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                           >> 2U))),5);
        bufp->chgCData(oldp+200,((7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+201,((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+202,((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U)))));
        bufp->chgBit(oldp+203,(((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))) 
                                | (4U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))))));
        bufp->chgBit(oldp+204,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7) 
                                | (0x18U == (0x1fU 
                                             & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U))))));
        bufp->chgBit(oldp+205,((IData)(((0x60U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_5)))));
        bufp->chgBit(oldp+206,((IData)((0x60U == (0x707cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))));
        bufp->chgBit(oldp+207,((IData)((0x1060U == 
                                        (0x707cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))));
        bufp->chgBit(oldp+208,((IData)(((0x60U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9)))));
        bufp->chgBit(oldp+209,((IData)(((0x60U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & ((5U == (7U 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0xcU))) 
                                           | (7U == 
                                              (7U & 
                                               (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 0xcU))))))));
        bufp->chgBit(oldp+210,((0x19U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U)))));
        bufp->chgBit(oldp+211,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7));
        bufp->chgBit(oldp+212,((0U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U)))));
        bufp->chgBit(oldp+213,((8U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U)))));
        bufp->chgBit(oldp+214,((IData)(((0U == (0x7cU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26)))));
        bufp->chgBit(oldp+215,(((IData)(((0U == (0x7cU 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                         & ((0U == 
                                             (7U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0xcU))) 
                                            | (4U == 
                                               (7U 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0xcU)))))) 
                                | (IData)((0x20U == 
                                           (0x707cU 
                                            & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))))));
        bufp->chgBit(oldp+216,(((IData)(((0U == (0x7cU 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                         & ((1U == 
                                             (7U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0xcU))) 
                                            | (5U == 
                                               (7U 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0xcU)))))) 
                                | (IData)((0x1020U 
                                           == (0x707cU 
                                               & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))))));
        bufp->chgBit(oldp+217,((IData)(((0x2000U == 
                                         (0x7000U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & ((0U == (0x1fU 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 2U))) 
                                           | (8U == 
                                              (0x1fU 
                                               & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                  >> 2U))))))));
        bufp->chgBit(oldp+218,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0));
        bufp->chgBit(oldp+219,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15))));
        bufp->chgBit(oldp+220,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                & (0x1000U == (0x7000U 
                                               & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))));
        bufp->chgBit(oldp+221,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15) 
                                   | (3U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0xcU)))))));
        bufp->chgBit(oldp+222,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0));
        bufp->chgBit(oldp+223,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9))));
        bufp->chgBit(oldp+224,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16))));
        bufp->chgSData(oldp+225,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10),10);
        bufp->chgBit(oldp+226,(((IData)((0x2010U == 
                                         (0x707cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17) 
                                    & (0x20U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 0x19U))) 
                                   | (IData)(((0x30U 
                                               == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                              & ((2U 
                                                  == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                                 | (0x105U 
                                                    == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))))));
        bufp->chgBit(oldp+227,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & ((0x100U 
                                               == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                              | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23)))))));
        bufp->chgBit(oldp+228,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23))))));
        bufp->chgBit(oldp+229,(((IData)((0x10U == (0x707cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                              | (0x100U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
        bufp->chgBit(oldp+230,(((IData)((0x1010U == 
                                         (0xfe00707cU 
                                          & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & (1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))));
        bufp->chgBit(oldp+231,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17) 
                                 & ((0U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 0x19U)) 
                                    | (0x20U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 0x19U)))) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & ((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                              | (0x105U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
        bufp->chgBit(oldp+232,(((IData)(((0x10U == 
                                          (0x7cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                         & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9))) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & ((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                              | (6U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
        bufp->chgBit(oldp+233,(((IData)(((0x10U == 
                                          (0x7cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                         & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16))) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & ((6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                              | (7U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
        bufp->chgBit(oldp+234,(((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))) 
                                | (5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))))));
        bufp->chgCData(oldp+235,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state),2);
        bufp->chgBit(oldp+236,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_dividend_neg));
        bufp->chgBit(oldp+237,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg));
        bufp->chgIData(oldp+238,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder),32);
        bufp->chgIData(oldp+239,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor),32);
        bufp->chgIData(oldp+240,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient),32);
        bufp->chgBit(oldp+241,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg));
        bufp->chgBit(oldp+242,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg));
        bufp->chgBit(oldp+243,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem));
        bufp->chgCData(oldp+244,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr),5);
        bufp->chgIData(oldp+245,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_remainder),32);
        bufp->chgIData(oldp+246,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg)
                                   ? ((IData)(1U) + 
                                      (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                                   : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor)),32);
        bufp->chgQData(oldp+247,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference),33);
        bufp->chgBit(oldp+249,((1U & (~ (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+250,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl))));
        bufp->chgBit(oldp+251,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl) 
                                      >> 1U))));
        bufp->chgCData(oldp+252,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state),2);
        bufp->chgBit(oldp+253,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init));
        bufp->chgBit(oldp+254,((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
        bufp->chgBit(oldp+255,((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
        bufp->chgBit(oldp+256,((6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
        bufp->chgBit(oldp+257,((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
        bufp->chgBit(oldp+258,((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
        bufp->chgBit(oldp+259,((1U & ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                       ? (1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 0x14U))
                                       : ((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                           ? (1U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 7U))
                                           : 0U)))));
        bufp->chgCData(oldp+260,((0xfU & (((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                           | (6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                           ? (0xfU 
                                              & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 0x15U))
                                           : (((3U 
                                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                               | (4U 
                                                  == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                               ? (0xfU 
                                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                     >> 8U))
                                               : 0U)))),4);
        bufp->chgCData(oldp+261,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2)
                                   ? (0x3fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 0x19U))
                                   : 0U)),6);
        bufp->chgBit(oldp+262,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_0)
                                       ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir, 0x1fU)
                                       : ((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                           ? (1U & 
                                              (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                               >> 7U))
                                           : ((6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                               ? (1U 
                                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                     >> 0x14U))
                                               : 0U))))));
        bufp->chgCData(oldp+263,((0xffU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_1)
                                            ? (0xffU 
                                               & (- (IData)(
                                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                             >> 0x1fU))))
                                            : (((5U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                                | (6U 
                                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                                ? (0xffU 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0xcU))
                                                : 0U)))),8);
        bufp->chgSData(oldp+264,((0x7ffU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2)
                                             ? (0x7ffU 
                                                & (- (IData)(
                                                             (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                              >> 0x1fU))))
                                             : ((5U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                                 ? 
                                                (0x7ffU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 0x14U))
                                                 : 0U)))),11);
        bufp->chgBit(oldp+265,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                      >> 3U))));
        bufp->chgBit(oldp+266,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                      >> 4U))));
        bufp->chgBit(oldp+267,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                      >> 5U))));
        bufp->chgBit(oldp+268,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+269,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))));
        bufp->chgBit(oldp+270,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign));
        bufp->chgBit(oldp+271,((1U & (IData)(((0x14U 
                                               == (0x14U 
                                                   & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))) 
                                              & ((2U 
                                                  & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))
                                                  ? 
                                                 (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                  >> 0x1fU)
                                                  : 
                                                 (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                  >> 0xfU)))))));
        bufp->chgCData(oldp+272,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                   ? (0xffU & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7) 
                                                | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                                    >> 3U) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))))
                                                ? (0xffU 
                                                   & vlSelfRef.top__DOT__m0__DOT__dbus_rdata)
                                                : (
                                                   (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
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
                                   : 0U)),8);
        bufp->chgCData(oldp+273,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                   ? (0xffU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7)
                                                ? (0xffU 
                                                   & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                      >> 8U))
                                                : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_8)
                                                    ? 
                                                   VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign)
                                                     ? 0xffU
                                                     : 0U))))
                                   : 0U)),8);
        bufp->chgCData(oldp+274,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                   ? (0xffU & ((0x20U 
                                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                                ? (0xffU 
                                                   & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                      >> 0x10U))
                                                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                   : 0U)),8);
        bufp->chgCData(oldp+275,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                   ? (0xffU & ((0x20U 
                                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                                ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                   : 0U)),8);
        bufp->chgCData(oldp+276,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state),2);
        bufp->chgQData(oldp+277,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplicand),33);
        bufp->chgQData(oldp+279,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplier),33);
        bufp->chgQData(oldp+281,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product),64);
        bufp->chgBit(oldp+283,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__is_high));
        bufp->chgBit(oldp+284,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl))));
        bufp->chgBit(oldp+285,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                      >> 1U))));
        bufp->chgBit(oldp+286,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                      >> 2U))));
        bufp->chgBit(oldp+287,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                      >> 3U))));
        bufp->chgCData(oldp+288,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state),2);
        bufp->chgCData(oldp+289,((0x1fU & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                           >> 2U))),5);
        bufp->chgBit(oldp+290,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                      >> 3U))));
        bufp->chgBit(oldp+291,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                      >> 4U))));
        bufp->chgBit(oldp+292,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                      >> 5U))));
        bufp->chgIData(oldp+293,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[0]),32);
        bufp->chgIData(oldp+294,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[1]),32);
        bufp->chgIData(oldp+295,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[2]),32);
        bufp->chgIData(oldp+296,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[3]),32);
        bufp->chgIData(oldp+297,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[4]),32);
        bufp->chgIData(oldp+298,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[5]),32);
        bufp->chgIData(oldp+299,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[6]),32);
        bufp->chgIData(oldp+300,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[7]),32);
        bufp->chgIData(oldp+301,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[8]),32);
        bufp->chgIData(oldp+302,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[9]),32);
        bufp->chgIData(oldp+303,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[10]),32);
        bufp->chgIData(oldp+304,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[11]),32);
        bufp->chgIData(oldp+305,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[12]),32);
        bufp->chgIData(oldp+306,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[13]),32);
        bufp->chgIData(oldp+307,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[14]),32);
        bufp->chgIData(oldp+308,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[15]),32);
        bufp->chgIData(oldp+309,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[16]),32);
        bufp->chgIData(oldp+310,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[17]),32);
        bufp->chgIData(oldp+311,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[18]),32);
        bufp->chgIData(oldp+312,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[19]),32);
        bufp->chgIData(oldp+313,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[20]),32);
        bufp->chgIData(oldp+314,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[21]),32);
        bufp->chgIData(oldp+315,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[22]),32);
        bufp->chgIData(oldp+316,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[23]),32);
        bufp->chgIData(oldp+317,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[24]),32);
        bufp->chgIData(oldp+318,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[25]),32);
        bufp->chgIData(oldp+319,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[26]),32);
        bufp->chgIData(oldp+320,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[27]),32);
        bufp->chgIData(oldp+321,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[28]),32);
        bufp->chgIData(oldp+322,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[29]),32);
        bufp->chgIData(oldp+323,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[30]),32);
        bufp->chgIData(oldp+324,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[31]),32);
        bufp->chgSData(oldp+325,(vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr),12);
        bufp->chgSData(oldp+326,((0x1fffU & (vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 
                                             >> 2U))),13);
        bufp->chgQData(oldp+327,(vlSelfRef.top__DOT__m0__DOT__perf__DOT__mcycle),64);
        bufp->chgCData(oldp+329,(vlSelfRef.top__DOT__m0__DOT__perf__DOT__cnt_ctrl),2);
        bufp->chgIData(oldp+330,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt),32);
        bufp->chgBit(oldp+331,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__busy));
        bufp->chgBit(oldp+332,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en));
        bufp->chgBit(oldp+333,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done));
        bufp->chgCData(oldp+334,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state),5);
        bufp->chgIData(oldp+335,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2),20);
        bufp->chgSData(oldp+336,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_dat),9);
        bufp->chgIData(oldp+337,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt),32);
        bufp->chgCData(oldp+338,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x),8);
        bufp->chgCData(oldp+339,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y),8);
        bufp->chgCData(oldp+340,((0xffU & ((IData)(0xefU) 
                                           - (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x)))),8);
        bufp->chgCData(oldp+341,((0xffU & ((IData)(0xefU) 
                                           - (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y)))),8);
        bufp->chgSData(oldp+342,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_color),16);
        bufp->chgSData(oldp+343,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_init),9);
        bufp->chgSData(oldp+344,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__w_data),9);
        bufp->chgCData(oldp+345,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state),6);
        bufp->chgCData(oldp+346,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt),8);
        bufp->chgCData(oldp+347,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data),8);
        bufp->chgBit(oldp+348,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__we));
        bufp->chgBit(oldp+349,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__top));
        bufp->chgCData(oldp+350,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__wdata),3);
        bufp->chgSData(oldp+351,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__waddr),15);
        bufp->chgBit(oldp+352,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rtop));
        bufp->chgSData(oldp+353,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__raddr),15);
        bufp->chgCData(oldp+354,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_lo),3);
        bufp->chgCData(oldp+355,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_hi),3);
        bufp->chgBit(oldp+356,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__sel));
        bufp->chgSData(oldp+357,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_adr_p),16);
        bufp->chgSData(oldp+358,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_dat_p),16);
        bufp->chgSData(oldp+359,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__data),16);
    }
    bufp->chgBit(oldp+360,(vlSelfRef.top__DOT__clk));
    bufp->chgBit(oldp+361,(vlSelfRef.top__DOT__rst_n));
    bufp->chgBit(oldp+362,(vlSelfRef.top__DOT__m0__DOT__rst_ni));
    bufp->chgBit(oldp+363,((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__rst_ni)))));
    bufp->chgIData(oldp+364,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__i),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
