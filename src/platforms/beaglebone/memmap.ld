/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

MEMORY
{
    ram  : ORIGIN = 0x80000000, LENGTH = 0x10000000
}

/* Set heap to 512 KB (0x80000) */
_heap_size = 0x80000;

SECTIONS
{
   .text : { *(.text*) } > ram
   .bss  : { *(.text*) } > ram
   .heap :
    {
        __HeapBase = .;
        *(.heap*)
        . = . + _heap_size;
    } > ram
}
