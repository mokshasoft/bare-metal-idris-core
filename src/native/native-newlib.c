/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

#include <stdio.h>
#include <malloc.h>

int main(void)
{
    printf("ARM bare-metal newlib\n");
    int *ptr1 = malloc(100);
    int *ptr2 = malloc(1000);
    printf("got memory pointer %p\n", ptr1);
    printf("got memory pointer %p\n", ptr2);
    free(ptr1);
    free(ptr2);
    printf("free'd pointers\n");
    return 0;
}
