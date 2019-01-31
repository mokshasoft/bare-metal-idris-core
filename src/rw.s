@
@ Copyright 2019, Mokshasoft AB (mokshasoft.com)
@
@ This software may be distributed and modified according to the terms of
@ the BSD 2-Clause license. Note that NO WARRANTY is provided.
@ See "LICENSE_BSD2.txt" for details.
@

.global _put32
_put32:
    str r1,[r0]
    bx lr

.global _put16
_put16:
    strh r1,[r0]
    bx lr

.global _put8
_put8:
    strb r1,[r0]
    bx lr

.global _get32
_get32:
    ldr r0,[r0]
    bx lr

.global _get16
_get16:
    ldrh r0,[r0]
    bx lr

.global _get8
_get8:
    ldrb r0,[r0]
    bx lr
