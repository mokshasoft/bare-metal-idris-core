/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

void _put32(unsigned int, unsigned int);

void uart_putc(char c)
{
    if (c == '\n') {
        _put32(0x44E09000, '\r');
    }
    _put32(0x44E09000, c);
}
