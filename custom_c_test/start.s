.section .text
.global _start

_start:
    li sp, 0x1000FFFC
    li t0, 0x12345678
    call main

HALT:
    li t0,0xDEADC0DE
    j HALT
    nop
    nop
