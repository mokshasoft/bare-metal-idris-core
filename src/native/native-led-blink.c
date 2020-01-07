/*
 * Copyright 2019, Mokshasoft AB (mokshasoft.com)
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 */

#include "consoleUtils.h"
#include "soc_AM335x.h"
#include "beaglebone.h"

extern void _put32(unsigned int, unsigned int);
extern unsigned int _get32(unsigned int);

#define CM_PER_GPIO1_CLKCTRL 0xAC
#define CM_PER_GPIO1_CLKCTRL_OPTFCLKEN_GPIO_1_GDBCLK 0x00040000
#define CM_PER_GPIO1_CLKCTRL_MODULEMODE_ENABLE       0x2
#define GPIO_OE              0x134
#define GPIO_CLEARDATAOUT    0x190
#define GPIO_SETDATAOUT      0x194
#define SOC_PRCM_REGS        0x44E00000
#define SOC_GPIO_1_REGS      0x4804C000

// Busy wait time
#define TIME 50000000

void busywait(volatile unsigned int time)
{
    int i = 0;
    for (i = 0; i < time; i++);
}

int main(void)
{
    volatile unsigned int i;
    // Init GPIO
    _put32(SOC_PRCM_REGS + CM_PER_GPIO1_CLKCTRL,
        CM_PER_GPIO1_CLKCTRL_OPTFCLKEN_GPIO_1_GDBCLK | CM_PER_GPIO1_CLKCTRL_MODULEMODE_ENABLE);
    // Set GPIO direction to output
    i = _get32(SOC_GPIO_1_REGS + GPIO_OE);
    i &= ~(0xF << 21);
    _put32(SOC_GPIO_1_REGS + GPIO_OE, i);

    /* Initialize the UART console */
    ConsoleUtilsInit();

    /* Select the console type based on compile time check */
    ConsoleUtilsSetType(CONSOLE_UART);

    ConsoleUtilsPrintf("Setup UART logging\n");

    // Blick LEDs forever
    i = 0;
    for (;;) {
        // Blink once
        _put32(SOC_GPIO_1_REGS + GPIO_SETDATAOUT, (1 << i) << 21);
        busywait(TIME);
        _put32(SOC_GPIO_1_REGS + GPIO_CLEARDATAOUT, (1 << i) << 21);
        busywait(TIME);
        // Move on to next LED
        i = (i + 1) % 4;
    }
    return 0;
}
