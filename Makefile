# Cocotb Macros
SIM ?= verilator
TOPLEVEL_LANG ?= verilog
WAVES = 0 # 1 for waveform debugging

# Adding all .v and .sv files
VERILOG_SOURCES := $(shell find $(PWD)/rtl -type f \( -name "*.v" -o -name "*.sv" \))
VERILOG_INCLUDE := $(shell find $(PWD)/rtl -type d -printf '-I%p ')

# EXTRA_ARGS += --trace --trace-structs --trace-fst --timing -j 8 # Use for debugging to generate wavefile
EXTRA_ARGS += -j 8 # Use this for faster simulation

# Connects cocotb test.py -> TB in verilog
TOPLEVEL = riscv_tb
MODULE = cocotb_test

all:
	@echo "Select out of following options:"
	@echo "  make coremark"
	@echo "  make dhrystone"
	@echo "  make riscv-tests"
	@echo "  make custom"


del:
	-rm -rf *.o *.mem *.bin *.elf *dump* *.xml sim_build

.DEFAULT_GOAL := all