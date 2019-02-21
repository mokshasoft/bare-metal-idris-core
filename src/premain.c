/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

// Defined by the Idris RTS library in idris_main.c
extern int main();

extern int __BssStart;
static unsigned char *pBssStart = (unsigned char *)&__BssStart;
extern int __BssEnd;
static unsigned char *pBssEnd = (unsigned char *)&__BssEnd;

void clear_bss()
{
    unsigned char *ptr;
    for (ptr = pBssStart; ptr < pBssEnd; ptr++) {
        *ptr = 0;
    }
}

int premain(void)
{
    clear_bss();
    return main();
}
