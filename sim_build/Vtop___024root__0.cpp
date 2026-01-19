// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__rst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__rst 
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

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst__0))) 
                                                         << 5U) 
                                                        | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__clk__0))) 
                                                           << 4U)) 
                                                       | (((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__clk__0))) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__clk__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__clk__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst__0)))))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__clk__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst__0))) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__clk__0))) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst__0))))) 
                                                          << 0x0000000cU) 
                                                         | ((((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__clk__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__clk__0))))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst__0))) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__clk__0))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst__0))))) 
                                                            << 4U) 
                                                           | (((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__btb_inst__DOT__clk__0))) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst__0))) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__clk__0))))))))));
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
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__rst)) 
                      & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__wEn))))) {
        VL_WRITEF_NX("%c",0,8,vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__data);
    }
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
    __VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
    __VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
    __VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0;
    // Body
    __VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0U;
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_en) {
        __VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_data;
        __VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_addr;
        __VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__rst) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction = 0U;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__flush) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction = 0U;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__read_en) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem
            [(0x0000ffffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__pc 
                             >> 2U))];
    }
    if (__VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem[__VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0] 
            = __VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction_in 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
    __Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc = 0;
    // Body
    __Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst) {
        __Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush = 0U;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_flush) {
        __Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_flush;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_en) {
        __Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_taken;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_predicted_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_valid;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_flush;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
        = __Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_flush = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__id_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_flush;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0;
    __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0;
    SData/*15:0*/ __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0;
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1;
    __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0;
    SData/*15:0*/ __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1;
    __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1;
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2;
    __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0;
    SData/*15:0*/ __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2;
    __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2;
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3;
    __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0;
    SData/*15:0*/ __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3;
    __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3;
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0;
    // Body
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0U;
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0U;
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0U;
    __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0U;
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem_write) {
        if ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
            __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 
                = (0x000000ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data);
            __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
            __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
            __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 
                = (0x000000ffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data 
                                  >> 8U));
            __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
            __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
            __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 
                = (0x000000ffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data 
                                  >> 0x10U));
            __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
            __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
            __VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 
                = (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data 
                   >> 0x18U);
            __VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
            __VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 1U;
        }
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
        [vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_read_addr];
    if (__VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                [__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0]) 
               | (IData)(__VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0));
    }
    if (__VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                [__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                [__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                [__VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3) 
                  << 0x00000018U));
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_data;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
    __VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0;
    CData/*4:0*/ __VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
    __VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
    __VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0;
    // Body
    __VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0U;
    if (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en) 
         & (0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr)))) {
        __VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data;
        __VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr;
        __VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 1U;
    }
    if (__VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file[__VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0] 
            = __VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
    }
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst)
            ? 0U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_en)
                     ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__next_pc
                     : vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc));
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_plus_4 
        = ((IData)(4U) + vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc);
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_tag 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
           >> 5U);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index 
        = (7U & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
                 >> 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_tag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0;
    VL_ZERO_W(128, __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0);
    CData/*2:0*/ __VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0;
    __VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 0;
    CData/*0:0*/ __VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0;
    __VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 0;
    // Body
    __VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 0U;
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_en) {
        __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[0U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[0U];
        __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[1U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[1U];
        __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[2U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[2U];
        __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[3U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[3U];
        __VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_index;
        __VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 1U;
    }
    if (__VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][0U] 
            = __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[0U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][1U] 
            = __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[1U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][2U] 
            = __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[2U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][3U] 
            = __VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[3U];
    }
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__rst)
            ? 0U : ((IData)(1U) + vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count));
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__timer_val 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count;
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type = 3U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type = 7U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd = 0U;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_flush) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type = 3U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type = 7U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd = 0U;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_en) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_store_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_load;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_op2_selected;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_load_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_write;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_rd;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_op2_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_op2_selected;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_mem 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_mem 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartData 
        = (0x000000ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data);
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem 
        = ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_mem));
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartData;
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__rst) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_instruction = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_load_type = 7U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_write = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_store_type = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_invalid_inst = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_reg_file = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_load = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_valid = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_rd = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_taken = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_predicted_pc = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func7 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_alu_src = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op2 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_immediate = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op1 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func3 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_forward_pipeline_flush = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs2 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs1 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pc = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_opcode = 0U;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__pipeline_flush) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_instruction = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_load_type = 7U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_write = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_store_type = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_invalid_inst = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_reg_file = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_load = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_valid = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_rd = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_taken = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_predicted_pc = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func7 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_alu_src = 1U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op2 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_immediate = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op1 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func3 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_forward_pipeline_flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__pipeline_flush;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs2 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs1 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pc = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_opcode = 0x13U;
    } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__pipeline_en) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_instruction;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_load_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_load_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_write;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_store_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_store_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_invalid_inst 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_invalid_inst;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_reg_file 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_load 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_load;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_valid;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_rd 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_rd;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_taken 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_taken;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_predicted_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_predicted_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func7 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_func7;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_alu_src 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_alu_src;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_immediate 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_immediate;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func3 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_func3;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_forward_pipeline_flush = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_rs2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_rs1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_opcode 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_opcode;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_instruction;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_load = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pred_taken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_func7 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_alu_src = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op2 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_immediate;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op1 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_func3 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_forward_pipeline_flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_forward_pipeline_flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_rs2 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_rs1 = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_opcode = vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__ex_opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_load_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pred_valid;
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_rs1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ex_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predictedTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predictedTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func7 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func7;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__immediate;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func3 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__func3 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__func3;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_rd 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pipeline_flush)
            ? 0U : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_rd));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_tag 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc 
           >> 5U);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__opcode;
    vlSelfRef.riscv_tb__DOT__uut__DOT__alu_wb = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sra 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func7) 
                 >> 5U));
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__alu_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc_inc 
        = ((IData)(4U) + vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__pc);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_tag;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__is_sub 
        = (1U & (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__func7) 
                  & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__opcode)) 
                 >> 5U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_inst 
        = (0x63U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jalr_inst 
        = (0x67U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__opcode));
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__alu_wb;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_rd 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__alu_rd;
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ALUControl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_control_inst__DOT__ALUControl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_btb 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__branch_inst) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__jump_inst));
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ALUControl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__ALUControl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__update_btb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__update_btb;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_update = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__update_btb;
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst)
            ? 0U : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU_updated));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[0U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[1U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[2U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[3U] = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index = 0U;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[0U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[0U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[1U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[1U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[2U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[2U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[3U] 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[3U];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_file_write 
        = ((1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst))) 
           && (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update));
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index;
}

void Vtop___024root___nba_sequent__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_load 
        = ((1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst))) 
           && (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_load));
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd = 0U;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_calculated_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_rd;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_reg_file 
        = ((1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst))) 
           && (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_reg_file));
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_load = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_calculated_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__alu_result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_calculated_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_wb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_addr;
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb 
        = ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_wb));
}

void Vtop___024root___nba_sequent__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay = 0U;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_timer 
        = (0xffffff00U == vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay);
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0;
    riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT____VdfgExtracted_h154e558e__0 = 0;
    CData/*0:0*/ riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT____VdfgRegularize_h04dad4bb_0_0;
    riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT____VdfgRegularize_h04dad4bb_0_0 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    __VdfgRegularize_h6e95ff9d_0_0 = 0;
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__id_flush)
            ? 0x00000013U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction_in);
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__mem_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_immediate 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_immediate;
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_load_type;
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_mem_store_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_mem_store_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_alu_src = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__decode_controller_inst__DOT__invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_alu_src 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_alu_src;
    vlSelfRef.riscv_tb__DOT__uut__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__invalid_inst;
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__invalid_inst 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__invalid_inst;
}

void Vtop___024root___nba_sequent__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_instruction 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction;
}

void Vtop___024root___nba_sequent__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_taken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_predicted_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pc;
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_mem 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_mem 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem));
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_LRU_read 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__LRU) 
                 >> (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_index)));
}

void Vtop___024root___nba_sequent__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_update;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index 
        = (7U & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc 
                 >> 2U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch1 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[2U])));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__branch2 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_set[0U])));
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid1) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag1));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid2) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__tag2));
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__target;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__predictedTaken 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_state) 
                 >> 1U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__predictedTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__predictedTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_predicted_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_predictTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__predictedTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_target_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_target_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_taken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_predictTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_predictTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_pc_predictTaken;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_valid 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_valid;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_predictTaken 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__btb_pc_predictTaken;
}

void Vtop___024root___nba_sequent__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_load 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_load;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_reg_file 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_rd 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_load_type;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result;
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
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_wb 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_wb 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb) 
            == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1)) 
           & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb));
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs2_hazard 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2_used) 
           & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd) 
              == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs1_hazard 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1_used) 
           & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd) 
              == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_hazard 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_load_inst) 
           & ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd)) 
              & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs1_hazard) 
                 | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs2_hazard))));
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write 
        = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__LRU) 
                 >> (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_index)));
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[0U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[0U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[1U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[1U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[2U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[2U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[3U] 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_set[3U];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch1 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[3U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[2U])));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__branch2 
        = (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[1U])) 
            << 0x00000020U) | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_set[0U])));
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid1) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag1 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid2) 
           & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag2 
              == vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__entry_exists 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2));
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__entry_exists) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state2;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch1 = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch2 = 0U;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__current_state 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__current_state 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_state_branch2;
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid)
            ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2)
            : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_LRU_read));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_read 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_read 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_read;
}

void Vtop___024root___nba_comb__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_b_cntl 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_mem)
            ? 1U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_wb)
                     ? 2U : 0U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_a_cntl 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_mem)
            ? 1U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_wb)
                     ? 2U : 0U));
    vlSelfRef.riscv_tb__DOT__uut__DOT__operand_b_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_b_cntl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__operand_a_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_a_cntl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_b_forward_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__operand_b_cntl;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_a_forward_cntl 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__operand_a_cntl;
}

void Vtop___024root___nba_comb__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_data 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_timer)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__timer_val
            : vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__final_read_data);
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_read_data;
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__mem_read_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_read_data;
}

void Vtop___024root___nba_comb__TOP__12(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__12\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__entry_exists) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2 
            = (1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2 
            = (1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write)));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid1));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag
            : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag1);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2) 
           | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid2));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag
            : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag2);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_write 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_write;
}

void Vtop___024root___nba_comb__TOP__13(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__13\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_result 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_load)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__mem_read_data
            : vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__alu_result);
    vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result = vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__wb_result = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_wb 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_data;
}

void Vtop___024root___nba_comb__TOP__14(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__14\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__next_LRU;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU_updated 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU;
}

void Vtop___024root___nba_comb__TOP__15(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__15\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT____VdfgRegularize_hd65a24b1_0_0;
    riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT____VdfgRegularize_hd65a24b1_0_0 = 0;
    // Body
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pc_jump_inst__DOT__op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_forwarded;
    vlSelfRef.riscv_tb__DOT__uut__DOT__ex_op2_selected 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_selected;
    if (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__pipeline_flush) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_valid = 0U;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_valid = 0U;
    } else {
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op2_alu;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_alu;
    }
    vlSelfRef.riscv_tb__DOT__uut__DOT__m_unit_op1 = vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__op1_selected;
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__lt_flag 
        = VL_LTS_III(32, vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1, vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2);
    vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__ltu_flag 
        = (vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op1 
           < vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__alu_inst__DOT__op2);
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__mispredicted 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__mispredicted;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__mispredicted 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__mispredicted;
}

void Vtop___024root___nba_comb__TOP__16(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__16\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1 
        = ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs1_addr))
            ? 0U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1_forwarded);
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2 
        = ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs2_addr))
            ? 0U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2_forwarded);
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_op1 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_op2 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op2;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_op1;
    vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__id_op2;
}

void Vtop___024root___nba_comb__TOP__17(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__17\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target
            : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target1);
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2)
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target
            : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target2);
}

void Vtop___024root___nba_comb__TOP__18(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__18\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
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
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__flush 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__flush;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__read_en 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en;
}

void Vtop___024root___nba_comb__TOP__19(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__19\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection 
        = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__jump_en) 
            << 1U) | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_predictTaken) 
                      & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_valid)));
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__next_pc 
        = (((3U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection)) 
            | (2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection)))
            ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_jump_addr
            : ((1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection))
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_target_pc
                : vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_plus_4));
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__next_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__next_pc;
    vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__next_pc 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__next_pc;
}

void Vtop___024root___nba_comb__TOP__20(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__20\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__mispredicted) 
                     << 2U) | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__current_state));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__next_state 
        = Vtop__ConstPool__TABLE_h88b725b4_0[__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__mispredicted) 
                     << 2U) | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__current_state));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__next_state 
        = Vtop__ConstPool__TABLE_h88b725b4_0[__Vtableidx2];
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch1 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__next_state;
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch2 
        = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__next_state;
}

void Vtop___024root___nba_comb__TOP__21(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__21\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1)
            ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch1)
            : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state1));
    vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2 
        = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2)
            ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch2)
            : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state2));
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__1___VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__1___VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0;
    SData/*15:0*/ __Vinline__nba_sequent__TOP__1___VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__1___VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__1___VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__2___Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
    __Vinline__nba_sequent__TOP__2___Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0;
    SData/*15:0*/ __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0;
    SData/*15:0*/ __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0;
    SData/*15:0*/ __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0;
    SData/*15:0*/ __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0;
    IData/*31:0*/ __Vinline__nba_sequent__TOP__4___VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
    __Vinline__nba_sequent__TOP__4___VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0;
    CData/*4:0*/ __Vinline__nba_sequent__TOP__4___VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
    __Vinline__nba_sequent__TOP__4___VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__4___VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
    __Vinline__nba_sequent__TOP__4___VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0;
    VlWide<4>/*127:0*/ __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0;
    VL_ZERO_W(128, __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0);
    CData/*2:0*/ __Vinline__nba_sequent__TOP__6___VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0;
    __Vinline__nba_sequent__TOP__6___VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__6___VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0;
    __Vinline__nba_sequent__TOP__6___VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 0;
    CData/*3:0*/ __Vinline__nba_comb__TOP__18___Vtableidx3;
    __Vinline__nba_comb__TOP__18___Vtableidx3 = 0;
    CData/*2:0*/ __Vinline__nba_comb__TOP__20___Vtableidx1;
    __Vinline__nba_comb__TOP__20___Vtableidx1 = 0;
    CData/*2:0*/ __Vinline__nba_comb__TOP__20___Vtableidx2;
    __Vinline__nba_comb__TOP__20___Vtableidx2 = 0;
    // Body
    if ((0x0000000000040000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (VL_UNLIKELY((((~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__rst)) 
                          & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__wEn))))) {
            VL_WRITEF_NX("%c",0,8,vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__data);
        }
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 0U;
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_en) {
            __Vinline__nba_sequent__TOP__1___VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_data;
            __Vinline__nba_sequent__TOP__1___VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__write_addr;
            __Vinline__nba_sequent__TOP__1___VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0 = 1U;
        }
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__rst) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction = 0U;
        } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__flush) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction = 0U;
        } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__read_en) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem
                [(0x0000ffffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__pc 
                                 >> 2U))];
        }
        if (__Vinline__nba_sequent__TOP__1___VdlySet__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem[__Vinline__nba_sequent__TOP__1___VdlyDim0__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0] 
                = __Vinline__nba_sequent__TOP__1___VdlyVal__riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__mem__v0;
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__instruction;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_instruction;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_instruction;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_instruction;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__instruction_in 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction;
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__2___Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__rst) {
            __Vinline__nba_sequent__TOP__2___Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush = 0U;
        } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_flush) {
            __Vinline__nba_sequent__TOP__2___Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_flush;
        } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__pipeline_en) {
            __Vinline__nba_sequent__TOP__2___Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pc;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_taken;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_predicted_pc;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pred_valid;
            vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_flush;
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc 
            = __Vinline__nba_sequent__TOP__2___Vdly__riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_taken 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_taken;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_predicted_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_predicted_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_pred_valid;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__id_flush;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__id_flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_flush;
    }
    if ((0x0000000000020000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 0U;
        __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 0U;
        __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 0U;
        __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 0U;
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem_write) {
            if ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
                __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 
                    = (0x000000ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data);
                __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
                __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
                __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 
                    = (0x000000ffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data 
                                      >> 8U));
                __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
                __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
                __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 
                    = (0x000000ffU & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data 
                                      >> 0x10U));
                __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
                __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__byte_en))) {
                __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 
                    = (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__write_data 
                       >> 0x18U);
                __Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 
                    = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_write_addr;
                __Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3 = 1U;
            }
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
            [vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__word_read_addr];
        if (__Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0] 
                = ((0xffffff00U & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                    [__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0]) 
                   | __Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v0);
        }
        if (__Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1] 
                = ((0xffff00ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                    [__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1]) 
                   | ((IData)(__Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v1) 
                      << 8U));
        }
        if (__Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2] 
                = ((0xff00ffffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                    [__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2]) 
                   | ((IData)(__Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v2) 
                      << 0x00000010U));
        }
        if (__Vinline__nba_sequent__TOP__3___VdlySet__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem[__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3] 
                = ((0x00ffffffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem
                    [__Vinline__nba_sequent__TOP__3___VdlyDim0__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3]) 
                   | ((IData)(__Vinline__nba_sequent__TOP__3___VdlyVal__riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__mem__v3) 
                      << 0x00000018U));
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__dmem__DOT__read_data;
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__4___VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 0U;
        if (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en) 
             & (0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr)))) {
            __Vinline__nba_sequent__TOP__4___VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data;
            __Vinline__nba_sequent__TOP__4___VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr;
            __Vinline__nba_sequent__TOP__4___VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0 = 1U;
        }
        if (__Vinline__nba_sequent__TOP__4___VdlySet__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file[__Vinline__nba_sequent__TOP__4___VdlyDim0__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0] 
                = __Vinline__nba_sequent__TOP__4___VdlyVal__riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__reg_file__v0;
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__rst)
                ? 0U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_en)
                         ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__next_pc
                         : vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc));
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_plus_4 
            = ((IData)(4U) + vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc);
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_inst__DOT__if_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__if_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_tag 
            = (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
               >> 5U);
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index 
            = (7U & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__pc 
                     >> 2U));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_tag 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_tag;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__read_index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__read_index;
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_sequent__TOP__6___VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 0U;
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_en) {
            __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[0U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[0U];
            __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[1U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[1U];
            __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[2U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[2U];
            __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[3U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_set[3U];
            __Vinline__nba_sequent__TOP__6___VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_index;
            __Vinline__nba_sequent__TOP__6___VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0 = 1U;
        }
        if (__Vinline__nba_sequent__TOP__6___VdlySet__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__Vinline__nba_sequent__TOP__6___VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][0U] 
                = __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[0U];
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__Vinline__nba_sequent__TOP__6___VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][1U] 
                = __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[1U];
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__Vinline__nba_sequent__TOP__6___VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][2U] 
                = __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[2U];
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file[__Vinline__nba_sequent__TOP__6___VdlyDim0__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0][3U] 
                = __Vinline__nba_sequent__TOP__6___VdlyVal__riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__file__v0[3U];
        }
    }
    if ((0x0000000000080000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__rst)
                ? 0U : ((IData)(1U) + vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count));
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__timer_val 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__Simtime__DOT__cycle_count;
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__rst) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type = 3U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type = 7U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd = 0U;
        } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_flush) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type = 3U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type = 7U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd = 0U;
        } else if (vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__pipeline_en) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_store_type;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_load;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_op2_selected;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_load_type;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_memory_write;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_reg_file;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_result;
            vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__ex_wb_rd;
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_store_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_store_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_load 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_load;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_op2_selected 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_op2_selected;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_load_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_load_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_memory_write;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_inst__DOT__mem_wb_rd;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_store_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_op2_selected;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_write;
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_mem 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_mem 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartData 
            = (0x000000ffU & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data);
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem 
            = ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem)) 
               & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_mem));
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartsim__DOT__data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__uartData;
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__rst)
                ? 0U : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU_updated));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__LRU 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__LRU 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__LRU 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__LRU;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[0U] = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[1U] = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[2U] = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[3U] = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index = 0U;
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[0U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[0U];
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[1U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[1U];
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[2U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[2U];
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_set[3U] 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__write_set[3U];
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_file_write 
            = ((1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__rst))) 
               && (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update));
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
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__write_index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__reg_write_index;
    }
    if ((0x0000000000300000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_load 
            = ((1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst))) 
               && (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_load));
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd = 0U;
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_calculated_result;
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_rd;
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_reg_file 
            = ((1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__rst))) 
               && (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_reg_file));
        vlSelfRef.riscv_tb__DOT__uut__DOT__wb_load 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_load;
        vlSelfRef.riscv_tb__DOT__uut__DOT__wb_calculated_result 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_calculated_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_rd;
        vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_load 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_load;
        vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__alu_result 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_calculated_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_en 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_wb 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_addr 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd;
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_rd;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_en 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_en;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_addr 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_addr;
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb 
            = ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb)) 
               & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__reg_file_wr_wb));
    }
    if ((0x0000000000018000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__rst) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay = 0U;
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay = 0U;
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_delay 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type;
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset;
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result;
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_timer 
            = (0xffffff00U == vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result_delay);
    }
    if ((0x0000000000000304ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_instruction 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_instruction;
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_valid 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_valid;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pred_taken 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pred_taken;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_predicted_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_predicted_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_pc;
    }
    if ((0x0000000000007800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_mem 
            = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem) 
                == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2)) 
               & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem));
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_mem 
            = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_mem) 
                == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1)) 
               & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_mem));
    }
    if ((0x0000000000000063ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_LRU_read 
            = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__LRU) 
                     >> (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__read_index)));
    }
    if ((0x0000000000001800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_update;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index 
            = (7U & (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_pc 
                     >> 2U));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_file_inst__DOT__update_index 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__update_index;
    }
    if ((0x000000000000009bULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000006000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_load 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_load;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_reg_file 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_reg_file;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_wb_rd 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_rd;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_memory_load_type;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__result 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_result;
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
                                              (1U & 
                                               ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset) 
                                                >> 1U)), 4U));
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__write_byte_strobe 
                = (0x0000000fU & ((2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__load_type))
                                   ? 0x0fU : 0U));
            vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__store_data_shifted 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__op2_data;
        }
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
    }
    if ((0x0000000000301800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_wb 
            = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb) 
                == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs2)) 
               & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb));
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_wb 
            = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rd_wb) 
                == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__rs1)) 
               & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rd_wb));
    }
    if ((0x0000000000038000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
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
                                : (((- (IData)((1U 
                                                & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                   >> 0x00000017U)))) 
                                    << 8U) | (0x000000ffU 
                                              & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                 >> 0x00000010U))))
                            : ((1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__byte_offset_delay))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                   >> 0x0000000fU)))) 
                                    << 8U) | (0x000000ffU 
                                              & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                 >> 8U)))
                                : (((- (IData)((1U 
                                                & (vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data 
                                                   >> 7U)))) 
                                    << 8U) | (0x000000ffU 
                                              & vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__mem_read_data)))))));
    }
    if ((0x0000000000001b04ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs2_hazard 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2_used) 
               & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd) 
                  == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs2)));
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs1_hazard 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1_used) 
               & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd) 
                  == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_rs1)));
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_hazard 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_load_inst) 
               & ((0U != (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_rd)) 
                  & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs1_hazard) 
                     | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__rs2_hazard))));
    }
    if ((0x0000000000001860ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write 
            = (1U & ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__LRU) 
                     >> (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_index)));
    }
    if ((0x0000000000001880ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x00000000000000fbULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__valid)
                ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__check_branch2)
                : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__current_LRU_read));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_read 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_read_inst__DOT__next_LRU_read;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_read 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_read;
    }
    if ((0x0000000000307800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_b_cntl 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_mem)
                ? 1U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs2_wb)
                         ? 2U : 0U));
        vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_a_cntl 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_mem)
                ? 1U : ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__valid_rs1_wb)
                         ? 2U : 0U));
        vlSelfRef.riscv_tb__DOT__uut__DOT__operand_b_cntl 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_b_cntl;
        vlSelfRef.riscv_tb__DOT__uut__DOT__operand_a_cntl 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__forwarding_unit_inst__DOT__operand_a_cntl;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_b_forward_cntl 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__operand_b_cntl;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__operand_a_forward_cntl 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__operand_a_cntl;
    }
    if ((0x00000000000b8000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_data 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_timer)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__timer_val
                : vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__final_read_data);
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_read_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_stage_inst__DOT__read_data;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_read_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_read_data;
        vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_read_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__mem_read_data;
        vlSelfRef.riscv_tb__DOT__uut__DOT__wb_read_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__mem_wb_pipeline_inst__DOT__wb_read_data;
        vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__mem_read_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_read_data;
    }
    if ((0x00000000000018e0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        if (vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__entry_exists) {
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch1;
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2 
                = (1U & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__check_branch2));
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write;
        } else {
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write;
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2 
                = (1U & (~ (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__current_LRU_write)));
            vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write 
                = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2;
        }
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid1 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1) 
               | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid1));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag1 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag
                : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag1);
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2) 
               | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__valid2));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_tag
                : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__tag2);
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_LRU_write;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__update_lru_write 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU_write;
    }
    if ((0x00000000003b8000ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_result 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_load)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__mem_read_data
                : vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__alu_result);
        vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__writeback_stage_inst__DOT__wb_result;
        vlSelfRef.riscv_tb__DOT__wb_result = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__execute_stage_inst__DOT__data_forward_wb 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__wb_result;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__wr_data 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__reg_file_wr_data;
    }
    if ((0x00000000000018fbULL & vlSelfRef.__VnbaTriggered
         [0U])) {
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
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_next_inst__DOT__next_LRU;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__lru_reg_inst__DOT__LRU_updated 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__next_LRU;
    }
    if ((0x00000000003bf800ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x00000000003b8704ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
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
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1 
            = ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs1_addr))
                ? 0U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1_forwarded);
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2 
            = ((0U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__rs2_addr))
                ? 0U : vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2_forwarded);
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__register_file_inst__DOT__op2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_op1 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_op2 = vlSelfRef.riscv_tb__DOT__uut__DOT__decode_stage_inst__DOT__op2;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_op1;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_inst__DOT__id_op2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__id_op2;
    }
    if ((0x00000000003bf8e0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target1 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target
                : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target1);
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2)
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__update_target
                : vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__target2);
    }
    if ((0x00000000003bfb04ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_comb__TOP__18___Vtableidx3 = 
            ((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__invalid_inst) 
               << 3U) | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__stall) 
                         << 2U)) | (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_hazard) 
                                     << 1U) | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__jump_branch_taken)));
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_flush 
            = Vtop__ConstPool__TABLE_hce92076c_0[__Vinline__nba_comb__TOP__18___Vtableidx3];
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_en 
            = Vtop__ConstPool__TABLE_he4614b46_0[__Vinline__nba_comb__TOP__18___Vtableidx3];
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_flush 
            = Vtop__ConstPool__TABLE_hf4445326_0[__Vinline__nba_comb__TOP__18___Vtableidx3];
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_en 
            = Vtop__ConstPool__TABLE_h8a450b34_0[__Vinline__nba_comb__TOP__18___Vtableidx3];
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__pc_en 
            = Vtop__ConstPool__TABLE_he4614b46_0[__Vinline__nba_comb__TOP__18___Vtableidx3];
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_stall 
            = Vtop__ConstPool__TABLE_h4b48be47_0[__Vinline__nba_comb__TOP__18___Vtableidx3];
        vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_mem_pipeline_en 
            = Vtop__ConstPool__TABLE_h3cdac1a4_0[__Vinline__nba_comb__TOP__18___Vtableidx3];
        vlSelfRef.riscv_tb__DOT__uut__DOT__ex_mem_pipeline_en 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__ex_mem_pipeline_en;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_en 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_en;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_flush;
        vlSelfRef.riscv_tb__DOT__uut__DOT__id_ex_pipeline_en 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__id_ex_pipeline_en;
        vlSelfRef.riscv_tb__DOT__uut__DOT__load_stall 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__load_stall;
        vlSelfRef.riscv_tb__DOT__uut__DOT__if_id_pipeline_flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__if_id_pipeline_flush;
        vlSelfRef.riscv_tb__DOT__uut__DOT__pc_en = vlSelfRef.riscv_tb__DOT__uut__DOT__hazard_unit_inst__DOT__pc_en;
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
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__flush 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__flush;
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__pc_en 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en;
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__instruction_mem_inst__DOT__read_en 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_en;
    }
    if ((0x00000000003bf89bULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection 
            = (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__jump_en) 
                << 1U) | ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_predictTaken) 
                          & (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_pc_valid)));
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__next_pc 
            = (((3U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection)) 
                | (2U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection)))
                ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_jump_addr
                : ((1U == (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__selection))
                    ? vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__btb_target_pc
                    : vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__pc_plus_4));
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__next_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_update_inst__DOT__next_pc;
        vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__pc_inst__DOT__next_pc 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__fetch_stage_inst__DOT__next_pc;
    }
    if ((0x00000000003bf880ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        __Vinline__nba_comb__TOP__20___Vtableidx1 = 
            (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__mispredicted) 
              << 2U) | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__current_state));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__next_state 
            = Vtop__ConstPool__TABLE_h88b725b4_0[__Vinline__nba_comb__TOP__20___Vtableidx1];
        __Vinline__nba_comb__TOP__20___Vtableidx2 = 
            (((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__mispredicted) 
              << 2U) | (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__current_state));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__next_state 
            = Vtop__ConstPool__TABLE_h88b725b4_0[__Vinline__nba_comb__TOP__20___Vtableidx2];
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch1 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch1__DOT__next_state;
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch2 
            = vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__fsm_branch2__DOT__next_state;
    }
    if ((0x00000000003bf8e0ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch1)
                ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch1)
                : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state1));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2 
            = ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__insert_branch2)
                ? (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__next_state_branch2)
                : (IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__state2));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[0U] 
            = (IData)((((QData)((IData)((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2) 
                                          << 0x0000001bU) 
                                         | vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2))) 
                        << 0x00000024U) | (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2)) 
                                            << 4U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state2) 
                                                              << 2U))))));
        vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_set[1U] 
            = (IData)(((((QData)((IData)((((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_valid2) 
                                           << 0x0000001bU) 
                                          | vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_tag2))) 
                         << 0x00000024U) | (((QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_target2)) 
                                             << 4U) 
                                            | (QData)((IData)(
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
                                              << 2U) 
                                             | (QData)((IData)(vlSelfRef.riscv_tb__DOT__uut__DOT__btb_inst__DOT__btb_write_inst__DOT__write_state1))))) 
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
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/talha/RISCV_Benchmarking_framework/rtl/riscv_tb.sv", 2, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/talha/RISCV_Benchmarking_framework/rtl/riscv_tb.sv", 2, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/talha/RISCV_Benchmarking_framework/rtl/riscv_tb.sv", 2, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
