@
@ Copyright 2019, Mokshasoft AB (mokshasoft.com)
@
@ This software may be distributed and modified according to the terms of
@ the BSD 2-Clause license. Note that NO WARRANTY is provided.
@ See "LICENSE_BSD2.txt" for details.
@

.global _start
_start:
    b reset

reset:
    mov sp,#0x20000
    bl premain
hang:
    b hang
