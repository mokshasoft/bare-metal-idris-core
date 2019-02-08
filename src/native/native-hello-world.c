/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

extern void uart_putc(char c);

static void write(char *ptr)
{
    while (*ptr != '\0') {
        uart_putc(*ptr);
        ptr++;
    }
}

int main(void)
{
    write("Hello, ARM bare-metal\n");
    return 0;
}
