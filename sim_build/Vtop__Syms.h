// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_riscv_tb;
    VerilatedScope* __Vscopep_riscv_tb__uut;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst__btb_file_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst__btb_read_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst__btb_write_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst__btb_write_inst__fsm_branch1;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst__btb_write_inst__fsm_branch2;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst__lru_next_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__btb_inst__lru_reg_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__decode_stage_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__decode_stage_inst__decode_controller_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__decode_stage_inst__register_file_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__ex_mem_pipeline_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__execute_stage_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__execute_stage_inst__alu_control_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__execute_stage_inst__alu_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__execute_stage_inst__pc_jump_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__fetch_stage_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__fetch_stage_inst__instruction_mem_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__fetch_stage_inst__pc_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__fetch_stage_inst__pc_update_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__forwarding_unit_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__hazard_unit_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__id_ex_pipeline_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__if_id_pipeline_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__mem_stage_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__mem_stage_inst__Simtime;
    VerilatedScope* __Vscopep_riscv_tb__uut__mem_stage_inst__dmem;
    VerilatedScope* __Vscopep_riscv_tb__uut__mem_stage_inst__uartsim;
    VerilatedScope* __Vscopep_riscv_tb__uut__mem_wb_pipeline_inst;
    VerilatedScope* __Vscopep_riscv_tb__uut__writeback_stage_inst;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
