// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__clk__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst__0 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(""s);
    VL_PRINTF_MT("-Info: /home/talha/RISCV_Benchmarking_framework/rtl/riscv_tb.sv:25: $dumpvar ignored, as Verilated without --trace\n");
    VL_READMEM_N(true, 32, 65536, 0, "code.mem"s,  &(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][0U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][1U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][2U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][3U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i 
            = ((IData)(1U) + vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i);
    }
    VL_READMEM_N(true, 32, 65536, 0, "data.mem"s,  &(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_en = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_addr = 0xffffU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_data = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__stall = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_flush = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_en = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(""s);
    VL_PRINTF_MT("-Info: /home/talha/RISCV_Benchmarking_framework/rtl/riscv_tb.sv:25: $dumpvar ignored, as Verilated without --trace\n");
    VL_READMEM_N(true, 32, 65536, 0, "code.mem"s,  &(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][0U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][1U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][2U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[(7U 
                                                                                & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i)][3U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i 
            = ((IData)(1U) + vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i);
    }
    VL_READMEM_N(true, 32, 65536, 0, "data.mem"s,  &(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_en = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_addr = 0xffffU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_data = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__stall = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_flush = 0U;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_en = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/talha/RISCV_Benchmarking_framework/rtl/riscv_tb.sv", 2, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hce92076c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_he4614b46_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_hf4445326_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h8a450b34_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h4b48be47_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtop__ConstPool__TABLE_h3cdac1a4_0;
extern const VlUnpacked<CData/*1:0*/, 8> Vtop__ConstPool__TABLE_h88b725b4_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0;
    riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0 = 0;
    CData/*0:0*/ riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT____VdfgRegularize_h04dad4bb_0_0;
    riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT____VdfgRegularize_h04dad4bb_0_0 = 0;
    CData/*0:0*/ riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT____VdfgRegularize_hd65a24b1_0_0;
    riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT____VdfgRegularize_hd65a24b1_0_0 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    vlSelfRef.riscv_tb__DOT__led = vlSelfRef.riscv_tb__DOT__uut__DOT__led;
    vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_op2_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__rst = vlSelfRef.riscv_tb__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__clk = vlSelfRef.riscv_tb__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_load = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_taken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_file_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_func7 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_flush = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_alu_src = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op2 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_immediate;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op1 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_func3 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_forward_pipeline_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_forward_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_rs2 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_load = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_calculated_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_timer 
        = (0xffffff00U == vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay);
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__timer_val 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_rs1 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_opcode = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_taken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_op2_selected;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_load_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_rd 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predictedTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pred_taken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func7 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__id_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_immediate;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func3 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pipeline_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_forward_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_rs2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_mem 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_mem 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__alu_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_calculated_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_wb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__final_read_data 
        = ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay))
            ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay))
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data
                : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay))
                    ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                        ? VL_SHIFTR_III(32,32,32, vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data, 0x00000010U)
                        : (0x0000ffffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data))
                    : ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                        ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                            ? VL_SHIFTR_III(32,32,32, vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data, 0x00000018U)
                            : (0x000000ffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                              >> 0x00000010U)))
                        : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                            ? (0x000000ffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                              >> 8U))
                            : (0x000000ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data)))))
            : ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay))
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data
                : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay))
                    ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                        ? (((- (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                        >> 0x0000001fU))) 
                            << 0x00000010U) | (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                               >> 0x00000010U))
                        : (((- (IData)((1U & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                              >> 0x0000000fU)))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data)))
                    : ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                        ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                            ? (((- (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                            >> 0x0000001fU))) 
                                << 8U) | (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                          >> 0x00000018U))
                            : (((- (IData)((1U & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                  >> 0x00000017U)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                             >> 0x00000010U))))
                        : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                            ? (((- (IData)((1U & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                  >> 0x0000000fU)))) 
                                << 8U) | (0x000000ffU 
                                          & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                             >> 8U)))
                            : (((- (IData)((1U & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                  >> 7U)))) 
                                << 8U) | (0x000000ffU 
                                          & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data)))))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_rd 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartData 
        = (0x000000ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__clk 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predictedTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predictedTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func7 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc);
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__calculated_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartWen 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_write) 
           & (0xffff0000U == vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result));
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__addr 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result 
           - (IData)(0x10000000U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset 
        = (3U & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result);
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_data 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_timer)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__timer_val
            : vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__final_read_data);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_tag 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc 
           >> 5U);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index 
        = (7U & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc 
                 >> 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem 
        = ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_mem));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_addr;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb 
        = ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_wb));
    vlSelfRef.riscv_tb__DOT__uut__DOT__alu_wb = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartData;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sra 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func7) 
                 >> 5U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_tag 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
           >> 5U);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index 
        = (7U & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
                 >> 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__beq 
        = (0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bne 
        = (1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__blt 
        = (4U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bge 
        = (5U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bltu 
        = (6U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bgeu 
        = (7U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_rd 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pipeline_flush)
            ? 0U : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_rd));
    vlSelfRef.riscv_tb__DOT__uut__DOT__alu_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_calculated_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__calculated_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__wEn 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartWen;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmemWenFinal 
        = ((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartWen)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_write));
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_addr 
        = (0x0003ffffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__addr);
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_addr 
        = (0x0003ffffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__addr);
    if ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type))) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__write_byte_strobe 
            = (0x0000000fU & ((IData)(1U) << (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset)));
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_data_shifted 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data, 
                            VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset), 3U));
    } else if ((1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type))) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__write_byte_strobe 
            = (0x0000000fU & ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset))
                               ? 0x0cU : 3U));
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_data_shifted 
            = VL_SHIFTL_III(32,32,32, vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data, 
                            VL_SHIFTL_III(32,32,32, 
                                          (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset) 
                                                 >> 1U)), 4U));
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__write_byte_strobe 
            = (0x0000000fU & ((2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type))
                               ? 0x0fU : 0U));
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_data_shifted 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc_inc 
        = ((IData)(4U) + vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_tag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sub 
        = (1U & (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func7) 
                  & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode)) 
                 >> 5U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_inst 
        = (0x63U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jalr_inst 
        = (0x67U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_mem 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_mem 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_wb 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_wb 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb));
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__alu_wb;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_tag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_rd 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__alu_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_calculated_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_calculated_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmemWenFinal;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr 
        = (0x0000ffffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_addr 
                          >> 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_read_addr 
        = (0x0000ffffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_addr 
                          >> 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__write_byte_strobe;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_data_shifted;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__LRU) 
                 >> (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_index)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
        [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index][0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
        [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index][1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
        [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index][2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
        [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index][3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__ALUControl 
        = (((0x33U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode)) 
            | (0x13U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode)))
            ? ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                    ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                        ? 2U : 3U) : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                                       ? ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sra)
                                           ? 7U : 6U)
                                       : 4U)) : ((2U 
                                                  & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                                                   ? 9U
                                                   : 8U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sub)
                                                    ? 1U
                                                    : 0U))))
            : ((0x63U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode))
                ? ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                    ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3))
                        ? 9U : 8U) : 1U) : 0U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_inst 
        = ((0x6fU == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode)) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jalr_inst));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_b_cntl 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_mem)
            ? 1U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_wb)
                     ? 2U : 0U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_a_cntl 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_mem)
            ? 1U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_wb)
                     ? 2U : 0U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_LRU_read 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__LRU) 
                 >> (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_index)));
    if ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index) 
          == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_index)) 
         & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_en))) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[0U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[0U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[1U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[1U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[2U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[2U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[3U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[3U];
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[0U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
            [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index][0U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[1U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
            [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index][1U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[2U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
            [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index][2U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[3U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file
            [vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index][3U];
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction_in 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ALUControl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__ALUControl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_btb 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_inst) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_inst));
    vlSelfRef.riscv_tb__DOT__uut__DOT__operand_b_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_b_cntl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__operand_a_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_a_cntl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__id_flush)
            ? 0x00000013U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction_in);
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ALUControl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__update_btb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_btb;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_b_forward_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__operand_b_cntl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_a_forward_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__operand_a_cntl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rd 
        = (0x0000001fU & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                          >> 7U));
    riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0 
        = (((- (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
              >> 0x00000014U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func3 
        = (7U & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                 >> 0x0000000cU));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func7 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
           >> 0x00000019U);
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs1 
        = (0x0000001fU & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                          >> 0x0000000fU));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs2 
        = (0x0000001fU & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                          >> 0x00000014U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode 
        = (0x0000007fU & vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction);
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch1 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[2U])));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch2 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[0U])));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_update = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__update_btb;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch1 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[2U])));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch2 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[0U])));
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_func3 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func3 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_func7 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func7 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs1_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_rs1 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs2_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_rs2 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs2;
    __VdfgRegularize_h6e95ff9d_0_0 = ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                       ? riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0
                                       : ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction)
                                                   : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
                                               : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
                                           : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0));
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_opcode = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_result 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_load)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__mem_read_data
            : vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__alu_result);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target1 
        = (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch1 
                   >> 4U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state1 
        = (3U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch1 
                         >> 2U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid1 
        = (1U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch1 
                         >> 0x0000003fU)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag1 
        = (0x07ffffffU & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch1 
                                  >> 0x00000024U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target2 
        = (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch2 
                   >> 4U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state2 
        = (3U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch2 
                         >> 2U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid2 
        = (1U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch2 
                         >> 0x0000003fU)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag2 
        = (0x07ffffffU & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch2 
                                  >> 0x00000024U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_update;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target1 
        = (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch1 
                   >> 4U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__state1 
        = (3U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch1 
                         >> 2U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid1 
        = (1U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch1 
                         >> 0x0000003fU)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag1 
        = (0x07ffffffU & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch1 
                                  >> 0x00000024U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target2 
        = (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch2 
                   >> 4U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__state2 
        = (3U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch2 
                         >> 2U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid2 
        = (1U & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch2 
                         >> 0x0000003fU)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag2 
        = (0x07ffffffU & (IData)((vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch2 
                                  >> 0x00000024U)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_rd 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_func3 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_func7 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_rs1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_rs2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_rs2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_rs2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__immediate 
        = ((0x00000040U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
            ? ((0x00000020U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                ? ((0x00000010U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                    ? riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0
                    : ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                        ? ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                            ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                    ? ((((0x00000ffeU 
                                          & ((- (IData)(
                                                        (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                         >> 0x0000001fU))) 
                                             << 1U)) 
                                         | (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                            >> 0x0000001fU)) 
                                        << 0x00000014U) 
                                       | ((((0x000001feU 
                                             & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                >> 0x00000014U))) 
                                           << 0x0000000bU) 
                                          | (0x000007feU 
                                             & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                >> 0x00000014U))))
                                    : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
                                : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
                            : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
                        : ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                            ? riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0
                            : ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000dU) 
                                       | ((((2U & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                   >> 7U)))))
                                    : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
                                : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0))))
                : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
            : ((0x00000020U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                ? ((0x00000010U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                    ? __VdfgRegularize_h6e95ff9d_0_0
                    : ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                        ? riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0
                        : ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                            ? riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0
                            : ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                                    ? (((- (IData)(
                                                   (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                    >> 0x0000001fU))) 
                                        << 0x0000000cU) 
                                       | ((0x00000fe0U 
                                           & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                              >> 0x00000014U)) 
                                          | (0x0000001fU 
                                             & (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
                                                >> 7U))))
                                    : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)
                                : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0))))
                : ((0x00000010U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode))
                    ? __VdfgRegularize_h6e95ff9d_0_0
                    : riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__b_type_inst 
        = (0x63U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__j_type_inst 
        = (0x6fU == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_inst 
        = (0x33U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__u_type_inst 
        = (0x37U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__aupic_inst 
        = (0x17U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__jalr_inst 
        = (0x67U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__i_type_inst 
        = (0x13U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_write 
        = (0x23U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_load 
        = (3U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result = vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid1) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag1 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid2) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag2 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid1) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag1));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid2) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag2));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__immediate;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2_used 
        = ((0x33U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode)) 
           | ((0x23U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode)) 
              | (0x63U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__m_type_inst 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_inst) 
           & (1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func7)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__r_type_inst 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_inst) 
           & ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func7)) 
              | (0x20U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func7))));
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_write) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_write = 1U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_store_type = 3U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_store_type 
            = ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func3))
                ? 0U : ((1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func3))
                         ? 1U : ((2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func3))
                                  ? 2U : 3U)));
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_write = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_store_type = 3U;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_load;
    riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT____VdfgRegularize_h04dad4bb_0_0 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__i_type_inst) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_load));
    vlSelfRef.riscv_tb__DOT__wb_result = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_wb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__entry_exists 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2));
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch1) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_state 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__state1;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_state 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2)
                ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__state2)
                : 0U);
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch1) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2));
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_immediate;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs2_hazard 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2_used) 
           & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd) 
              == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1_used 
        = ((0x13U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode)) 
           | ((3U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode)) 
              | ((0x67U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode)) 
                 | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2_used))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__m_type_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__m_type_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_load = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_reg_file 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_inst) 
           | ((IData)(riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT____VdfgRegularize_h04dad4bb_0_0) 
              | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__aupic_inst) 
                 | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__u_type_inst) 
                    | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__j_type_inst) 
                       | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__jalr_inst))))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__ex_alu_src 
        = ((IData)(riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT____VdfgRegularize_h04dad4bb_0_0) 
           | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_write) 
              | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__u_type_inst) 
                 | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__aupic_inst) 
                    | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__jalr_inst)))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded 
        = ((1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_b_forward_cntl))
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_mem
            : ((2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_b_forward_cntl))
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_wb
                : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded 
        = ((1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_a_forward_cntl))
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_mem
            : ((2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_a_forward_cntl))
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_wb
                : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1));
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__entry_exists) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2 
            = (1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch1 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch2 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2 
            = (1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write)));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__predictedTaken 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_state) 
                 >> 1U));
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid = 1U;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_LRU_read;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid = 0U;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs1_hazard 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1_used) 
           & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd) 
              == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__m_type_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__m_type_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__alu_src 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__ex_alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__invalid_inst 
        = (1U & (~ ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__ex_alu_src) 
                    | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__r_type_inst) 
                       | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__b_type_inst) 
                          | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__j_type_inst))))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1_forwarded 
        = ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs1_addr) 
             == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr)) 
            & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en))
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data
            : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file
           [vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs1_addr]);
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2_forwarded 
        = ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs2_addr) 
             == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr)) 
            & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en))
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data
            : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file
           [vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs2_addr]);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded;
    if ((0x00000040U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
        if ((0x00000020U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                    = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                        ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                        : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
            } else if ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu = 4U;
                            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                                = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc;
                        } else {
                            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                                = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                                    ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                                    : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                                = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                        }
                    } else {
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                                ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                                : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                    }
                } else {
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                            ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                            : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                }
            } else if ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu = 4U;
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc;
                    } else {
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                                ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                                : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                    }
                } else {
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                            ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                            : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                }
            } else {
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                    = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                        ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                        : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
            }
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                    ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                    : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
        if ((0x00000010U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                    = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                        ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                        : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
            } else if ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate;
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu = 0U;
                    } else {
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                                ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                                : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                    }
                } else {
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                            ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                            : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                }
            } else {
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                    = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                        ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                        : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
            }
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                    ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                    : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                    ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                    : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
        } else if ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode))) {
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate;
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc;
                } else {
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                            ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                            : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
                }
            } else {
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                    = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                        ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                        : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
                vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
            }
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
                = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                    ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                    : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
            vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
        }
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate
                : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded);
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
    }
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pipeline_flush) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_valid = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_valid = 0U;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__current_state 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__current_state 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid1));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid2));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__predictedTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__predictedTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_read 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_hazard 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_load_inst) 
           & ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd)) 
              & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs1_hazard) 
                 | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs2_hazard))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_alu_src = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1 
        = ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs1_addr))
            ? 0U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1_forwarded);
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2 
        = ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs2_addr))
            ? 0U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2_forwarded);
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op2_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_selected;
    vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_op1 = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_selected;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_predictTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__predictedTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_read 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_read;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_alu_src 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_op2_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op2_selected;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__input_a 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jalr_inst)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__op1
            : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__adder_out 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__immediate 
           + vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__input_a);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_addr 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jalr_inst)
            ? (0xfffffffeU & vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__adder_out)
            : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__adder_out);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_predictTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_predictTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_predictTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_op1 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_op2 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__lt_flag 
        = VL_LTS_III(32, vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1, vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ltu_flag 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
           < vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__read_mask 
        = (0x000000ffU & ((IData)(1U) << (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__index)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__write_mask 
        = (0x000000ffU & ((IData)(1U) << (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_index)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_mask 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__read_mask) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__write_mask));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_bits 
        = ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_read) 
             & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__valid))
             ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__read_mask)
             : 0U) | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_write) 
                       & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update))
                       ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__write_mask)
                       : 0U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__next_LRU 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__LRU) 
            & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_mask))) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_bits));
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_predictTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_predictTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__calc_jump_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_addr;
    riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT____VdfgRegularize_hd65a24b1_0_0 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_addr 
           != vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predicted_pc);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__lt_flag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__lt_flag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ltu_flag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ltu_flag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__result 
        = ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
            ? ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                ? 0U : ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                         ? 0U : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                                  ? ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ltu_flag)
                                      ? 1U : 0U) : 
                                 ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__lt_flag)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
             ? ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                 ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                     ? VL_SHIFTRS_III(32,32,5, vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1, 
                                      (0x0000001fU 
                                       & vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2))
                     : (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
                        >> (0x0000001fU & vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2)))
                 : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                     ? (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
                        << (0x0000001fU & vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2))
                     : (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
                        ^ vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2)))
             : ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                 ? ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                     ? (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
                        | vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2)
                     : (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
                        & vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2))
                 : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl))
                     ? (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
                        - vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2)
                     : (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
                        + vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2)))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__next_LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_update_target 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__calc_jump_addr;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_mispredicted 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_inst) 
           & ((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predictedTaken)) 
              | (IData)(riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT____VdfgRegularize_hd65a24b1_0_0)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__lt_flag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__lt_flag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__ltu_flag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ltu_flag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__zero_flag 
        = (0U == vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__result);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU_updated 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_target 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_update_target;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__zero_flag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__zero_flag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_target;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_result = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__zero_flag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__zero_flag;
    vlSelfRef.riscv_tb__DOT__ex_result = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_taken 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__beq) 
            & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__zero_flag)) 
           | (((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__zero_flag)) 
               & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bne)) 
              | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__blt) 
                  & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__lt_flag)) 
                 | (((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__lt_flag)) 
                     & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bge)) 
                    | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bltu) 
                        & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__ltu_flag)) 
                       | ((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__ltu_flag)) 
                          & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bgeu)))))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_mispredicted 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_inst) 
           & (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_taken) 
               ^ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predictedTaken)) 
              | (IData)(riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT____VdfgRegularize_hd65a24b1_0_0)));
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pred_valid) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_pc 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_inst)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_addr
                : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_taken)
                    ? vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_addr
                    : vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc_inc));
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__modify_pc 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_mispredicted) 
               | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_mispredicted));
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_addr;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__modify_pc 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_inst) 
               | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_inst) 
                  & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_taken)));
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_if_pc_jump_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_addr;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__jump_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__modify_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_jump_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_if_pc_jump_addr;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_if_jump_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__jump_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_jump_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_jump_addr;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__jump_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_if_jump_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__mispredicted 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_if_jump_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__jump_branch_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_if_jump_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__jump_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__jump_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__mispredicted 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__mispredicted;
    __Vtableidx3 = ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__invalid_inst) 
                      << 3U) | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__stall) 
                                << 2U)) | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_hazard) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__jump_branch_taken)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_flush 
        = Vtop__ConstPool__TABLE_hce92076c_0[__Vtableidx3];
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_en 
        = Vtop__ConstPool__TABLE_he4614b46_0[__Vtableidx3];
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_flush 
        = Vtop__ConstPool__TABLE_hf4445326_0[__Vtableidx3];
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_en 
        = Vtop__ConstPool__TABLE_h8a450b34_0[__Vtableidx3];
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__pc_en 
        = Vtop__ConstPool__TABLE_he4614b46_0[__Vtableidx3];
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_stall 
        = Vtop__ConstPool__TABLE_h4b48be47_0[__Vtableidx3];
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_mem_pipeline_en 
        = Vtop__ConstPool__TABLE_h3cdac1a4_0[__Vtableidx3];
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__jump_en) 
            << 1U) | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_predictTaken) 
                      & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_valid)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__mispredicted 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__mispredicted;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__mispredicted 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__mispredicted;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_mem_pipeline_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__load_stall = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_stall;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__pc_en = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__pc_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__next_pc 
        = (((3U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection)) 
            | (2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection)))
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_jump_addr
            : ((1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection))
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_target_pc
                : vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_plus_4));
    __Vtableidx1 = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__mispredicted) 
                     << 2U) | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__current_state));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__next_state 
        = Vtop__ConstPool__TABLE_h88b725b4_0[__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__mispredicted) 
                     << 2U) | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__current_state));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__next_state 
        = Vtop__ConstPool__TABLE_h88b725b4_0[__Vtableidx2];
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__pipeline_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__pipeline_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_invalid_inst 
        = ((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__load_stall)) 
           & ((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__ex_if_jump_en)) 
              & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__invalid_inst)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__pc_en = vlSelfRef.riscv_tb__DOT__uut__DOT__pc_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__pc_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__next_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__next_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__next_state;
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch1;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state1;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__next_state;
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch2;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state2;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__read_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__next_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__next_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2) 
                                      << 0x0000001bU) 
                                     | vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2))) 
                    << 0x00000024U) | (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2)) 
                                        << 4U) | (QData)((IData)(
                                                                 ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2) 
                                                                  << 2U))))));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2) 
                                       << 0x0000001bU) 
                                      | vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2))) 
                     << 0x00000024U) | (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2)) 
                                         << 4U) | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2) 
                                                                   << 2U))))) 
                   >> 0x00000020U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[2U] 
        = (0xfffffffcU & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[2U]);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[2U] 
        = ((3U & vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[2U]) 
           | ((IData)((((QData)((IData)((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid1) 
                                          << 0x0000001bU) 
                                         | vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1))) 
                        << 0x00000022U) | (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1)) 
                                            << 2U) 
                                           | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1))))) 
              << 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[3U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid1) 
                                        << 0x0000001bU) 
                                       | vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1))) 
                      << 0x00000022U) | (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1)) 
                                          << 2U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1))))) 
            >> 0x0000001eU) | ((IData)(((((QData)((IData)(
                                                          (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid1) 
                                                            << 0x0000001bU) 
                                                           | vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1))) 
                                          << 0x00000022U) 
                                         | (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1)) 
                                             << 2U) 
                                            | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1)))) 
                                        >> 0x00000020U)) 
                               << 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[3U];
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge riscv_tb.uut.fetch_stage_inst.pc_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge riscv_tb.uut.fetch_stage_inst.pc_inst.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge riscv_tb.uut.fetch_stage_inst.instruction_mem_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge riscv_tb.uut.btb_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge riscv_tb.uut.btb_inst.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge riscv_tb.uut.btb_inst.lru_reg_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge riscv_tb.uut.btb_inst.lru_reg_inst.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge riscv_tb.uut.btb_inst.btb_file_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge riscv_tb.uut.if_id_pipeline_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge riscv_tb.uut.if_id_pipeline_inst.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge riscv_tb.uut.decode_stage_inst.register_file_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(posedge riscv_tb.uut.id_ex_pipeline_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge riscv_tb.uut.id_ex_pipeline_inst.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(posedge riscv_tb.uut.ex_mem_pipeline_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge riscv_tb.uut.ex_mem_pipeline_inst.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(posedge riscv_tb.uut.mem_stage_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge riscv_tb.uut.mem_stage_inst.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(posedge riscv_tb.uut.mem_stage_inst.dmem.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @(posedge riscv_tb.uut.mem_stage_inst.uartsim.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @(posedge riscv_tb.uut.mem_stage_inst.Simtime.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @(posedge riscv_tb.uut.mem_wb_pipeline_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @(posedge riscv_tb.uut.mem_wb_pipeline_inst.rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->riscv_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5753855701094947911ull);
    vlSelf->riscv_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14266460001043108647ull);
    vlSelf->riscv_tb__DOT__led = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16166947584200589391ull);
    vlSelf->riscv_tb__DOT__pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4962885433168158948ull);
    vlSelf->riscv_tb__DOT__wb_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12731412833596655099ull);
    vlSelf->riscv_tb__DOT__ex_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3737960466854174569ull);
    vlSelf->riscv_tb__DOT__uut__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5339631736317184679ull);
    vlSelf->riscv_tb__DOT__uut__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13715731780146784648ull);
    vlSelf->riscv_tb__DOT__uut__DOT__wb_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6576837481141839026ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2282265971431281353ull);
    vlSelf->riscv_tb__DOT__uut__DOT__pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13610458316685692171ull);
    vlSelf->riscv_tb__DOT__uut__DOT__led = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1512205531358408358ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_if_pc_jump_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6836487680810315699ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12935127960417925536ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_target_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14635148887698102945ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_pc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16633819304317428309ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_pc_predictTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7824385280666661391ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 333091929191982731ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_update_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2923383722558452863ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13861989214309596246ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5286450665051302154ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17326355681933673310ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4283641213213353305ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11296313731032287264ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15913950959685590732ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12785090466476804269ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1871889922593211847ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14953889555635270698ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8421490682040449137ull);
    vlSelf->riscv_tb__DOT__uut__DOT__invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17773736211436833455ull);
    vlSelf->riscv_tb__DOT__uut__DOT__load_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10118029561586751315ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7990005034695382267ull);
    vlSelf->riscv_tb__DOT__uut__DOT__stall_axi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8732523009932666412ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_if_jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11132679510758019005ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3242787432784109969ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7248669567963316601ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6140538338978963747ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7684703137247088212ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12156827496034175840ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6254039166470893430ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8053681354805708123ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17413888565766524282ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2400938743403811122ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 723060766643292606ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1557045261880302622ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4596608472561560993ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8617813121344170549ull);
    vlSelf->riscv_tb__DOT__uut__DOT__m_unit_dest = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9745769184614473876ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2097998954604053058ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15229593148948136917ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14337540438268165275ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5672380253213446516ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13630172704181576668ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17288824618254641333ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15280304079864552722ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8851451002234727675ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13390546056091531457ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8071777337603390211ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3983265256292710883ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2369524937582948989ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7530914485814140398ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11050391151102762104ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4652815060380090475ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8426517590130098154ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6059350054001167203ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8176404764246067832ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12882919232520658293ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3492621488673436647ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9573949841681837068ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1285523490620313689ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10397734193687340006ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_mem_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9628998144124030663ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10766172720085582148ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_mem_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9888259175925860223ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10807843858971686262ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13920929223566487272ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14830150199829373986ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8075519870106041010ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1692788735841452337ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2597241513741773522ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14904922310457670137ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_forward_pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14921833621197272600ull);
    vlSelf->riscv_tb__DOT__uut__DOT__operand_a_cntl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8738281185290619520ull);
    vlSelf->riscv_tb__DOT__uut__DOT__operand_b_cntl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8374687257288323532ull);
    vlSelf->riscv_tb__DOT__uut__DOT__alu_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11173974969793679675ull);
    vlSelf->riscv_tb__DOT__uut__DOT__alu_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11571152051725133231ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2481816028118533616ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_op2_selected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10862455559750430978ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_op2_selected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16810393344203806429ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11063803287250662114ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_memory_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8447423829898108365ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_memory_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3600285800404923712ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_memory_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7492460704719423564ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_memory_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2382730208405823433ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3887113621120860701ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1621152547588474484ull);
    vlSelf->riscv_tb__DOT__uut__DOT__valid_addr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4871348217071680223ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17925600534322031641ull);
    vlSelf->riscv_tb__DOT__uut__DOT__wb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16585119349494607520ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_calculated_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18396730046369163572ull);
    vlSelf->riscv_tb__DOT__uut__DOT__wb_calculated_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 615053196296795010ull);
    vlSelf->riscv_tb__DOT__uut__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3535222304603645608ull);
    vlSelf->riscv_tb__DOT__uut__DOT__wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7211764008055511637ull);
    vlSelf->riscv_tb__DOT__uut__DOT__wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11472544433191521576ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8150408596236057664ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15978932300051343273ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5349423846882259623ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8833000038105998218ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_jump_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1685898644806974747ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6110962626603212292ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_target_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8745164515943361311ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5243498285234880000ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_predictTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12895956284571655221ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16965418006923920228ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17600206104217584260ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6395526637391286721ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5279514242728730703ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6158984538194024400ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 715403358856116824ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9104339095428920513ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13014299259342873499ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17840021950930128846ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_jump_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9257820201117754244ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_target_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9033972657109166232ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13206176204340481688ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_predictTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7484721028597967971ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17981993345179533483ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__next_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14064743491317180398ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10493372765502304699ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_plus_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13938491943409605186ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13080671150008465113ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16290546702695608953ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7641943039438889113ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13052110516751662191ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8631663847404145464ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16570602464836204161ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9803909088186292602ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16051488099670032718ull);
    vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14673997548039152876ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8030370159816807561ull);
    }
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6496474596263669930ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9198509615097983519ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11059815863562704196ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11651047633623667462ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16083227255381087877ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2542136153546031608ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8725514590610987583ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__target_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6613370217042753028ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15182512127680748314ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__predictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 643536403278482609ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7258704778249006026ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_tag = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 10356637087734772844ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set, __VscopeHash, 17542265312974725876ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8976204719774293122ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_tag = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 9900866262285624458ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set, __VscopeHash, 6739609184621231330ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set, __VscopeHash, 11081503144406784218ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8332852295239772729ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13017932324518082549ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4951878523226888185ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13497070704684116880ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_file_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3688926092429609216ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set, __VscopeHash, 10618111000281467876ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4254956431931465170ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7830399244350599136ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16565114956313406506ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU_updated = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11396390768114195003ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7205730757827459700ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8714504036988608150ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12290759685160912478ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11771092916459781065ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5387931629504758115ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set, __VscopeHash, 5556812520407279258ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 759950328449537449ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set, __VscopeHash, 13133883307692277436ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set, __VscopeHash, 13580234472332753659ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__Vi0], __VscopeHash, 6125112052010836943ull);
    }
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15843574185473118624ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set, __VscopeHash, 2167493577065832853ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__LRU = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9122109036806725543ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 13684587711197927423ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7978294458243663074ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17554502808463190336ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3613630819997923036ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__predictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6430551434825776416ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6871699296165632712ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_LRU_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7921834495347407085ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10764438070360814958ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5559147731957116098ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14524571103820933729ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11360668339713889301ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag1 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 1025631187275965029ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag2 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 10280833691896117884ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 931892970100890210ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 904811207090739887ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__state1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9499215302189318062ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__state2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12582897475418210524ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 705907524403711408ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040014397374336917ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10171573288717909663ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set, __VscopeHash, 9392592017837610980ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__LRU = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15352725656629389971ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 8501985679726032561ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9577077138790512729ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1598884645186550053ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16781839343538610410ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set, __VscopeHash, 15827211586753119439ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9590411164645589143ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338159488342461337ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4512526856539948139ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch2 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10662471770534802941ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4519493514073383998ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13954549845280896334ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag1 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 17153130245856237631ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag2 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 9182471915589950692ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 250136576164396530ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7729733364232333821ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 604034723386351736ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6573613142593566929ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11037159471541266673ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030374985302401294ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 6045617890565503930ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2 = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 14925997432942638007ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12146254094433360536ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6591723467576175364ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 640789512946184639ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3999293111398587377ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__entry_exists = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4758538126601417528ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12965695233439242455ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9595787214592142035ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__take_branch1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14117374756216575138ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__take_branch2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7211885316270476033ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 681264089883525000ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4639479756505227584ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16483678212957892716ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 209206948834992431ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14870184638543638106ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17062784233116054264ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11177700402406431083ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7103664304460472610ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6515060092967286217ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__current_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14373403100910856574ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17237872531721385020ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13020682231222945814ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1863661822670201388ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_index = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11293998177319566074ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4044321004167988327ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8309801810694771312ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 263746863989918219ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7923813715808979559ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__LRU = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1211123098207743722ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__next_LRU = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5307285277545603676ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__read_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11117987179175229334ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__write_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9082420830191722467ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_mask = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12246568439455660910ull);
    vlSelf->riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_bits = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2224554113587093073ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1211668948777179758ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10754392528038175527ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13278493069487892641ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9331130196851119533ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866590079686919346ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11347588534940079333ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9025239987252950535ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10742722731383818448ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 559854929470003028ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8966643194901584774ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7287934913692281656ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8534266589377721166ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15778159307787546413ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16500001593692541159ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14101000355375050956ull);
    vlSelf->riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18148409253103839435ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6853917018178487782ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4290881777940933189ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__id_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16601258843648616919ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 416005554199316141ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8553026501343841154ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18229342298971184669ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5471652809723071786ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13697043532983440814ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12025338902064897225ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14905435590236036702ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12751586055740983121ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7688945983355188082ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15990054476412386520ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13553986433825384908ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7765881427265406115ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8343180921124160588ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__m_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6956865577839305391ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2355562747063078784ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18307086402748837107ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13618156667611773393ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14234616943578891948ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13466774047781268505ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9957226753510983790ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16398420514176503093ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9020306094083765355ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 848166007844044054ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13579730646393884284ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16532643092997594925ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__ex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15417439202780306729ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3852092425732137024ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10889154490459144397ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__mem_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4385671525411821461ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5192754963179822436ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 797737810237135131ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5483829312490682203ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__m_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4226849495489216584ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__r_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4022620729459946414ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__i_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10087962511662827331ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__wb_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8357321281491450179ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__u_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 556570159976266954ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__b_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10075859677168651852ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__j_type_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1302458764377068013ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__aupic_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6484559376084939058ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__jalr_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16238734768571687352ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10710706627535585173ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9509297331965891156ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8160361378453048321ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4262334030210102535ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9490998727249992773ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16000993990184747025ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11532571432679156527ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8977760453810703082ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12036690361058090450ull);
    }
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1_forwarded = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1997682927860192376ull);
    vlSelf->riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2_forwarded = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14781619792417563265ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14570314990359468000ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16506580278075137447ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7675177725169348086ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 577749930272858274ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15086842292597443715ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7646492458727486557ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2488233181453233954ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17306977758908328116ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10156662559394437848ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13971973446567237433ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4681321265718597456ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582389158429433470ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2024160522605486848ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13561344441480439990ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 358888548033682053ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16191203550368246996ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2000770856652654409ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1036528439859570502ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6968746361130522569ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11872905864383791384ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2123296965455100422ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15904017511772840156ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17647920240306962439ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4565587607076304045ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6960376419215770156ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_forward_pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14751612800475109871ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2762098074502868520ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 119764199411557989ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4905368173805366099ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10346337496496930989ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16360282912594323914ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7127053463479852004ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1153991417964224953ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17263223238680373358ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8980964968803821810ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3673840812945095898ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17184308992483057318ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10207862033082827263ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12587363225305962494ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16629223515048711899ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5996308020509350196ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16652201549765127442ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4219402892152800869ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15691972731411525003ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16131799438631743672ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14621395911309820139ull);
    vlSelf->riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15664920707115054662ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11979062225631624357ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10396519076241192362ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13661050152664783829ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3286133046563904791ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15303911295355146743ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1514474050935107109ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_a_cntl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7162225304855009263ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_b_cntl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11448506258220022276ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12484586141865440745ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6781925257942782626ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11710118959799622961ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10341589107051963891ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3522289692001845522ull);
    vlSelf->riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5230997514994285302ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9048786722179498254ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 325513350900234010ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16281315034817024529ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8066651188299897204ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4592015557933889630ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 369957361587374574ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6855473986622751592ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10693758975736066928ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13253436545816800047ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2641266201520644900ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5331157098549829385ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 980818596368763765ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11021972825348287604ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10378788669970631522ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14464235566950506906ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_a_forward_cntl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12066879628597859144ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_b_forward_cntl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13127676897029105522ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_mem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11661170516247861695ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_wb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1927119483765105941ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16488666704992245890ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_selected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12411647058674355923ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_selected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12426339157494369249ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4614648065601216002ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9765602378036129624ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__update_btb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7555747660385105472ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__calc_jump_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14403461110688009948ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 382880632636384651ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5194754111513334717ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3899145297124150791ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14859661009660161643ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_forwarded = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15244865849048021756ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6185683590696282722ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12846903586210037611ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7236108370571007191ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_valid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3938552030129934564ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_valid = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10942191213816108428ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__lt_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6876676054950828182ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ltu_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1091982688246011102ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__zero_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5786005617404904381ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pred_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7541348148403674064ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predicted_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15574903720986700508ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11600244480086220491ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16031983736952039061ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9331648317629295272ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 803506331197105001ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1448347819764011441ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__lt_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1240786498981328624ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__ltu_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7564625737007063739ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__zero_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8673138374988542366ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predictedTaken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5196683275667340706ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7437532793071752309ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 674924336613426073ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__modify_pc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13660170886354561144ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_btb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10209578044247331635ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__input_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10949309823753881647ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6673044989068962977ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16939852668358816204ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jalr_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17203693240120788200ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5325779751638752632ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7548624291172835289ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__adder_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16390948152690623330ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc_inc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7574809642915682565ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__beq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3244820207311557802ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bne = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5706657982972434616ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__blt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 614611670189335ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9463862073032813057ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bltu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1630997465878052200ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__bgeu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14529182717810204339ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13391286411605387680ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_mispredicted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13207312680036897021ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8149105538008123183ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func7 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12429992110947123013ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 164223694031981523ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1353727649463401094ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6280399765409728737ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sra = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099124480372721261ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4857924990328778373ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5339972638623140813ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17433957695378471094ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17666479573292262210ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__lt_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5297883303020210264ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ltu_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2900514419283003388ull);
    vlSelf->riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__zero_flag = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2821824687889118709ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16588957753814358165ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3727469945493179362ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10099064231767209984ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5802141946048419713ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_load_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15171057556472396807ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__jump_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11970379553021628891ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__invalid_inst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12017692914891800320ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12098917972669764259ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6609088927367685557ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10761774676520983201ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8784755989316810384ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16535185688921071642ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__pc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3717982691436143638ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15512989891449036163ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_mem_pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1409484703083205255ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1_used = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3089746597566079875ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2_used = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11203592516936520455ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs1_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10951253379403135289ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs2_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5300938028863837102ull);
    vlSelf->riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_hazard = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16019304053291684529ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6925264614978139650ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12932084957219651504ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1499676590106050135ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13883654867724000669ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10033603828463042934ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_op2_selected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1262887426823263911ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5209308514611310518ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17334970502874164848ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10754873853263269572ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18055634618898375247ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3774387828093944848ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12740563259286159108ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4918420915413625205ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9965346212426211982ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18221729565572947962ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17146557947698137990ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13084953052390608803ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8705095906555848277ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11243977314211753312ull);
    vlSelf->riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 987273187104769439ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 93628737174459805ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1245000372370090419ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6619062054559158153ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12890780346505760704ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5427079499813056353ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8618076273296218465ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9089544497906305198ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9382434292261440833ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__calculated_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16076833151573086662ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2883425841918965370ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__write_byte_strobe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2735452349187321842ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_data_shifted = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11334780983673648770ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11151778004542483710ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7154514001758825635ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4524865873965638801ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__timer_val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9749955551562943302ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16407104009969143192ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__final_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1441646291145992082ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartWen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11689221737364787425ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmemWenFinal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1344021456847387627ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartData = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11617229790468459099ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_timer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10666910029385484996ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15439411730802982046ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17011301613599052852ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16618949491614186526ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17802298614336495184ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8664983005223791167ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_addr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14558497538521841989ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_addr = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7221757499386715969ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8359245768103950981ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2983936127371534386ull);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11126983860559833451ull);
    }
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16700569653067807729ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_read_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2467028905356415128ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15348716850533378355ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8868507337520792814ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__wEn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11682976862315229641ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11624050928709839171ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18125827582770859241ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16054267554788373123ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7259634349397755158ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16137912906855415735ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7433141020830673484ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2632603175970067751ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1496072362848440693ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5923857933356177800ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_calculated_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6328571465762973828ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 724242697193937249ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14634948993823049034ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_reg_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3656414886152315007ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15999848778592690691ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7744044350754415105ull);
    vlSelf->riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16439031922589016109ull);
    vlSelf->riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13217125853808477442ull);
    vlSelf->riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__mem_read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3192876747593837849ull);
    vlSelf->riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12464861013791704305ull);
    vlSelf->riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 653801555511975285ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
