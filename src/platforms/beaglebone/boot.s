@
@ Copyright 2019, Mokshasoft AB (mokshasoft.com)
@
@ This software may be distributed and modified according to the terms of
@ the BSD 2-Clause license. Note that NO WARRANTY is provided.
@ See "LICENSE_BSD2.txt" for details.
@

.global _start
_start:
    mrs r0, cpsr
    bic r0, r0, #0x1F @ clear mode bits
    orr r0, r0, #0x13 @ set SVC mode
    orr r0, r0, #0xC0 @ disable FIQ and IRQ
    msr cpsr, r0
    bl premain
hang:
    b hang
