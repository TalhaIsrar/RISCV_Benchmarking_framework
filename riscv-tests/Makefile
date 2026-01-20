RISCV_GCC ?= riscv32-unknown-elf-gcc

TESTS_PATH := ./rv32ui
TEST_SRCS := $(wildcard $(TESTS_PATH)/*.S)
TEST_OBJS := $(TEST_SRCS:.S=.o)

CFLAGS  := -march=rv32i -mabi=ilp32 -ffreestanding -nostdlib -Iheaders
LDFLAGS := -Wl,-Bstatic,-T,link.ld

all: core.elf test.dump

start.o: start.S
	$(RISCV_GCC) -c $(CFLAGS) $< -o $@

$(TESTS_PATH)/%.o: $(TESTS_PATH)/%.S
	$(RISCV_GCC) -c $(CFLAGS) $< -o $@

core.elf: start.o $(TEST_OBJS)
	$(RISCV_GCC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

test.dump: core.elf
	riscv32-unknown-elf-objdump -D $< > core.dump

clean:
	rm -f start.o $(TESTS_PATH)/*.o core.elf core.dump
