/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

#include <sys/fcntl.h>
#include "platform.h"

extern int __HeapBase;
static unsigned char *heap = (unsigned char *)&__HeapBase;

int _write(
    int file,
    char *ptr,
    int len)
{
    int i;
    for (i = 0; i < len; i++) uart_putc(ptr[i]);
    return len;
}

caddr_t _sbrk(int incr)
{
    unsigned char *prev_heap;
    prev_heap = heap;
    heap += incr;
    return (caddr_t)prev_heap;
}

// dummy implementations to be able to link

int _read(
    int file,
    char *ptr,
    int len)
{
    return 0;
}

int _lseek(
    int file,
    int ptr,
    int dir)
{
    return 0;
}

int _close(int file)
{
    return 0;
}

int _fstat(
    int file,
    struct stat *st)
{
    return 0;
}

int _isatty(int fd)
{
    return 0;
}

void _exit(int n)
{
    while (1);
}
