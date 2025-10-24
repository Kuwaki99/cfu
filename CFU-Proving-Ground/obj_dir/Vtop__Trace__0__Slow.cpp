// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+5,0,"minstret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+7,0,"br_pred_cntr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+9,0,"br_misp_cntr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+11,0,"cpu_sim_fini",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"r_num_dchit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"r_num_dcmis",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+14,0,"sda",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"scl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"dc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"st7789_SDA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"st7789_SCL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"st7789_DC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"st7789_RES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+363,0,"rst_ni",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"locked",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"imem_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"imem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"dbus_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"dbus_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"dbus_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"dbus_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"dbus_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,0,"rdata_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"dmem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"dmem_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+26,0,"dmem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"dmem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+29,0,"vmem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"vmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"vmem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"vmem_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"vmem_rdata_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+34,0,"perf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"perf_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"perf_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"perf_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"vmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+367,0,"CACHE_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+368,0,"CACHE_INDEX_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"CACHE_OFFSET_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"CACHE_TAG_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+38,0,"current_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+39,0,"current_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+40,0,"cache_valid_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"cache_tag_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+42,0,"is_read_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"is_write_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"r_dmem_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"r_dmem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"r_dbus_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,0,"r_dbus_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,0,"r_dbus_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+49,0,"r_dc_hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"r_dc_mis",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"reg_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+52,0,"reg_tag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+364,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"ibus_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"ibus_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"dbus_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+20,0,"dbus_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"dbus_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"dbus_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"dbus_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"dbus_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"w_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"r_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+55,0,"IfId_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"IfId_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"IfId_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+58,0,"IfId_br_pred_tkn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"IfId_pat_hist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+60,0,"IfId_load_muldiv_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"IfId_instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+62,0,"IfId_rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"IfId_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+64,0,"IfId_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"IfId_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+66,0,"IdEx_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"IdEx_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"IdEx_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"IdEx_br_pred_tkn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"IdEx_pat_hist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+71,0,"IdEx_alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+72,0,"IdEx_bru_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"IdEx_lsu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+74,0,"IdEx_mul_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+75,0,"IdEx_div_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+76,0,"IdEx_cfu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+77,0,"IdEx_rs1_fwd_Ma_to_Ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"IdEx_rs2_fwd_Ma_to_Ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"IdEx_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"IdEx_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"IdEx_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+82,0,"IdEx_rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"IdEx_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+84,0,"IdEx_j_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+85,0,"ExMa_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"ExMa_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"ExMa_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"ExMa_pat_hist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+89,0,"ExMa_is_ctrl_tsfr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"ExMa_br_tkn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"ExMa_br_misp_rslt1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"ExMa_br_misp_rslt2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"ExMa_br_tkn_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"ExMa_lsu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,0,"ExMa_dbus_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+96,0,"ExMa_rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"ExMa_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+98,0,"ExMa_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"ExMa_mdc_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"ExMa_j_b_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"ExMa_mul_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"ExMa_div_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"ExMa_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"MaWb_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"MaWb_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"MaWb_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,0,"MaWb_rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"MaWb_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"MaWb_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+110,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"Ma_br_tkn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"Ma_br_misp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"Ma_br_true_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"If_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"Id_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"Ex_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"Ma_v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"If_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+118,0,"If_pc_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+119,0,"If_pc_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"If_pat_hist",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+121,0,"If_br_pred_tkn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"If_br_pred_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"If_instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+124,0,"If_rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"If_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,0,"If_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+127,0,"If_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+19,0,"If_ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"If_load_muldiv_use",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"Id_src2_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"Id_alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+131,0,"Id_bru_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"Id_lsu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+133,0,"Id_mul_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"Id_div_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+135,0,"Id_cfu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+136,0,"Id_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+137,0,"Id_xrs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"Id_xrs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"Wb_xreg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"Id_rs1_fwd_Ma_to_Ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"Id_rs2_fwd_Ma_to_Ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"Id_rs1_fwd_Wb_to_Ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"Id_rs2_fwd_Wb_to_Ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+144,0,"Id_pc_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+145,0,"Id_use_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+146,0,"Id_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+147,0,"Id_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+148,0,"Id_j_pc4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+149,0,"Ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"Ex_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"Ex_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"Ex_alu_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+153,0,"Ex_is_ctrl_tsfr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"Ex_br_tkn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"Ex_br_misp_rslt1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"Ex_br_misp_rslt2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"Ex_br_tkn_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"dbus_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"dbus_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"dbus_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+159,0,"Ex_mul_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"Ex_mul_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"Ex_div_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"Ex_div_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+163,0,"Ex_cfu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"Ex_cfu_stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"Ex_cfu_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"Ma_load_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"Ma_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"alu_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+150,0,"src1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"src2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"j_pc4_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+152,0,"rslt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+167,0,"w_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"w_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"w_less",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+170,0,"adder_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+172,0,"adder_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+174,0,"adder_rslt_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+176,0,"less_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"adder_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+178,0,"right_shifter_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+180,0,"shamt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+181,0,"left_shifter_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"right_shifter_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"bitwise_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+184,0,"lui_auipc_rslt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("bimodal", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"pat_hist_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+121,0,"br_pred_tkn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"br_pred_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+111,0,"br_tkn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"br_tsfr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"pat_hist_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"br_tkn_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+186,0,"w_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+187,0,"btb_ridx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+188,0,"btb_widx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+189,0,"r_btb_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("bru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"bru_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+150,0,"src1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"src2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"npc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"br_pred_tkn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"is_ctrl_tsfr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"br_tkn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"br_misp_rslt1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+156,0,"br_misp_rslt2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"br_tkn_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+190,0,"sext_src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+192,0,"sext_src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+194,0,"w_eq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"w_lt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"br_tkn_pc_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("cfu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"funct3_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+198,0,"funct7_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+150,0,"src1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"src2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+371,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+164,0,"rslt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"ir_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"src2_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+130,0,"alu_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+131,0,"bru_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"lsu_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+133,0,"mul_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+134,0,"div_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+135,0,"cfu_ctrl_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+57,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+200,0,"op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+201,0,"f3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+202,0,"f7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+203,0,"src2_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"src2_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"bru_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"bru_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"bru_c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"bru_c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"bru_c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"bru_c5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"bru_c6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"bru_c7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"lsu_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"lsu_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+215,0,"lsu_c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"lsu_c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"lsu_c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"lsu_c5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"mul_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"mul_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"mul_c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"mul_c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"div_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"div_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"div_c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"f10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+227,0,"alu_c0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"alu_c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+229,0,"alu_c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"alu_c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"alu_c4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"alu_c5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"alu_c6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+234,0,"alu_c7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+235,0,"alu_c8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("divider", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"div_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+150,0,"src1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"src2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"rslt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+237,0,"is_dividend_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"is_divisor_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+239,0,"remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+242,0,"is_div_rslt_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+243,0,"is_rem_rslt_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"is_rem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+245,0,"cntr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,0,"uintx_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"uintx_divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+248,0,"difference",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+250,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"w_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"w_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+253,0,"w_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+254,0,"w_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("imm_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"ir_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"instr_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+136,0,"imm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+255,0,"i_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"s_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"j_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"b_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"u_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"imm0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"imm4_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+262,0,"imm10_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+263,0,"imm11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"imm19_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+265,0,"imm30_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("load_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"lsu_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,0,"dbus_offset_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"dbus_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"rslt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+266,0,"w_lb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"w_lh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"w_lw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"w_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"w_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"ost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+24,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+271,0,"w_lb_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+272,0,"w_lh_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+274,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+275,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+276,0,"w4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("multiplier", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"mul_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"src1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"src2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+159,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"rslt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+278,0,"r_multiplicand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+280,0,"r_multiplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+282,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+284,0,"is_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"w_mul",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"w_src1_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"w_src2_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"w_is_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+289,0,"w_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("pre_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"ir_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"instr_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+124,0,"rf_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+126,0,"rs1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+127,0,"rs2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+290,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("store_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+149,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"lsu_ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+150,0,"src1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"src2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"imm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"dbus_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"dbus_offset_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+20,0,"dbus_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+22,0,"dbus_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"dbus_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+53,0,"dbus_ren_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"w_sb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"w_sh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"w_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("xreg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"rs1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+65,0,"rs2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+137,0,"xrs1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"xrs2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+139,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+109,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+294+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"re_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"valid_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+28,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"valid_raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+19,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("perf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+34,0,"w_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+328,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+330,0,"cnt_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+36,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("st7789_disp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"w_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"st7789_SDA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"st7789_SCL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"st7789_DC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"st7789_RES",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"w_raddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+37,0,"w_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+331,0,"r_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"r_RES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"r_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"init_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+335,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+336,0,"r_state2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+337,0,"r_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+372,0,"r_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+338,0,"r_bcnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"r_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+340,0,"r_y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+341,0,"w_nx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+342,0,"w_ny",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+343,0,"r_color",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+344,0,"r_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+345,0,"w_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("spi0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"w_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"d_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+14,0,"SDA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"SCL",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"DC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"r_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+347,0,"r_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+15,0,"r_SCL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"r_DC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+348,0,"r_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+14,0,"r_SDA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("vmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+31,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+33,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+365,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+349,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"top",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+352,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+353,0,"rtop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+355,0,"rdata_lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+356,0,"rdata_hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+357,0,"sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"ADDR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+358,0,"r_adr_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+359,0,"r_dat_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+360,0,"data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+366,(1U));
    bufp->fullIData(oldp+367,(0x400U),32);
    bufp->fullIData(oldp+368,(0xaU),32);
    bufp->fullIData(oldp+369,(2U),32);
    bufp->fullIData(oldp+370,(0x14U),32);
    bufp->fullBit(oldp+371,(0U));
    bufp->fullSData(oldp+372,(0xf800U),16);
    bufp->fullSData(oldp+373,(0x7fffU),16);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.top__DOT__m0__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__i),32);
    bufp->fullQData(oldp+3,(vlSelfRef.top__DOT__mcycle),64);
    bufp->fullQData(oldp+5,(vlSelfRef.top__DOT__minstret),64);
    bufp->fullQData(oldp+7,(vlSelfRef.top__DOT__br_pred_cntr),64);
    bufp->fullQData(oldp+9,(vlSelfRef.top__DOT__br_misp_cntr),64);
    bufp->fullBit(oldp+11,(vlSelfRef.top__DOT__cpu_sim_fini));
    bufp->fullIData(oldp+12,(vlSelfRef.top__DOT__r_num_dchit),32);
    bufp->fullIData(oldp+13,(vlSelfRef.top__DOT__r_num_dcmis),32);
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SDA));
    bufp->fullBit(oldp+15,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_SCL));
    bufp->fullBit(oldp+16,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_DC));
    bufp->fullBit(oldp+17,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_RES));
    bufp->fullIData(oldp+18,((0x7fffU & vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)),32);
    bufp->fullIData(oldp+19,(vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata),32);
    bufp->fullBit(oldp+20,(vlSelfRef.top__DOT__m0__DOT__dbus_we));
    bufp->fullIData(oldp+21,(vlSelfRef.top__DOT__m0__DOT__dbus_addr),32);
    bufp->fullIData(oldp+22,(vlSelfRef.top__DOT__m0__DOT__dbus_wdata),32);
    bufp->fullCData(oldp+23,(vlSelfRef.top__DOT__m0__DOT__dbus_wstrb),4);
    bufp->fullIData(oldp+24,(vlSelfRef.top__DOT__m0__DOT__dbus_rdata),32);
    bufp->fullBit(oldp+25,(vlSelfRef.top__DOT__m0__DOT__rdata_sel));
    bufp->fullBit(oldp+26,(vlSelfRef.top__DOT__m0__DOT__dmem_re));
    bufp->fullBit(oldp+27,(vlSelfRef.top__DOT__m0__DOT__dmem_we));
    bufp->fullIData(oldp+28,(vlSelfRef.top__DOT__m0__DOT__dmem__DOT__rdata),32);
    bufp->fullBit(oldp+29,(vlSelfRef.top__DOT__m0__DOT__vmem_we));
    bufp->fullSData(oldp+30,(vlSelfRef.top__DOT__m0__DOT__vmem_addr),16);
    bufp->fullCData(oldp+31,((7U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)),3);
    bufp->fullSData(oldp+32,(vlSelfRef.top__DOT__m0__DOT__vmem_raddr),16);
    bufp->fullCData(oldp+33,(vlSelfRef.top__DOT__m0__DOT__vmem_rdata_t),3);
    bufp->fullBit(oldp+34,(((IData)(vlSelfRef.top__DOT__m0__DOT__dbus_we) 
                            & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2) 
                               & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                                  >> 0x1eU)))));
    bufp->fullCData(oldp+35,(vlSelfRef.top__DOT__m0__DOT__perf_addr),4);
    bufp->fullIData(oldp+36,(vlSelfRef.top__DOT__m0__DOT__perf__DOT__rdata),32);
    bufp->fullSData(oldp+37,(((0xf800U & ((- (IData)(
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
    bufp->fullSData(oldp+38,(vlSelfRef.top__DOT__m0__DOT__current_index),10);
    bufp->fullIData(oldp+39,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_2)
                               ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__store_unit__DOT____VdfgRegularize_h056a6b28_0_8 
                                  >> 0xcU) : 0U)),20);
    bufp->fullBit(oldp+40,(vlSelfRef.top__DOT__m0__DOT__dc_valid
                           [vlSelfRef.top__DOT__m0__DOT__current_index]));
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__m0__DOT__dc_tag
                             [vlSelfRef.top__DOT__m0__DOT__current_index]),20);
    bufp->fullBit(oldp+42,(vlSelfRef.top__DOT__m0__DOT__is_read_hit));
    bufp->fullBit(oldp+43,(vlSelfRef.top__DOT__m0__DOT__is_write_hit));
    bufp->fullBit(oldp+44,(vlSelfRef.top__DOT__m0__DOT__r_dmem_re));
    bufp->fullBit(oldp+45,(vlSelfRef.top__DOT__m0__DOT__r_dmem_we));
    bufp->fullIData(oldp+46,(vlSelfRef.top__DOT__m0__DOT__r_dbus_addr),32);
    bufp->fullIData(oldp+47,(vlSelfRef.top__DOT__m0__DOT__r_dbus_wdata),32);
    bufp->fullCData(oldp+48,(vlSelfRef.top__DOT__m0__DOT__r_dbus_wstrb),4);
    bufp->fullBit(oldp+49,(vlSelfRef.top__DOT__m0__DOT__r_dc_hit));
    bufp->fullBit(oldp+50,(vlSelfRef.top__DOT__m0__DOT__r_dc_mis));
    bufp->fullSData(oldp+51,((0x3ffU & (vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                                        >> 2U))),10);
    bufp->fullIData(oldp+52,((vlSelfRef.top__DOT__m0__DOT__r_dbus_addr 
                              >> 0xcU)),20);
    bufp->fullBit(oldp+53,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid) 
                            & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl))));
    bufp->fullIData(oldp+54,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__r_pc),32);
    bufp->fullBit(oldp+55,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v));
    bufp->fullIData(oldp+56,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc),32);
    bufp->fullIData(oldp+57,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir),32);
    bufp->fullBit(oldp+58,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_br_pred_tkn));
    bufp->fullCData(oldp+59,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pat_hist),2);
    bufp->fullBit(oldp+60,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use));
    bufp->fullCData(oldp+61,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type),3);
    bufp->fullBit(oldp+62,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rf_we));
    bufp->fullCData(oldp+63,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rd),5);
    bufp->fullCData(oldp+64,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1),5);
    bufp->fullCData(oldp+65,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2),5);
    bufp->fullBit(oldp+66,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_v));
    bufp->fullIData(oldp+67,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_ir),32);
    bufp->fullBit(oldp+69,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_br_pred_tkn));
    bufp->fullCData(oldp+70,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pat_hist),2);
    bufp->fullSData(oldp+71,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl),9);
    bufp->fullCData(oldp+72,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl),8);
    bufp->fullCData(oldp+73,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl),6);
    bufp->fullCData(oldp+74,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl),4);
    bufp->fullCData(oldp+75,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl),3);
    bufp->fullSData(oldp+76,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl),11);
    bufp->fullBit(oldp+77,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs1_fwd_Ma_to_Ex));
    bufp->fullBit(oldp+78,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rs2_fwd_Ma_to_Ex));
    bufp->fullIData(oldp+79,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src1),32);
    bufp->fullIData(oldp+80,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_src2),32);
    bufp->fullIData(oldp+81,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_imm),32);
    bufp->fullBit(oldp+82,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rf_we));
    bufp->fullCData(oldp+83,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd),5);
    bufp->fullIData(oldp+84,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_j_pc4),32);
    bufp->fullBit(oldp+85,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_v));
    bufp->fullIData(oldp+86,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc),32);
    bufp->fullIData(oldp+87,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_ir),32);
    bufp->fullCData(oldp+88,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist),2);
    bufp->fullBit(oldp+89,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_is_ctrl_tsfr));
    bufp->fullBit(oldp+90,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn));
    bufp->fullBit(oldp+91,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt1));
    bufp->fullBit(oldp+92,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_misp_rslt2));
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc),32);
    bufp->fullCData(oldp+94,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl),6);
    bufp->fullCData(oldp+95,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset),2);
    bufp->fullBit(oldp+96,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rf_we));
    bufp->fullCData(oldp+97,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd),5);
    bufp->fullIData(oldp+98,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rslt),32);
    bufp->fullIData(oldp+99,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_mdc_rslt),32);
    bufp->fullBit(oldp+100,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_j_b_insn));
    bufp->fullBit(oldp+101,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_mul_stall));
    bufp->fullBit(oldp+102,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_div_stall));
    bufp->fullBit(oldp+103,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_stall));
    bufp->fullBit(oldp+104,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_v));
    bufp->fullIData(oldp+105,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_pc),32);
    bufp->fullIData(oldp+106,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_ir),32);
    bufp->fullBit(oldp+107,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rf_we));
    bufp->fullCData(oldp+108,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd),5);
    bufp->fullIData(oldp+109,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt),32);
    bufp->fullBit(oldp+110,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst));
    bufp->fullBit(oldp+111,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn));
    bufp->fullBit(oldp+112,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp));
    bufp->fullIData(oldp+113,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__rst)
                                ? 0U : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn)
                                         ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_br_tkn_pc
                                         : ((IData)(4U) 
                                            + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc)))),32);
    bufp->fullBit(oldp+114,((1U & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
                                   & ((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use)) 
                                      | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v))))));
    bufp->fullBit(oldp+115,(((~ ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp) 
                                 | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_load_muldiv_use))) 
                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_v))));
    bufp->fullBit(oldp+116,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_v));
    bufp->fullSData(oldp+117,((0x7fffU & vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)),15);
    bufp->fullSData(oldp+118,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_pc_stall)
                                ? 0U : 4U)),15);
    bufp->fullBit(oldp+119,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_pc_stall));
    bufp->fullCData(oldp+120,((3U & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry)),2);
    bufp->fullBit(oldp+121,((1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry 
                                   >> 1U))));
    bufp->fullIData(oldp+122,((0x7ffcU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry)),32);
    bufp->fullCData(oldp+123,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_instr_type),3);
    bufp->fullBit(oldp+124,((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rd))));
    bufp->fullCData(oldp+125,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rd),5);
    bufp->fullCData(oldp+126,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs1),5);
    bufp->fullCData(oldp+127,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__If_rs2),5);
    bufp->fullBit(oldp+128,(((~ (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_misp)) 
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
    bufp->fullCData(oldp+129,(((((0xdU == (0x1fU & 
                                           (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 2U))) 
                                 | (4U == (0x1fU & 
                                           (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 2U)))) 
                                << 1U) | (5U == (0x1fU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 2U))))),2);
    bufp->fullSData(oldp+130,(((((((0xdU == (0x1fU 
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
                                      & ((0U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 0x19U)) 
                                         | (0x20U == 
                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 0x19U)))) 
                                     | (IData)(((0x30U 
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
                                              == (0x707cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                     | (IData)(((0x30U 
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
                                       | (IData)(((0x30U 
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
    bufp->fullCData(oldp+131,((((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7) 
                                  << 7U) | ((0x19U 
                                             == (0x1fU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 2U))) 
                                            << 6U)) 
                                | (((IData)(((0x60U 
                                              == (0x7cU 
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
                                             == (0x707cU 
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
    bufp->fullCData(oldp+132,(((((IData)(((0x2000U 
                                           == (0x7000U 
                                               & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                          & ((0U == 
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
                               | (((IData)(((0U == 
                                             (0x7cU 
                                              & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                            & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26))) 
                                   << 2U) | (((8U == 
                                               (0x1fU 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 2U))))))),6);
    bufp->fullCData(oldp+133,((((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                  & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15) 
                                     | (3U == (7U & 
                                               (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 0xcU))))) 
                                 << 3U) | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                            & (0x1000U 
                                               == (0x7000U 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                                           << 2U)) 
                               | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                    & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15)) 
                                   << 1U) | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0)))),4);
    bufp->fullCData(oldp+134,(((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                 & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16)) 
                                << 2U) | ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                                            & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9)) 
                                           << 1U) | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0)))),3);
    bufp->fullSData(oldp+135,(((2U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U)))
                                ? (1U | ((0x7f0U & 
                                          (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                           >> 0x15U)) 
                                         | (0xeU & 
                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 0xbU))))
                                : 0U)),11);
    bufp->fullIData(oldp+136,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Id_imm),32);
    bufp->fullIData(oldp+137,(((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1))
                                ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                         & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1) 
                                            == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                         ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                         : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                        [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1]))),32);
    bufp->fullIData(oldp+138,(((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2))
                                ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                         & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2) 
                                            == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                         ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                         : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                        [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2]))),32);
    bufp->fullBit(oldp+139,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we));
    bufp->fullBit(oldp+140,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6) 
                             & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd) 
                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1)))));
    bufp->fullBit(oldp+141,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_6) 
                             & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_rd) 
                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)))));
    bufp->fullBit(oldp+142,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                             & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs1)))));
    bufp->fullBit(oldp+143,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                             & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)))));
    bufp->fullIData(oldp+144,(((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U)))
                                ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc
                                : 0U)),32);
    bufp->fullBit(oldp+145,(((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                              >> 2U))) 
                             | ((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))) 
                                | (4U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U)))))));
    bufp->fullIData(oldp+146,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
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
    bufp->fullIData(oldp+147,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT____VdfgRegularize_hcce91bd5_0_5) 
                                & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_rd) 
                                   == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2)))
                                ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt
                                : (((5U == (0x1fU & 
                                            (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 2U))) 
                                    | ((0xdU == (0x1fU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 2U))) 
                                       | (4U == (0x1fU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 2U)))))
                                    ? (((5U == (0x1fU 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U)))
                                         ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc
                                         : 0U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Id_imm)
                                    : ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2))
                                        ? 0U : (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Wb_xreg_we) 
                                                 & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2) 
                                                    == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rd)))
                                                 ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__MaWb_rslt
                                                 : 
                                                vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram
                                                [vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_rs2]))))),32);
    bufp->fullIData(oldp+148,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7)
                                ? ((IData)(4U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc)
                                : 0U)),32);
    bufp->fullBit(oldp+149,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid));
    bufp->fullIData(oldp+150,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1),32);
    bufp->fullIData(oldp+151,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2),32);
    bufp->fullIData(oldp+152,(((1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                       >> 2U) & (IData)(
                                                        (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                                         >> 0x21U)))) 
                               | (((8U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                    ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                               >> 1U))
                                    : 0U) | (((0x10U 
                                               & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                               ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
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
    bufp->fullBit(oldp+153,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                   | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_br_pred_tkn)))));
    bufp->fullBit(oldp+154,((1U & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
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
    bufp->fullBit(oldp+155,((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc 
                             != (0xfffffffeU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t))));
    bufp->fullBit(oldp+156,((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_pc 
                             != ((IData)(4U) + vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_pc))));
    bufp->fullIData(oldp+157,((0xfffffffeU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t)),32);
    bufp->fullCData(oldp+158,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__dbus_offset),2);
    bufp->fullBit(oldp+159,((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state))));
    bufp->fullIData(oldp+160,(((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state))
                                ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__is_high)
                                    ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product 
                                               >> 0x20U))
                                    : (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product))
                                : 0U)),32);
    bufp->fullBit(oldp+161,((0U != (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state))));
    bufp->fullIData(oldp+162,(((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state))
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
    bufp->fullBit(oldp+163,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid))));
    bufp->fullIData(oldp+164,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_valid))
                                ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                   | vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                : 0U)),32);
    bufp->fullIData(oldp+165,((((((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                   ? (0xffU & ((0x20U 
                                                & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                                ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                   : 0U) << 0x18U) 
                                | (((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                     ? (0xffU & ((0x20U 
                                                  & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                     >> 0x10U))
                                                  : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                     : 0U) << 0x10U)) 
                               | ((((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                     ? (0xffU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7)
                                                  ? 
                                                 (0xffU 
                                                  & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                     >> 8U))
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_8)
                                                   ? 
                                                  VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign)
                                                    ? 0xffU
                                                    : 0U))))
                                     : 0U) << 8U) | 
                                  ((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                    ? (0xffU & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7) 
                                                 | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                                     >> 3U) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))))
                                                 ? 
                                                (0xffU 
                                                 & vlSelfRef.top__DOT__m0__DOT__dbus_rdata)
                                                 : 
                                                ((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
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
    bufp->fullIData(oldp+166,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_rslt),32);
    bufp->fullBit(oldp+167,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))));
    bufp->fullBit(oldp+168,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+169,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                   >> 2U))));
    bufp->fullQData(oldp+170,((1ULL | (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                        << 0x21U) | 
                                       ((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)) 
                                        << 1U)))),34);
    bufp->fullQData(oldp+172,((0x3ffffffffULL & ((((QData)((IData)(
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
                                                                        >> 1U)))))))),34);
    bufp->fullQData(oldp+174,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t),34);
    bufp->fullBit(oldp+176,((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl) 
                                      >> 2U) & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                                >> 0x21U)))));
    bufp->fullIData(oldp+177,(((8U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                ? (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT__adder_rslt_t 
                                           >> 1U)) : 0U)),32);
    bufp->fullQData(oldp+178,((((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)))),33);
    bufp->fullCData(oldp+180,((0x1fU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)),5);
    bufp->fullIData(oldp+181,(((0x10U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                   << (0x1fU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))
                                : 0U)),32);
    bufp->fullIData(oldp+182,(((0x20U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                ? (IData)((0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(33,33,5, 
                                                            (((QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__alu__DOT____VdfgRegularize_h5f12ffbc_0_0)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1))), 
                                                            (0x1fU 
                                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2))))
                                : 0U)),32);
    bufp->fullIData(oldp+183,((((0x40U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                 ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                    ^ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                 : 0U) | ((0x80U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                           ? (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                              & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)
                                           : 0U))),32);
    bufp->fullIData(oldp+184,(((0x100U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_alu_ctrl))
                                ? vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2
                                : 0U)),32);
    bufp->fullSData(oldp+185,((0x7ffcU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry)),15);
    bufp->fullCData(oldp+186,((3U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ma_br_tkn)
                                      ? ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist) 
                                         + (3U > (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist)))
                                      : ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist) 
                                         - (0U < (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pat_hist)))))),2);
    bufp->fullSData(oldp+187,((0x7ffU & (vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 
                                         >> 2U))),11);
    bufp->fullSData(oldp+188,((0x7ffU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_pc 
                                         >> 2U))),11);
    bufp->fullIData(oldp+189,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bimodal__DOT__r_btb_entry),32);
    bufp->fullQData(oldp+190,((((QData)((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                  >> 1U) 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src1)))),33);
    bufp->fullQData(oldp+192,((((QData)((IData)((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_bru_ctrl) 
                                                  >> 1U) 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2 
                                                    >> 0x1fU)))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__Ex_src2)))),33);
    bufp->fullBit(oldp+194,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_eq));
    bufp->fullBit(oldp+195,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__w_lt));
    bufp->fullIData(oldp+196,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__bru__DOT__br_tkn_pc_t),32);
    bufp->fullCData(oldp+197,((7U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                     >> 1U))),3);
    bufp->fullCData(oldp+198,((0x7fU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_cfu_ctrl) 
                                        >> 4U))),7);
    bufp->fullCData(oldp+199,((0x7fU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)),7);
    bufp->fullCData(oldp+200,((0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                        >> 2U))),5);
    bufp->fullCData(oldp+201,((7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+202,((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+203,((5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 2U)))));
    bufp->fullBit(oldp+204,(((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U))) 
                             | (4U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U))))));
    bufp->fullBit(oldp+205,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7) 
                             | (0x18U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))))));
    bufp->fullBit(oldp+206,((IData)(((0x60U == (0x7cU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                     & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_5)))));
    bufp->fullBit(oldp+207,((IData)((0x60U == (0x707cU 
                                               & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))));
    bufp->fullBit(oldp+208,((IData)((0x1060U == (0x707cU 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))));
    bufp->fullBit(oldp+209,((IData)(((0x60U == (0x7cU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                     & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9)))));
    bufp->fullBit(oldp+210,((IData)(((0x60U == (0x7cU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                     & ((5U == (7U 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0xcU))) 
                                        | (7U == (7U 
                                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                     >> 0xcU))))))));
    bufp->fullBit(oldp+211,((0x19U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U)))));
    bufp->fullBit(oldp+212,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__bru_c7));
    bufp->fullBit(oldp+213,((0U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 2U)))));
    bufp->fullBit(oldp+214,((8U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 2U)))));
    bufp->fullBit(oldp+215,((IData)(((0U == (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                     & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_26)))));
    bufp->fullBit(oldp+216,(((IData)(((0U == (0x7cU 
                                              & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                      & ((0U == (7U 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 0xcU))) 
                                         | (4U == (7U 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0xcU)))))) 
                             | (IData)((0x20U == (0x707cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))))));
    bufp->fullBit(oldp+217,(((IData)(((0U == (0x7cU 
                                              & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                      & ((1U == (7U 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 0xcU))) 
                                         | (5U == (7U 
                                                   & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                      >> 0xcU)))))) 
                             | (IData)((0x1020U == 
                                        (0x707cU & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))))));
    bufp->fullBit(oldp+218,((IData)(((0x2000U == (0x7000U 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                     & ((0U == (0x1fU 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 2U))) 
                                        | (8U == (0x1fU 
                                                  & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                     >> 2U))))))));
    bufp->fullBit(oldp+219,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__mul_c0));
    bufp->fullBit(oldp+220,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15))));
    bufp->fullBit(oldp+221,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                             & (0x1000U == (0x7000U 
                                            & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)))));
    bufp->fullBit(oldp+222,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                             & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_15) 
                                | (3U == (7U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 0xcU)))))));
    bufp->fullBit(oldp+223,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__div_c0));
    bufp->fullBit(oldp+224,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9))));
    bufp->fullBit(oldp+225,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_13) 
                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16))));
    bufp->fullSData(oldp+226,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10),10);
    bufp->fullBit(oldp+227,(((IData)((0x2010U == (0x707cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                             | (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17) 
                                 & (0x20U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                              >> 0x19U))) 
                                | (IData)(((0x30U == 
                                            (0x7cU 
                                             & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                           & ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                              | (0x105U 
                                                 == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))))));
    bufp->fullBit(oldp+228,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21) 
                             | (IData)(((0x30U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & ((0x100U 
                                            == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                           | (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23)))))));
    bufp->fullBit(oldp+229,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_21) 
                             | (IData)(((0x30U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_23))))));
    bufp->fullBit(oldp+230,(((IData)((0x10U == (0x707cU 
                                                & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                             | (IData)(((0x30U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & ((0U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                           | (0x100U 
                                              == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
    bufp->fullBit(oldp+231,(((IData)((0x1010U == (0xfe00707cU 
                                                  & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir))) 
                             | (IData)(((0x30U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & (1U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)))))));
    bufp->fullBit(oldp+232,((((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_17) 
                              & ((0U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                         >> 0x19U)) 
                                 | (0x20U == (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                              >> 0x19U)))) 
                             | (IData)(((0x30U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & ((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                           | (0x105U 
                                              == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
    bufp->fullBit(oldp+233,(((IData)(((0x10U == (0x7cU 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                      & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_9))) 
                             | (IData)(((0x30U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & ((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                           | (6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
    bufp->fullBit(oldp+234,(((IData)(((0x10U == (0x7cU 
                                                 & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                      & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT____VdfgRegularize_h662e6b9b_0_16))) 
                             | (IData)(((0x30U == (0x7cU 
                                                   & vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir)) 
                                        & ((6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10)) 
                                           | (7U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__decoder__DOT__f10))))))));
    bufp->fullBit(oldp+235,(((0xdU == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U))) 
                             | (5U == (0x1fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 2U))))));
    bufp->fullCData(oldp+236,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__state),2);
    bufp->fullBit(oldp+237,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_dividend_neg));
    bufp->fullBit(oldp+238,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg));
    bufp->fullIData(oldp+239,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__remainder),32);
    bufp->fullIData(oldp+240,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor),32);
    bufp->fullIData(oldp+241,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__quotient),32);
    bufp->fullBit(oldp+242,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_div_rslt_neg));
    bufp->fullBit(oldp+243,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem_rslt_neg));
    bufp->fullBit(oldp+244,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_rem));
    bufp->fullCData(oldp+245,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__cntr),5);
    bufp->fullIData(oldp+246,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__uintx_remainder),32);
    bufp->fullIData(oldp+247,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__is_divisor_neg)
                                ? ((IData)(1U) + (~ vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor))
                                : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__divisor)),32);
    bufp->fullQData(oldp+248,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference),33);
    bufp->fullBit(oldp+250,((1U & (~ (IData)((vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__difference 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+251,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl))));
    bufp->fullBit(oldp+252,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_div_ctrl) 
                                   >> 1U))));
    bufp->fullCData(oldp+253,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_state),2);
    bufp->fullBit(oldp+254,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__divider__DOT__w_init));
    bufp->fullBit(oldp+255,((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
    bufp->fullBit(oldp+256,((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
    bufp->fullBit(oldp+257,((6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
    bufp->fullBit(oldp+258,((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
    bufp->fullBit(oldp+259,((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))));
    bufp->fullBit(oldp+260,((1U & ((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                    ? (1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                             >> 0x14U))
                                    : ((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                        ? (1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 7U))
                                        : 0U)))));
    bufp->fullCData(oldp+261,((0xfU & (((2U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                        | (6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                        ? (0xfU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0x15U))
                                        : (((3U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                            | (4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                            ? (0xfU 
                                               & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                  >> 8U))
                                            : 0U)))),4);
    bufp->fullCData(oldp+262,(((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2)
                                ? (0x3fU & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                            >> 0x19U))
                                : 0U)),6);
    bufp->fullBit(oldp+263,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_0)
                                    ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir, 0x1fU)
                                    : ((4U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                        ? (1U & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                 >> 7U))
                                        : ((6U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                            ? (1U & 
                                               (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                >> 0x14U))
                                            : 0U))))));
    bufp->fullCData(oldp+264,((0xffU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_1)
                                         ? (0xffU & 
                                            (- (IData)(
                                                       (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                        >> 0x1fU))))
                                         : (((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)) 
                                             | (6U 
                                                == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type)))
                                             ? (0xffU 
                                                & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                   >> 0xcU))
                                             : 0U)))),8);
    bufp->fullSData(oldp+265,((0x7ffU & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__imm_gen__DOT____VdfgRegularize_hf91b520b_0_2)
                                          ? (0x7ffU 
                                             & (- (IData)(
                                                          (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                           >> 0x1fU))))
                                          : ((5U == (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_instr_type))
                                              ? (0x7ffU 
                                                 & (vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IfId_ir 
                                                    >> 0x14U))
                                              : 0U)))),11);
    bufp->fullBit(oldp+266,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                   >> 3U))));
    bufp->fullBit(oldp+267,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                   >> 4U))));
    bufp->fullBit(oldp+268,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                   >> 5U))));
    bufp->fullBit(oldp+269,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+270,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))));
    bufp->fullBit(oldp+271,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT__w_lb_sign));
    bufp->fullBit(oldp+272,((1U & (IData)(((0x14U == 
                                            (0x14U 
                                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))) 
                                           & ((2U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_dbus_offset))
                                               ? (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                  >> 0x1fU)
                                               : (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                  >> 0xfU)))))));
    bufp->fullCData(oldp+273,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                ? (0xffU & (((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_7) 
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
                                : 0U)),8);
    bufp->fullCData(oldp+274,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
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
    bufp->fullCData(oldp+275,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                ? (0xffU & ((0x20U 
                                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                             ? (0xffU 
                                                & (vlSelfRef.top__DOT__m0__DOT__dbus_rdata 
                                                   >> 0x10U))
                                             : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                : 0U)),8);
    bufp->fullCData(oldp+276,(((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                ? (0xffU & ((0x20U 
                                             & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__ExMa_lsu_ctrl))
                                             ? VL_SHIFTR_III(32,32,32, vlSelfRef.top__DOT__m0__DOT__dbus_rdata, 0x18U)
                                             : vlSelfRef.top__DOT__m0__DOT__cpu__DOT__load_unit__DOT____VdfgRegularize_h31b42e81_0_9))
                                : 0U)),8);
    bufp->fullCData(oldp+277,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__state),2);
    bufp->fullQData(oldp+278,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplicand),33);
    bufp->fullQData(oldp+280,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__r_multiplier),33);
    bufp->fullQData(oldp+282,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__product),64);
    bufp->fullBit(oldp+284,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__is_high));
    bufp->fullBit(oldp+285,((1U & (IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl))));
    bufp->fullBit(oldp+286,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+287,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+288,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_mul_ctrl) 
                                   >> 3U))));
    bufp->fullCData(oldp+289,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__multiplier__DOT__w_state),2);
    bufp->fullCData(oldp+290,((0x1fU & (vlSelfRef.top__DOT__m0__DOT__imem__DOT__rdata 
                                        >> 2U))),5);
    bufp->fullBit(oldp+291,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                   >> 3U))));
    bufp->fullBit(oldp+292,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                   >> 4U))));
    bufp->fullBit(oldp+293,((1U & ((IData)(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__IdEx_lsu_ctrl) 
                                   >> 5U))));
    bufp->fullIData(oldp+294,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[0]),32);
    bufp->fullIData(oldp+295,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[1]),32);
    bufp->fullIData(oldp+296,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[2]),32);
    bufp->fullIData(oldp+297,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[3]),32);
    bufp->fullIData(oldp+298,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[4]),32);
    bufp->fullIData(oldp+299,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[5]),32);
    bufp->fullIData(oldp+300,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[6]),32);
    bufp->fullIData(oldp+301,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[7]),32);
    bufp->fullIData(oldp+302,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[8]),32);
    bufp->fullIData(oldp+303,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[9]),32);
    bufp->fullIData(oldp+304,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[10]),32);
    bufp->fullIData(oldp+305,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[11]),32);
    bufp->fullIData(oldp+306,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[12]),32);
    bufp->fullIData(oldp+307,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[13]),32);
    bufp->fullIData(oldp+308,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[14]),32);
    bufp->fullIData(oldp+309,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[15]),32);
    bufp->fullIData(oldp+310,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[16]),32);
    bufp->fullIData(oldp+311,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[17]),32);
    bufp->fullIData(oldp+312,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[18]),32);
    bufp->fullIData(oldp+313,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[19]),32);
    bufp->fullIData(oldp+314,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[20]),32);
    bufp->fullIData(oldp+315,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[21]),32);
    bufp->fullIData(oldp+316,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[22]),32);
    bufp->fullIData(oldp+317,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[23]),32);
    bufp->fullIData(oldp+318,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[24]),32);
    bufp->fullIData(oldp+319,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[25]),32);
    bufp->fullIData(oldp+320,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[26]),32);
    bufp->fullIData(oldp+321,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[27]),32);
    bufp->fullIData(oldp+322,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[28]),32);
    bufp->fullIData(oldp+323,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[29]),32);
    bufp->fullIData(oldp+324,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[30]),32);
    bufp->fullIData(oldp+325,(vlSelfRef.top__DOT__m0__DOT__cpu__DOT__xreg__DOT__ram[31]),32);
    bufp->fullSData(oldp+326,(vlSelfRef.top__DOT__m0__DOT__dmem__DOT__valid_addr),12);
    bufp->fullSData(oldp+327,((0x1fffU & (vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 
                                          >> 2U))),13);
    bufp->fullQData(oldp+328,(vlSelfRef.top__DOT__m0__DOT__perf__DOT__mcycle),64);
    bufp->fullCData(oldp+330,(vlSelfRef.top__DOT__m0__DOT__perf__DOT__cnt_ctrl),2);
    bufp->fullIData(oldp+331,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_cnt),32);
    bufp->fullBit(oldp+332,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__busy));
    bufp->fullBit(oldp+333,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_en));
    bufp->fullBit(oldp+334,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__init_done));
    bufp->fullCData(oldp+335,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state),5);
    bufp->fullIData(oldp+336,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_state2),20);
    bufp->fullSData(oldp+337,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_dat),9);
    bufp->fullIData(oldp+338,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_bcnt),32);
    bufp->fullCData(oldp+339,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x),8);
    bufp->fullCData(oldp+340,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y),8);
    bufp->fullCData(oldp+341,((0xffU & ((IData)(0xefU) 
                                        - (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_x)))),8);
    bufp->fullCData(oldp+342,((0xffU & ((IData)(0xefU) 
                                        - (IData)(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_y)))),8);
    bufp->fullSData(oldp+343,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_color),16);
    bufp->fullSData(oldp+344,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__r_init),9);
    bufp->fullSData(oldp+345,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__w_data),9);
    bufp->fullCData(oldp+346,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_state),6);
    bufp->fullCData(oldp+347,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_cnt),8);
    bufp->fullCData(oldp+348,(vlSelfRef.top__DOT__m0__DOT__st7789_disp__DOT__spi0__DOT__r_data),8);
    bufp->fullBit(oldp+349,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__we));
    bufp->fullBit(oldp+350,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__top));
    bufp->fullCData(oldp+351,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__wdata),3);
    bufp->fullSData(oldp+352,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__waddr),15);
    bufp->fullBit(oldp+353,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rtop));
    bufp->fullSData(oldp+354,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__raddr),15);
    bufp->fullCData(oldp+355,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_lo),3);
    bufp->fullCData(oldp+356,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__rdata_hi),3);
    bufp->fullBit(oldp+357,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__sel));
    bufp->fullSData(oldp+358,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_adr_p),16);
    bufp->fullSData(oldp+359,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__r_dat_p),16);
    bufp->fullSData(oldp+360,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__data),16);
    bufp->fullBit(oldp+361,(vlSelfRef.top__DOT__clk));
    bufp->fullBit(oldp+362,(vlSelfRef.top__DOT__rst_n));
    bufp->fullBit(oldp+363,(vlSelfRef.top__DOT__m0__DOT__rst_ni));
    bufp->fullBit(oldp+364,((1U & (~ (IData)(vlSelfRef.top__DOT__m0__DOT__rst_ni)))));
    bufp->fullIData(oldp+365,(vlSelfRef.top__DOT__m0__DOT__vmem__DOT__i),32);
}
