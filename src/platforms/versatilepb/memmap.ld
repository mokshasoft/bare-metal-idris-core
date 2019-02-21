/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

MEMORY
{
    ram  : ORIGIN = 0x00010000, LENGTH = 0x10000000
}

/* Set heap to 512 KB (0x80000) */
_heap_size = 0x80000;

SECTIONS
{
   .startcode :
    {
        . = ALIGN(4);
        *boot.s.obj (.text)
    } > ram
   .text :
    {
        . = ALIGN(4);
        *(.text*)
    } > ram
   .bss :
    {
        . = ALIGN(4);
        __BssStart = .;
        *(.bss*)
        __BssEnd = .;
    } > ram
   .heap :
    {
        . = ALIGN(4);
        __HeapBase = .;
        *(.heap*)
        . = . + _heap_size;
    } > ram
}
