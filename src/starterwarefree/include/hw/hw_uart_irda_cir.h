

/**
 *  @Component:   UART
 *
 *  @Filename:    hw_uart_irda_cir.h
 *
 ============================================================================ */
/*
* Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
*/
/*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/



#ifndef _HW_UART_H_
#define _HW_UART_H_

#ifdef __cplusplus
extern "C" {
#endif


/***********************************************************************\
 * Register arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundle arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundles Definition
\***********************************************************************/



/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define UART_DLL   (0x0)
#define UART_RHR   (0x0)
#define UART_THR   (0x0)
#define UART_DLH   (0x4)
#define UART_IER   (0x4)
#define UART_EFR   (0x8)
#define UART_FCR   (0x8)
#define UART_IIR   (0x8)
#define UART_LCR   (0xC)
#define UART_MCR   (0x10)
#define UART_XON1_ADDR1   (0x10)
#define UART_LSR   (0x14)
#define UART_XON2_ADDR2   (0x14)
#define UART_MSR   (0x18)
#define UART_TCR   (0x18)
#define UART_XOFF1 (0x18)
#define UART_SPR   (0x1C)
#define UART_TLR   (0x1C)
#define UART_XOFF2 (0x1C)
#define UART_MDR1   (0x20)
#define UART_MDR2   (0x24)
#define UART_SFLSR   (0x28)
#define UART_TXFLL   (0x28)
#define UART_RESUME   (0x2C)
#define UART_TXFLH   (0x2C)
#define UART_RXFLL   (0x30)
#define UART_SFREGL   (0x30)
#define UART_RXFLH   (0x34)
#define UART_SFREGH   (0x34)
#define UART_BLR   (0x38)
#define UART_UASR   (0x38)
#define UART_ACREG   (0x3C)
#define UART_SCR   (0x40)
#define UART_SSR   (0x44)
#define UART_EBLR   (0x48)
#define UART_MVR   (0x50)
#define UART_SYSC   (0x54)
#define UART_SYSS   (0x58)
#define UART_WER   (0x5C)
#define UART_CFPS   (0x60)
#define UART_RXFIFO_LVL   (0x64)
#define UART_TXFIFO_LVL   (0x68)
#define UART_IER2   (0x6C)
#define UART_ISR2   (0x70)
#define UART_FREQ_SEL   (0x74)
#define UART_MDR3   (0x80)
#define UART_TX_DMA_THRESHOLD   (0x84)

/**************************************************************************\
 * Field Definition Macros
\**************************************************************************/

/* DLL */
#define UART_DLL_CLOCK_LSB   (0x000000FFu)
#define UART_DLL_CLOCK_LSB_SHIFT   (0x00000000u)


/* RHR */
#define UART_RHR_RHR   (0x000000FFu)
#define UART_RHR_RHR_SHIFT   (0x00000000u)


/* THR */
#define UART_THR_THR   (0x000000FFu)
#define UART_THR_THR_SHIFT   (0x00000000u)


/* DLH */
#define UART_DLH_CLOCK_MSB   (0x0000003Fu)
#define UART_DLH_CLOCK_MSB_SHIFT   (0x00000000u)

/* IER */

/* IER - UART Register */
#define UART_IER_CTS_IT   (0x00000080u)
#define UART_IER_CTS_IT_SHIFT   (0x00000007u)
#define UART_IER_CTS_IT_DISABLE   (0x0u)
#define UART_IER_CTS_IT_ENABLE   (0x1u)

#define UART_IER_RTS_IT   (0x00000040u)
#define UART_IER_RTS_IT_SHIFT   (0x00000006u)
#define UART_IER_RTS_IT_DISABLE   (0x0u)
#define UART_IER_RTS_IT_ENABLE   (0x1u)

#define UART_IER_XOFF_IT   (0x00000020u)
#define UART_IER_XOFF_IT_SHIFT   (0x00000005u)
#define UART_IER_XOFF_IT_DISABLE   (0x0u)
#define UART_IER_XOFF_IT_ENABLE   (0x1u)

#define UART_IER_SLEEP_MODE_IT   (0x00000010u)
#define UART_IER_SLEEP_MODE_IT_SHIFT   (0x00000004u)
#define UART_IER_SLEEP_MODE_IT_DISABLE   (0x0u)
#define UART_IER_SLEEP_MODE_IT_ENABLE   (0x1u)

#define UART_IER_MODEM_STS_IT   (0x00000008u)
#define UART_IER_MODEM_STS_IT_SHIFT   (0x00000003u)
#define UART_IER_MODEM_STS_IT_DISABLE   (0x0u)
#define UART_IER_MODEM_STS_IT_ENABLE   (0x1u)

#define UART_IER_LINE_STS_IT   (0x00000004u)
#define UART_IER_LINE_STS_IT_SHIFT   (0x00000002u)
#define UART_IER_LINE_STS_IT_DISABLE   (0x0u)
#define UART_IER_LINE_STS_IT_ENABLE   (0x1u)

#define UART_IER_THR_IT   (0x00000002u)
#define UART_IER_THR_IT_SHIFT   (0x00000001u)
#define UART_IER_THR_IT_DISABLE   (0x0u)
#define UART_IER_THR_IT_ENABLE   (0x1u)

#define UART_IER_RHR_IT   (0x00000001u)
#define UART_IER_RHR_IT_SHIFT   (0x00000000u)
#define UART_IER_RHR_IT_DISABLE   (0x0u)
#define UART_IER_RHR_IT_ENABLE   (0x1u)

/* IER - IrDA Register */
#define UART_IER_IRDA_EOF_IT   (0x00000080u)
#define UART_IER_IRDA_EOF_IT_SHIFT   (0x00000007u)
#define UART_IER_IRDA_EOF_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_EOF_IT_ENABLE   (0x1u)

#define UART_IER_IRDA_LINE_STS_IT   (0x00000040u)
#define UART_IER_IRDA_LINE_STS_IT_SHIFT   (0x00000006u)
#define UART_IER_IRDA_LINE_STS_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_LINE_STS_IT_ENABLE   (0x1u)

#define UART_IER_IRDA_TX_STATUS_IT   (0x00000020u)
#define UART_IER_IRDA_TX_STATUS_IT_SHIFT   (0x00000005u)
#define UART_IER_IRDA_TX_STATUS_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_TX_STATUS_IT_ENABLE   (0x1u)

#define UART_IER_IRDA_STS_FIFO_TRIG_IT   (0x00000010u)
#define UART_IER_IRDA_STS_FIFO_TRIG_IT_SHIFT   (0x00000004u)
#define UART_IER_IRDA_STS_FIFO_TRIG_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_STS_FIFO_TRIG_IT_ENABLE   (0x0u)

#define UART_IER_IRDA_RX_OVERRUN_IT   (0x00000008u)
#define UART_IER_IRDA_RX_OVERRUN_IT_SHIFT   (0x00000003u)
#define UART_IER_IRDA_RX_OVERRUN_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_RX_OVERRUN_IT_ENABLE   (0x1u)

#define UART_IER_IRDA_LAST_RX_BYTE_IT   (0x00000004u)
#define UART_IER_IRDA_LAST_RX_BYTE_IT_SHIFT   (0x00000002u)
#define UART_IER_IRDA_LAST_RX_BYTE_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_LAST_RX_BYTE_IT_ENABLE   (0x1u)

#define UART_IER_IRDA_THR_IT   (0x00000002u)
#define UART_IER_IRDA_THR_IT_SHIFT   (0x00000001u)
#define UART_IER_IRDA_THR_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_THR_IT_ENABLE   (0x1u)

#define UART_IER_IRDA_RHR_IT   (0x00000001u)
#define UART_IER_IRDA_RHR_IT_SHIFT   (0x00000000u)
#define UART_IER_IRDA_RHR_IT_DISABLE   (0x0u)
#define UART_IER_IRDA_RHR_IT_ENABLE   (0x1u)

/* IER - CIR Register */
#define UART_IER_CIR_TX_STATUS_IT   (0x00000020u)
#define UART_IER_CIR_TX_STATUS_IT_SHIFT   (0x00000005u)
#define UART_IER_CIR_TX_STATUS_IT_DISABLE   (0x0u)
#define UART_IER_CIR_TX_STATUS_IT_ENABLE   (0x1u)

#define UART_IER_CIR_RX_OVERRUN_IT   (0x00000008u)
#define UART_IER_CIR_RX_OVERRUN_IT_SHIFT   (0x00000003u)
#define UART_IER_CIR_RX_OVERRUN_IT_DISABLE   (0x0u)
#define UART_IER_CIR_RX_OVERRUN_IT_ENABLE   (0x1u)

#define UART_IER_CIR_RX_STOP_IT   (0x00000004u)
#define UART_IER_CIR_RX_STOP_IT_SHIFT   (0x00000002u)
#define UART_IER_CIR_RX_STOP_IT_DISABLE   (0x0u)
#define UART_IER_CIR_RX_STOP_IT_ENABLE   (0x1u)

#define UART_IER_CIR_THR_IT   (0x00000002u)
#define UART_IER_CIR_THR_IT_SHIFT   (0x00000001u)
#define UART_IER_CIR_THR_IT_DISABLE   (0x0u)
#define UART_IER_CIR_THR_IT_ENABLE   (0x1u)

#define UART_IER_CIR_RHR_IT   (0x00000001u)
#define UART_IER_CIR_RHR_IT_SHIFT   (0x00000000u)
#define UART_IER_CIR_RHR_IT_DISABLE   (0x0u)
#define UART_IER_CIR_RHR_IT_ENABLE   (0x1u)

/* EFR */
#define UART_EFR_AUTO_CTS_EN   (0x00000080u)
#define UART_EFR_AUTO_CTS_EN_SHIFT   (0x00000007u)
#define UART_EFR_AUTO_CTS_EN_ENABLE   (0x1u)
#define UART_EFR_AUTO_CTS_EN_NORMAL   (0x0u)

#define UART_EFR_AUTO_RTS_EN   (0x00000040u)
#define UART_EFR_AUTO_RTS_EN_SHIFT   (0x00000006u)
#define UART_EFR_AUTO_RTS_EN_ENABLE   (0x1u)
#define UART_EFR_AUTO_RTS_EN_NORMAL   (0x0u)

#define UART_EFR_ENHANCED_EN   (0x00000010u)
#define UART_EFR_ENHANCED_EN_SHIFT   (0x00000004u)
#define UART_EFR_ENHANCED_EN_DISABLE   (0x0u)
#define UART_EFR_ENHANCED_EN_ENABLE   (0x1u)

#define UART_EFR_SPECIAL_CHAR_DETECT   (0x00000020u)
#define UART_EFR_SPECIAL_CHAR_DETECT_SHIFT   (0x00000005u)
#define UART_EFR_SPECIAL_CHAR_DETECT_ENABLE   (0x1u)
#define UART_EFR_SPECIAL_CHAR_DETECT_NORMAL   (0x0u)

#define UART_EFR_SW_FLOW_CONTROL   (0x0000000Fu)
#define UART_EFR_SW_FLOW_CONTROL_SHIFT   (0x00000000u)

#define UART_EFR_SW_FLOW_CONTROL_RX   (0x00000003u)
#define UART_EFR_SW_FLOW_CONTROL_RX_SHIFT   (0x00000000u)
#define UART_EFR_SW_FLOW_CONTROL_RX_NONE   (0x0u)
#define UART_EFR_SW_FLOW_CONTROL_RX_XONOFF1   (0x2u)
#define UART_EFR_SW_FLOW_CONTROL_RX_XONOFF1AND2   (0x3u)
#define UART_EFR_SW_FLOW_CONTROL_RX_XONOFF2   (0x1u)

#define UART_EFR_SW_FLOW_CONTROL_TX   (0x0000000Cu)
#define UART_EFR_SW_FLOW_CONTROL_TX_SHIFT   (0x00000002u)
#define UART_EFR_SW_FLOW_CONTROL_TX_NONE   (0x0u)
#define UART_EFR_SW_FLOW_CONTROL_TX_XONOFF1   (0x2u)
#define UART_EFR_SW_FLOW_CONTROL_TX_XONOFF1AND2   (0x3u)
#define UART_EFR_SW_FLOW_CONTROL_TX_XONOFF2   (0x1u)


/* FCR */
#define UART_FCR_DMA_MODE   (0x00000008u)
#define UART_FCR_DMA_MODE_SHIFT   (0x00000003u)
#define UART_FCR_DMA_MODE_MODE0   (0x0u)
#define UART_FCR_DMA_MODE_MODE1   (0x1u)

#define UART_FCR_FIFO_EN   (0x00000001u)
#define UART_FCR_FIFO_EN_SHIFT   (0x00000000u)
#define UART_FCR_FIFO_EN_DISABLE   (0x0u)
#define UART_FCR_FIFO_EN_ENABLE   (0x1u)

#define UART_FCR_RX_FIFO_CLEAR   (0x00000002u)
#define UART_FCR_RX_FIFO_CLEAR_SHIFT   (0x00000001u)
#define UART_FCR_RX_FIFO_CLEAR_CLEAR   (0x1u)

#define UART_FCR_RX_FIFO_TRIG   (0x000000C0u)
#define UART_FCR_RX_FIFO_TRIG_SHIFT   (0x00000006u)
#define UART_FCR_RX_FIFO_TRIG_16CHAR   (0x1u)
#define UART_FCR_RX_FIFO_TRIG_56CHAR   (0x2u)
#define UART_FCR_RX_FIFO_TRIG_60CHAR   (0x3u)
#define UART_FCR_RX_FIFO_TRIG_8CHAR   (0x0u)

#define UART_FCR_TX_FIFO_CLEAR   (0x00000004u)
#define UART_FCR_TX_FIFO_CLEAR_SHIFT   (0x00000002u)
#define UART_FCR_TX_FIFO_CLEAR_CLEAR   (0x1u)

#define UART_FCR_TX_FIFO_TRIG   (0x00000030u)
#define UART_FCR_TX_FIFO_TRIG_SHIFT   (0x00000004u)
#define UART_FCR_TX_FIFO_TRIG_8SPACES   (0x0u)
#define UART_FCR_TX_FIFO_TRIG_16SPACES   (0x1u)
#define UART_FCR_TX_FIFO_TRIG_32SPACES   (0x2u)
#define UART_FCR_TX_FIFO_TRIG_56SPACES   (0x3u)

/* IIR */

/* IIR - UART Register. */
#define UART_IIR_FCR_MIRROR   (0x000000C0u)
#define UART_IIR_FCR_MIRROR_SHIFT   (0x00000006u)

#define UART_IIR_IT_TYPE   (0x0000003Eu)
#define UART_IIR_IT_TYPE_SHIFT   (0x00000001u)
#define UART_IIR_IT_TYPE_MODEMINT   (0x0u)
#define UART_IIR_IT_TYPE_RHRINT   (0x2u)
#define UART_IIR_IT_TYPE_RXSTATUSERROR   (0x3u)
#define UART_IIR_IT_TYPE_RXTIMEOUT   (0x6u)
#define UART_IIR_IT_TYPE_STATECHANGE   (0x10u)
#define UART_IIR_IT_TYPE_THRINT   (0x1u)
#define UART_IIR_IT_TYPE_XOFF   (0x8u)

#define UART_IIR_IT_PENDING   (0x00000001u)
#define UART_IIR_IT_PENDING_SHIFT   (0x00000000u)
#define UART_IIR_IT_PENDING_NO   (0x1u)
#define UART_IIR_IT_PENDING_YES   (0x0u)

/* IIR - IrDA Register. */
#define UART_IIR_IRDA_EOF_IT   (0x00000080u)
#define UART_IIR_IRDA_EOF_IT_SHIFT   (0x00000007u)
#define UART_IIR_IRDA_EOF_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_EOF_IT_INACTIVE   (0x0u)

#define UART_IIR_IRDA_LINE_STS_IT   (0x00000040u)
#define UART_IIR_IRDA_LINE_STS_IT_SHIFT   (0x00000006u)
#define UART_IIR_IRDA_LINE_STS_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_LINE_STS_IT_INACTIVE   (0x0u)

#define UART_IIR_IRDA_TX_STATUS_IT   (0x00000020u)
#define UART_IIR_IRDA_TX_STATUS_IT_SHIFT   (0x00000005u)
#define UART_IIR_IRDA_TX_STATUS_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_TX_STATUS_IT_INACTIVE   (0x0u)

#define UART_IIR_IRDA_STS_FIFO_IT   (0x00000010u)
#define UART_IIR_IRDA_STS_FIFO_IT_SHIFT   (0x00000004u)
#define UART_IIR_IRDA_STS_FIFO_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_STS_FIFO_IT_INACTIVE   (0x0u)

#define UART_IIR_IRDA_RX_OE_IT   (0x00000008u)
#define UART_IIR_IRDA_RX_OE_IT_SHIFT   (0x00000003u)
#define UART_IIR_IRDA_RX_OE_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_RX_OE_IT_INACTIVE   (0x0u)

#define UART_IIR_IRDA_RX_FIFO_LAST_BYTE_IT   (0x00000004u)
#define UART_IIR_IRDA_RX_FIFO_LAST_BYTE_IT_SHIFT   (0x00000002u)
#define UART_IIR_IRDA_RX_FIFO_LAST_BYTE_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_RX_FIFO_LAST_BYTE_IT_INACTIVE   (0x0u)

#define UART_IIR_IRDA_THR_IT   (0x00000002u)
#define UART_IIR_IRDA_THR_IT_SHIFT   (0x00000001u)
#define UART_IIR_IRDA_THR_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_THR_IT_INACTIVE   (0x0u)

#define UART_IIR_IRDA_RHR_IT   (0x00000001u)
#define UART_IIR_IRDA_RHR_IT_SHIFT   (0x00000000u)
#define UART_IIR_IRDA_RHR_IT_ACTIVE   (0x1u)
#define UART_IIR_IRDA_RHR_IT_INACTIVE   (0x0u)

/* IIR - CIR Register. */
#define UART_IIR_CIR_TX_STATUS_IT   (0x00000020u)
#define UART_IIR_CIR_TX_STATUS_IT_SHIFT   (0x00000005u)
#define UART_IIR_CIR_TX_STATUS_IT_ACTIVE   (0x1u)
#define UART_IIR_CIR_TX_STATUS_IT_INACTIVE   (0x0u)

#define UART_IIR_CIR_RX_OE_IT   (0x00000008u)
#define UART_IIR_CIR_RX_OE_IT_SHIFT   (0x00000003u)
#define UART_IIR_CIR_RX_OE_IT_ACTIVE   (0x1u)
#define UART_IIR_CIR_RX_OE_IT_INACTIVE   (0x0u)

#define UART_IIR_CIR_RX_STOP_IT   (0x00000004u)
#define UART_IIR_CIR_RX_STOP_IT_SHIFT   (0x00000002u)
#define UART_IIR_CIR_RX_STOP_IT_ACTIVE   (0x1u)
#define UART_IIR_CIR_RX_STOP_IT_INACTIVE   (0x0u)

#define UART_IIR_CIR_THR_IT   (0x00000002u)
#define UART_IIR_CIR_THR_IT_SHIFT   (0x00000001u)
#define UART_IIR_CIR_THR_IT_ACTIVE   (0x1u)
#define UART_IIR_CIR_THR_IT_INACTIVE   (0x0u)

#define UART_IIR_CIR_RHR_IT   (0x00000001u)
#define UART_IIR_CIR_RHR_IT_SHIFT   (0x00000000u)
#define UART_IIR_CIR_RHR_IT_ACTIVE   (0x1u)
#define UART_IIR_CIR_RHR_IT_INACTIVE   (0x0u)

/* LCR */
#define UART_LCR_BREAK_EN   (0x00000040u)
#define UART_LCR_BREAK_EN_SHIFT   (0x00000006u)
#define UART_LCR_BREAK_EN_FORCE   (0x1u)
#define UART_LCR_BREAK_EN_NORMAL   (0x0u)

#define UART_LCR_CHAR_LENGTH   (0x00000003u)
#define UART_LCR_CHAR_LENGTH_SHIFT   (0x00000000u)
#define UART_LCR_CHAR_LENGTH_5BIT   (0x0u)
#define UART_LCR_CHAR_LENGTH_6BIT   (0x1u)
#define UART_LCR_CHAR_LENGTH_7BIT   (0x2u)
#define UART_LCR_CHAR_LENGTH_8BIT   (0x3u)

#define UART_LCR_DIV_EN   (0x00000080u)
#define UART_LCR_DIV_EN_SHIFT   (0x00000007u)
#define UART_LCR_DIV_EN_DIVISOR   (0x1u)
#define UART_LCR_DIV_EN_NORMAL   (0x0u)

#define UART_LCR_NB_STOP   (0x00000004u)
#define UART_LCR_NB_STOP_SHIFT   (0x00000002u)
#define UART_LCR_NB_STOP_1BIT   (0x0u)
#define UART_LCR_NB_STOP_1P5BIT   (0x1u)
#define UART_LCR_NB_STOP_2BIT   (0x1u)

#define UART_LCR_PARITY_EN   (0x00000008u)
#define UART_LCR_PARITY_EN_SHIFT   (0x00000003u)
#define UART_LCR_PARITY_EN_DISABLE   (0x0u)
#define UART_LCR_PARITY_EN_ENABLE   (0x1u)

#define UART_LCR_PARITY_TYPE1   (0x00000010u)
#define UART_LCR_PARITY_TYPE1_SHIFT   (0x00000004u)
#define UART_LCR_PARITY_TYPE1_EVEN   (0x1u)
#define UART_LCR_PARITY_TYPE1_ODD   (0x0u)

#define UART_LCR_PARITY_TYPE2   (0x00000020u)
#define UART_LCR_PARITY_TYPE2_SHIFT   (0x00000005u)
#define UART_LCR_PARITY_TYPE2_FORCE   (0x1u)
#define UART_LCR_PARITY_TYPE2_NORMAL   (0x0u)


/* MCR */
#define UART_MCR_CD_STS_CH   (0x00000008u)
#define UART_MCR_CD_STS_CH_SHIFT   (0x00000003u)
#define UART_MCR_CD_STS_CH_FORCEHIGH   (0x0u)
#define UART_MCR_CD_STS_CH_FORCELOW   (0x1u)

#define UART_MCR_DTR   (0x00000001u)
#define UART_MCR_DTR_SHIFT   (0x00000000u)
#define UART_MCR_DTR_FORCEHIGH   (0x0u)
#define UART_MCR_DTR_FORCELOW   (0x1u)

#define UART_MCR_LOOPBACK_EN   (0x00000010u)
#define UART_MCR_LOOPBACK_EN_SHIFT   (0x00000004u)
#define UART_MCR_LOOPBACK_EN_LOOPBACK   (0x1u)
#define UART_MCR_LOOPBACK_EN_NORMAL   (0x0u)

#define UART_MCR_RI_STS_CH   (0x00000004u)
#define UART_MCR_RI_STS_CH_SHIFT   (0x00000002u)
#define UART_MCR_RI_STS_CH_FORCEHIGH   (0x0u)
#define UART_MCR_RI_STS_CH_FORCELOW   (0x1u)

#define UART_MCR_RTS   (0x00000002u)
#define UART_MCR_RTS_SHIFT   (0x00000001u)
#define UART_MCR_RTS_FORCEHIGH   (0x0u)
#define UART_MCR_RTS_FORCELOW   (0x1u)

#define UART_MCR_TCR_TLR   (0x00000040u)
#define UART_MCR_TCR_TLR_SHIFT   (0x00000006u)
#define UART_MCR_TCR_TLR_ENABLE   (0x1u)

#define UART_MCR_XON_EN   (0x00000020u)
#define UART_MCR_XON_EN_SHIFT   (0x00000005u)
#define UART_MCR_XON_EN_DISABLE   (0x0u)
#define UART_MCR_XON_EN_ENABLE   (0x1u)


/* XON1_ADDR1 */
#define UART_XON1_ADDR1_XON1_WORD1   (0x000000FFu)
#define UART_XON1_ADDR1_XON1_WORD1_SHIFT   (0x00000000u)

/* LSR */

/* LSR - UART Register */
#define UART_LSR_RX_FIFO_STS   (0x00000080u)
#define UART_LSR_RX_FIFO_STS_SHIFT   (0x00000007u)
#define UART_LSR_RX_FIFO_STS_ERROR   (0x1u)
#define UART_LSR_RX_FIFO_STS_NORMAL   (0x0u)

#define UART_LSR_TX_SR_E   (0x00000040u)
#define UART_LSR_TX_SR_E_SHIFT   (0x00000006u)
#define UART_LSR_TX_SR_E_EMPTY   (0x1u)
#define UART_LSR_TX_SR_E_NOTEMPTY   (0x0u)

#define UART_LSR_TX_FIFO_E   (0x00000020u)
#define UART_LSR_TX_FIFO_E_SHIFT   (0x00000005u)
#define UART_LSR_TX_FIFO_E_EMPTY   (0x1u)
#define UART_LSR_TX_FIFO_E_NOTEMPTY   (0x0u)

#define UART_LSR_RX_BI   (0x00000010u)
#define UART_LSR_RX_BI_SHIFT   (0x00000004u)
#define UART_LSR_RX_BI_BREAK   (0x1u)
#define UART_LSR_RX_BI_NONE   (0x0u)

#define UART_LSR_RX_FE   (0x00000008u)
#define UART_LSR_RX_FE_SHIFT   (0x00000003u)
#define UART_LSR_RX_FE_ERROR   (0x1u)
#define UART_LSR_RX_FE_NONE   (0x0u)

#define UART_LSR_RX_PE   (0x00000004u)
#define UART_LSR_RX_PE_SHIFT   (0x00000002u)
#define UART_LSR_RX_PE_ERROR   (0x1u)
#define UART_LSR_RX_PE_NONE   (0x0u)

#define UART_LSR_RX_OE   (0x00000002u)
#define UART_LSR_RX_OE_SHIFT   (0x00000001u)
#define UART_LSR_RX_OE_ERROR   (0x1u)
#define UART_LSR_RX_OE_NONE   (0x0u)

#define UART_LSR_RX_FIFO_E   (0x00000001u)
#define UART_LSR_RX_FIFO_E_SHIFT   (0x00000000u)
#define UART_LSR_RX_FIFO_E_EMPTY   (0x0u)
#define UART_LSR_RX_FIFO_E_NOTEMPTY   (0x1u)

/* LSR - IrDA Register */
#define UART_LSR_THR_EMPTY   (0x00000080u)
#define UART_LSR_THR_EMPTY_SHIFT   (0x00000007u)
#define UART_LSR_THR_EMPTY_EMPTY   (0x1u)
#define UART_LSR_THR_EMPTY_NOTEMPTY   (0x0u)

#define UART_LSR_STS_FIFO_FULL   (0x00000040u)
#define UART_LSR_STS_FIFO_FULL_SHIFT   (0x00000006u)
#define UART_LSR_STS_FIFO_FULL_FULL   (0x1u)
#define UART_LSR_STS_FIFO_FULL_NOTFULL   (0x0u)

#define UART_LSR_RX_LAST_BYTE   (0x00000020u)
#define UART_LSR_RX_LAST_BYTE_SHIFT   (0x00000005u)
#define UART_LSR_RX_LAST_BYTE_NO   (0x0u)
#define UART_LSR_RX_LAST_BYTE_YES   (0x1u)

#define UART_LSR_FRAME_TOO_LONG   (0x00000010u)
#define UART_LSR_FRAME_TOO_LONG_SHIFT   (0x00000004u)
#define UART_LSR_FRAME_TOO_LONG_ERROR   (0x1u)
#define UART_LSR_FRAME_TOO_LONG_NONE   (0x0u)

#define UART_LSR_ABORT   (0x00000008u)
#define UART_LSR_ABORT_SHIFT   (0x00000003u)
#define UART_LSR_ABORT_ERROR   (0x1u)
#define UART_LSR_ABORT_NONE   (0x0u)

#define UART_LSR_CRC   (0x00000004u)
#define UART_LSR_CRC_SHIFT   (0x00000002u)
#define UART_LSR_CRC_ERROR   (0x1u)
#define UART_LSR_CRC_NONE   (0x0u)

#define UART_LSR_STS_FIFO_E   (0x00000002u)
#define UART_LSR_STS_FIFO_E_SHIFT   (0x00000001u)
#define UART_LSR_STS_FIFO_E_EMPTY   (0x1u)
#define UART_LSR_STS_FIFO_E_NOTEMPTY   (0x0u)

#define UART_LSR_IRDA_RX_FIFO_E   (0x00000001u)
#define UART_LSR_IRDA_RX_FIFO_E_SHIFT   (0x00000000u)
#define UART_LSR_IRDA_RX_FIFO_E_EMPTY   (0x1u)
#define UART_LSR_IRDA_RX_FIFO_E_NOTEMPTY   (0x0u)

/* LSR - CIR Register */
#define UART_LSR_CIR_THR_EMPTY   (0x00000080u)
#define UART_LSR_CIR_THR_EMPTY_SHIFT   (0x00000007u)
#define UART_LSR_CIR_THR_EMPTY_EMPTY   (0x1u)
#define UART_LSR_CIR_THR_EMPTY_NOTEMPTY   (0x0u)

#define UART_LSR_CIR_RX_STOP   (0x00000020u)
#define UART_LSR_RX_STOP_SHIFT   (0x00000005u)
#define UART_LSR_RX_STOP_COMPLETE   (0x1u)
#define UART_LSR_RX_STOP_ONGOING   (0x0u)

#define UART_LSR_CIR_RX_FIFO_E   (0x00000001u)
#define UART_LSR_CIR_RX_FIFO_E_SHIFT   (0x00000000u)
#define UART_LSR_CIR_RX_FIFO_E_EMPTY   (0x1u)
#define UART_LSR_CIR_RX_FIFO_E_NOTEMPTY   (0x0u)

/* XON2_ADDR2 */
#define UART_XON2_ADDR2_XON2_WORD2   (0x000000FFu)
#define UART_XON2_ADDR2_XON2_WORD2_SHIFT   (0x00000000u)


/* MSR */
#define UART_MSR_CTS_STS   (0x00000001u)
#define UART_MSR_CTS_STS_SHIFT   (0x00000000u)
#define UART_MSR_CTS_STS_CHANGED   (0x1u)

#define UART_MSR_DCD_STS   (0x00000008u)
#define UART_MSR_DCD_STS_SHIFT   (0x00000003u)
#define UART_MSR_DCD_STS_CHANGED   (0x1u)

#define UART_MSR_DSR_STS   (0x00000002u)
#define UART_MSR_DSR_STS_SHIFT   (0x00000001u)
#define UART_MSR_DSR_STS_CHANGED   (0x1u)

#define UART_MSR_NCD_STS   (0x00000080u)
#define UART_MSR_NCD_STS_SHIFT   (0x00000007u)

#define UART_MSR_NCTS_STS   (0x00000010u)
#define UART_MSR_NCTS_STS_SHIFT   (0x00000004u)

#define UART_MSR_NDSR_STS   (0x00000020u)
#define UART_MSR_NDSR_STS_SHIFT   (0x00000005u)

#define UART_MSR_NRI_STS   (0x00000040u)
#define UART_MSR_NRI_STS_SHIFT   (0x00000006u)

#define UART_MSR_RI_STS   (0x00000004u)
#define UART_MSR_RI_STS_SHIFT   (0x00000002u)
#define UART_MSR_RI_STS_CHANGED   (0x1u)


/* TCR */
#define UART_TCR_RX_FIFO_TRIG_HALT   (0x0000000Fu)
#define UART_TCR_RX_FIFO_TRIG_HALT_SHIFT   (0x00000000u)

#define UART_TCR_RX_FIFO_TRIG_START   (0x000000F0u)
#define UART_TCR_RX_FIFO_TRIG_START_SHIFT   (0x00000004u)


/* XOFF1 */
#define UART_XOFF1_WORD1   (0x000000FFu)
#define UART_XOFF1_WORD1_SHIFT   (0x00000000u)


/* SPR */
#define UART_SPR_SPR_WORD   (0x000000FFu)
#define UART_SPR_SPR_WORD_SHIFT   (0x00000000u)


/* TLR */
#define UART_TLR_RX_FIFO_TRIG_DMA   (0x000000F0u)
#define UART_TLR_RX_FIFO_TRIG_DMA_SHIFT   (0x00000004u)

#define UART_TLR_TX_FIFO_TRIG_DMA   (0x0000000Fu)
#define UART_TLR_TX_FIFO_TRIG_DMA_SHIFT   (0x00000000u)


/* XOFF2 */
#define UART_XOFF2_WORD2   (0x000000FFu)
#define UART_XOFF2_WORD2_SHIFT   (0x00000000u)


/* MDR1 */
#define UART_MDR1_FRAME_END_MODE   (0x00000080u)
#define UART_MDR1_FRAME_END_MODE_SHIFT   (0x00000007u)
#define UART_MDR1_FRAME_END_MODE_EOT   (0x1u)
#define UART_MDR1_FRAME_END_MODE_LENGTH   (0x0u)

#define UART_MDR1_IR_SLEEP   (0x00000008u)
#define UART_MDR1_IR_SLEEP_SHIFT   (0x00000003u)
#define UART_MDR1_IR_SLEEP_DISABLED   (0x0u)
#define UART_MDR1_IR_SLEEP_ENABLED   (0x1u)

#define UART_MDR1_MODE_SELECT   (0x00000007u)
#define UART_MDR1_MODE_SELECT_SHIFT   (0x00000000u)
#define UART_MDR1_MODE_SELECT_CIR   (0x6u)
#define UART_MDR1_MODE_SELECT_DISABLED   (0x7u)
#define UART_MDR1_MODE_SELECT_FIR   (0x5u)
#define UART_MDR1_MODE_SELECT_MIR   (0x4u)
#define UART_MDR1_MODE_SELECT_SIR   (0x1u)
#define UART_MDR1_MODE_SELECT_UART13X   (0x3u)
#define UART_MDR1_MODE_SELECT_UART16X   (0x0u)
#define UART_MDR1_MODE_SELECT_UART16XAUTO   (0x2u)

#define UART_MDR1_SCT   (0x00000020u)
#define UART_MDR1_SCT_SHIFT   (0x00000005u)
#define UART_MDR1_SCT_ACREG_SCTX   (0x1u)
#define UART_MDR1_SCT_IMMEDIATE   (0x0u)

#define UART_MDR1_SET_TXIR   (0x00000010u)
#define UART_MDR1_SET_TXIR_SHIFT   (0x00000004u)
#define UART_MDR1_SET_TXIR_FORCEHIGH   (0x1u)
#define UART_MDR1_SET_TXIR_FORCELOW   (0x0u)

#define UART_MDR1_SIP_MODE   (0x00000040u)
#define UART_MDR1_SIP_MODE_SHIFT   (0x00000006u)
#define UART_MDR1_SIP_MODE_AUTO   (0x1u)
#define UART_MDR1_SIP_MODE_MANUAL   (0x0u)


/* MDR2 */
#define UART_MDR2_CIR_PULSE_MODE   (0x00000030u)
#define UART_MDR2_CIR_PULSE_MODE_SHIFT   (0x00000004u)
#define UART_MDR2_CIR_PULSE_MODE_WIDTH3   (0x0u)
#define UART_MDR2_CIR_PULSE_MODE_WIDTH4   (0x1u)
#define UART_MDR2_CIR_PULSE_MODE_WIDTH5   (0x2u)
#define UART_MDR2_CIR_PULSE_MODE_WIDTH6   (0x3u)

#define UART_MDR2_IRRXINVERT   (0x00000040u)
#define UART_MDR2_IRRXINVERT_SHIFT   (0x00000006u)
#define UART_MDR2_IRRXINVERT_INVERT   (0x0u)
#define UART_MDR2_IRRXINVERT_NOINVERT   (0x1u)

#define UART_MDR2_IRTX_UNDERRUN   (0x00000001u)
#define UART_MDR2_IRTX_UNDERRUN_SHIFT   (0x00000000u)
#define UART_MDR2_IRTX_UNDERRUN_ERROR   (0x1u)
#define UART_MDR2_IRTX_UNDERRUN_NONE   (0x0u)

#define UART_MDR2_SET_TXIR_ALT   (0x00000080u)
#define UART_MDR2_SET_TXIR_ALT_SHIFT   (0x00000007u)
#define UART_MDR2_SET_TXIR_ALT_ALT   (0x1u)
#define UART_MDR2_SET_TXIR_ALT_NORMAL   (0x0u)

#define UART_MDR2_STS_FIFO_TRIG   (0x00000006u)
#define UART_MDR2_STS_FIFO_TRIG_SHIFT   (0x00000001u)
#define UART_MDR2_STS_FIFO_TRIG_1ENTRY   (0x0u)
#define UART_MDR2_STS_FIFO_TRIG_4ENTRIES   (0x1u)
#define UART_MDR2_STS_FIFO_TRIG_7ENTRIES   (0x2u)
#define UART_MDR2_STS_FIFO_TRIG_8ENTRIES   (0x3u)

#define UART_MDR2_UART_PULSE   (0x00000008u)
#define UART_MDR2_UART_PULSE_SHIFT   (0x00000003u)
#define UART_MDR2_UART_PULSE_NORMAL   (0x0u)
#define UART_MDR2_UART_PULSE_SHAPING   (0x1u)


/* SFLSR */
#define UART_SFLSR_ABORT_DETECT   (0x00000004u)
#define UART_SFLSR_ABORT_DETECT_SHIFT   (0x00000002u)
#define UART_SFLSR_ABORT_DETECT_TRUE   (0x1u)

#define UART_SFLSR_CRC_ERROR   (0x00000002u)
#define UART_SFLSR_CRC_ERROR_SHIFT   (0x00000001u)
#define UART_SFLSR_CRC_ERROR_TRUE   (0x1u)

#define UART_SFLSR_FRAME_TOO_LONG_ERROR   (0x00000008u)
#define UART_SFLSR_FRAME_TOO_LONG_ERROR_SHIFT   (0x00000003u)
#define UART_SFLSR_FRAME_TOO_LONG_ERROR_TRUE   (0x1u)

#define UART_SFLSR_OE_ERROR   (0x00000010u)
#define UART_SFLSR_OE_ERROR_SHIFT   (0x00000004u)
#define UART_SFLSR_OE_ERROR_TRUE   (0x1u)


/* TXFLL */
#define UART_TXFLL_TXFLL   (0x000000FFu)
#define UART_TXFLL_TXFLL_SHIFT   (0x00000000u)


/* RESUME */
#define UART_RESUME_RESUME   (0x000000FFu)
#define UART_RESUME_RESUME_SHIFT   (0x00000000u)


/* TXFLH */
#define UART_TXFLH_TXFLH   (0x0000001Fu)
#define UART_TXFLH_TXFLH_SHIFT   (0x00000000u)


/* RXFLL */
#define UART_RXFLL_RXFLL   (0x000000FFu)
#define UART_RXFLL_RXFLL_SHIFT   (0x00000000u)


/* SFREGL */
#define UART_SFREGL_SFREGL   (0x000000FFu)
#define UART_SFREGL_SFREGL_SHIFT   (0x00000000u)


/* RXFLH */
#define UART_RXFLH_RXFLH   (0x0000000Fu)
#define UART_RXFLH_RXFLH_SHIFT   (0x00000000u)


/* SFREGH */
#define UART_SFREGH_SFREGH   (0x0000000Fu)
#define UART_SFREGH_SFREGH_SHIFT   (0x00000000u)


/* BLR */
#define UART_BLR_STS_FIFO_RESET   (0x00000080u)
#define UART_BLR_STS_FIFO_RESET_SHIFT   (0x00000007u)

#define UART_BLR_XBOF_TYPE   (0x00000040u)
#define UART_BLR_XBOF_TYPE_SHIFT   (0x00000006u)
#define UART_BLR_XBOF_TYPE_0XC0   (0x1u)
#define UART_BLR_XBOF_TYPE_0XFF   (0x0u)


/* UASR */
#define UART_UASR_BIT_BY_CHAR   (0x00000020u)
#define UART_UASR_BIT_BY_CHAR_SHIFT   (0x00000005u)
#define UART_UASR_BIT_BY_CHAR_7BITS   (0x0u)
#define UART_UASR_BIT_BY_CHAR_8BITS   (0x1u)

#define UART_UASR_PARITY_TYPE   (0x000000C0u)
#define UART_UASR_PARITY_TYPE_SHIFT   (0x00000006u)
#define UART_UASR_PARITY_TYPE_EVEN   (0x2u)
#define UART_UASR_PARITY_TYPE_NONE   (0x0u)
#define UART_UASR_PARITY_TYPE_ODD   (0x3u)
#define UART_UASR_PARITY_TYPE_SPACE   (0x1u)

#define UART_UASR_SPEED   (0x0000001Fu)
#define UART_UASR_SPEED_SHIFT   (0x00000000u)
#define UART_UASR_SPEED_115200   (0x1u)
#define UART_UASR_SPEED_1200   (0xAu)
#define UART_UASR_SPEED_14400   (0x6u)
#define UART_UASR_SPEED_19200   (0x5u)
#define UART_UASR_SPEED_2400   (0x9u)
#define UART_UASR_SPEED_28800   (0x4u)
#define UART_UASR_SPEED_38400   (0x3u)
#define UART_UASR_SPEED_4800   (0x8u)
#define UART_UASR_SPEED_57600   (0x2u)
#define UART_UASR_SPEED_9600   (0x7u)
#define UART_UASR_SPEED_NONE   (0x0u)


/* ACREG */
#define UART_ACREG_ABORT_EN   (0x00000002u)
#define UART_ACREG_ABORT_EN_SHIFT   (0x00000001u)
#define UART_ACREG_ABORT_EN_SET   (0x2u)

#define UART_ACREG_DIS_IR_RX   (0x00000020u)
#define UART_ACREG_DIS_IR_RX_SHIFT   (0x00000005u)
#define UART_ACREG_DIS_IR_RX_DISABLE   (0x1u)
#define UART_ACREG_DIS_IR_RX_NORMAL   (0x0u)

#define UART_ACREG_DIS_TX_UNDERRUN   (0x00000010u)
#define UART_ACREG_DIS_TX_UNDERRUN_SHIFT   (0x00000004u)
#define UART_ACREG_DIS_TX_UNDERRUN_DISABLED   (0x1u)
#define UART_ACREG_DIS_TX_UNDERRUN_NORMAL   (0x0u)

#define UART_ACREG_EOT_EN   (0x00000001u)
#define UART_ACREG_EOT_EN_SHIFT   (0x00000000u)
#define UART_ACREG_EOT_EN_SET   (0x1u)

#define UART_ACREG_PULSE_TYPE   (0x00000080u)
#define UART_ACREG_PULSE_TYPE_SHIFT   (0x00000007u)
#define UART_ACREG_PULSE_TYPE_0P1875PW   (0x0u)
#define UART_ACREG_PULSE_TYPE_1P6US   (0x1u)

#define UART_ACREG_SCTX_EN   (0x00000004u)
#define UART_ACREG_SCTX_EN_SHIFT   (0x00000002u)
#define UART_ACREG_SCTX_EN_SET   (0x4u)

#define UART_ACREG_SD_MOD   (0x00000040u)
#define UART_ACREG_SD_MOD_SHIFT   (0x00000006u)
#define UART_ACREG_SD_MOD_HIGH   (0x0u)
#define UART_ACREG_SD_MOD_LOW   (0x1u)

#define UART_ACREG_SEND_SIP   (0x00000008u)
#define UART_ACREG_SEND_SIP_SHIFT   (0x00000003u)
#define UART_ACREG_SEND_SIP_SET   (0x1u)


/* SCR */
#define UART_SCR_DMA_MODE_2   (0x00000006u)
#define UART_SCR_DMA_MODE_2_SHIFT   (0x00000001u)
#define UART_SCR_DMA_MODE_2_MODE0   (0x0u)
#define UART_SCR_DMA_MODE_2_MODE1   (0x1u)
#define UART_SCR_DMA_MODE_2_MODE2   (0x2u)
#define UART_SCR_DMA_MODE_2_MODE3   (0x3u)

#define UART_SCR_DMA_MODE_CTL   (0x00000001u)
#define UART_SCR_DMA_MODE_CTL_SHIFT   (0x00000000u)
#define UART_SCR_DMA_MODE_CTL_FCR   (0x0u)
#define UART_SCR_DMA_MODE_CTL_SCR   (0x1u)

#define UART_SCR_DSR_IT   (0x00000020u)
#define UART_SCR_DSR_IT_SHIFT   (0x00000005u)
#define UART_SCR_DSR_IT_DISABLE   (0x0u)
#define UART_SCR_DSR_IT_ENABLE   (0x1u)

#define UART_SCR_RX_CTS_DSR_WAKE_UP_ENABLE   (0x00000010u)
#define UART_SCR_RX_CTS_DSR_WAKE_UP_ENABLE_SHIFT   (0x00000004u)
#define UART_SCR_RX_CTS_DSR_WAKE_UP_ENABLE_DISABLE   (0x0u)
#define UART_SCR_RX_CTS_DSR_WAKE_UP_ENABLE_ENABLE   (0x1u)

#define UART_SCR_RX_TRIG_GRANU1   (0x00000080u)
#define UART_SCR_RX_TRIG_GRANU1_SHIFT   (0x00000007u)
#define UART_SCR_RX_TRIG_GRANU1_DISABLE   (0x0u)
#define UART_SCR_RX_TRIG_GRANU1_ENABLE   (0x1u)

#define UART_SCR_TX_EMPTY_CTL_IT   (0x00000008u)
#define UART_SCR_TX_EMPTY_CTL_IT_SHIFT   (0x00000003u)
#define UART_SCR_TX_EMPTY_CTL_IT_EMPTY   (0x1u)
#define UART_SCR_TX_EMPTY_CTL_IT_NORMAL   (0x0u)

#define UART_SCR_TX_TRIG_GRANU1   (0x00000040u)
#define UART_SCR_TX_TRIG_GRANU1_SHIFT   (0x00000006u)
#define UART_SCR_TX_TRIG_GRANU1_DISABLE   (0x0u)
#define UART_SCR_TX_TRIG_GRANU1_ENABLE   (0x1u)


/* SSR */
#define UART_SSR_DMA_COUNTER_RST   (0x00000004u)
#define UART_SSR_DMA_COUNTER_RST_SHIFT   (0x00000002u)
#define UART_SSR_DMA_COUNTER_RST_MODE0   (0x0u)
#define UART_SSR_DMA_COUNTER_RST_MODE1   (0x1u)

#define UART_SSR_RX_CTS_DSR_WAKE_UP_STS   (0x00000002u)
#define UART_SSR_RX_CTS_DSR_WAKE_UP_STS_SHIFT   (0x00000001u)
#define UART_SSR_RX_CTS_DSR_WAKE_UP_STS_DETECTED   (0x1u)
#define UART_SSR_RX_CTS_DSR_WAKE_UP_STS_NONE   (0x0u)

#define UART_SSR_TX_FIFO_FULL   (0x00000001u)
#define UART_SSR_TX_FIFO_FULL_SHIFT   (0x00000000u)
#define UART_SSR_TX_FIFO_FULL_FULL   (0x1u)
#define UART_SSR_TX_FIFO_FULL_NOTFULL   (0x0u)


/* EBLR */
#define UART_EBLR_EBLR   (0x000000FFu)
#define UART_EBLR_EBLR_SHIFT   (0x00000000u)


/* MVR */
#define UART_MVR_MAJORREV   (0x000000F0u)
#define UART_MVR_MAJORREV_SHIFT   (0x00000004u)

#define UART_MVR_MINORREV   (0x0000000Fu)
#define UART_MVR_MINORREV_SHIFT   (0x00000000u)

/* SYSC */
#define UART_SYSC_AUTOIDLE   (0x00000001u)
#define UART_SYSC_AUTOIDLE_SHIFT   (0x00000000u)
#define UART_SYSC_AUTOIDLE_DISABLE   (0x0u)
#define UART_SYSC_AUTOIDLE_ENABLE   (0x1u)

#define UART_SYSC_ENAWAKEUP   (0x00000004u)
#define UART_SYSC_ENAWAKEUP_SHIFT   (0x00000002u)
#define UART_SYSC_ENAWAKEUP_DISABLE   (0x0u)
#define UART_SYSC_ENAWAKEUP_ENABLE   (0x1u)

#define UART_SYSC_IDLEMODE   (0x00000018u)
#define UART_SYSC_IDLEMODE_SHIFT   (0x00000003u)
#define UART_SYSC_IDLEMODE_FORCE   (0x0u)
#define UART_SYSC_IDLEMODE_NOIDLE   (0x1u)
#define UART_SYSC_IDLEMODE_SMART   (0x2u)
#define UART_SYSC_IDLEMODE_WAKEUP   (0x3u)

#define UART_SYSC_SOFTRESET   (0x00000002u)
#define UART_SYSC_SOFTRESET_SHIFT   (0x00000001u)
#define UART_SYSC_SOFTRESET_DONE   (0x0u)
#define UART_SYSC_SOFTRESET_INITIATE   (0x1u)


/* SYSS */
#define UART_SYSS_RESETDONE   (0x00000001u)
#define UART_SYSS_RESETDONE_SHIFT   (0x00000000u)
#define UART_SYSS_RESETDONE_DONE   (0x1u)
#define UART_SYSS_RESETDONE_ONGOING   (0x0u)


/* WER */
#define UART_WER_EVENT_0_CTS_ACTIVITY   (0x00000001u)
#define UART_WER_EVENT_0_CTS_ACTIVITY_SHIFT   (0x00000000u)
#define UART_WER_EVENT_0_CTS_ACTIVITY_DISABLE   (0x0u)
#define UART_WER_EVENT_0_CTS_ACTIVITY_ENABLE   (0x1u)

#define UART_WER_EVENT_1_DSR_ACTIVITY   (0x00000002u)
#define UART_WER_EVENT_1_DSR_ACTIVITY_SHIFT   (0x00000001u)
#define UART_WER_EVENT_1_DSR_ACTIVITY_DISABLE   (0x0u)
#define UART_WER_EVENT_1_DSR_ACTIVITY_ENABLE   (0x1u)

#define UART_WER_EVENT_2_RI_ACTIVITY   (0x00000004u)
#define UART_WER_EVENT_2_RI_ACTIVITY_SHIFT   (0x00000002u)
#define UART_WER_EVENT_2_RI_ACTIVITY_DISABLE   (0x0u)
#define UART_WER_EVENT_2_RI_ACTIVITY_ENABLE   (0x1u)

#define UART_WER_EVENT_3_DCD_CD_ACTIVITY   (0x00000008u)
#define UART_WER_EVENT_3_DCD_CD_ACTIVITY_SHIFT   (0x00000003u)
#define UART_WER_EVENT_3_DCD_CD_ACTIVITY_DISABLE   (0x0u)
#define UART_WER_EVENT_3_DCD_CD_ACTIVITY_ENABLE   (0x1u)

#define UART_WER_EVENT_4_RX_ACTIVITY   (0x00000010u)
#define UART_WER_EVENT_4_RX_ACTIVITY_SHIFT   (0x00000004u)
#define UART_WER_EVENT_4_RX_ACTIVITY_DISABLE   (0x0u)
#define UART_WER_EVENT_4_RX_ACTIVITY_ENABLE   (0x1u)

#define UART_WER_EVENT_5_RHR_INTERRUPT   (0x00000020u)
#define UART_WER_EVENT_5_RHR_INTERRUPT_SHIFT   (0x00000005u)
#define UART_WER_EVENT_5_RHR_INTERRUPT_DISABLE   (0x0u)
#define UART_WER_EVENT_5_RHR_INTERRUPT_ENABLE   (0x1u)

#define UART_WER_EVENT_6_RECEIVER_LINE_STATUS_INTERRUPT   (0x00000040u)
#define UART_WER_EVENT_6_RECEIVER_LINE_STATUS_INTERRUPT_SHIFT   (0x00000006u)
#define UART_WER_EVENT_6_RECEIVER_LINE_STATUS_INTERRUPT_DISABLE   (0x0u)
#define UART_WER_EVENT_6_RECEIVER_LINE_STATUS_INTERRUPT_ENABLE   (0x1u)

#define UART_WER_EVENT_7_TX_WAKEUP_EN   (0x00000080u)
#define UART_WER_EVENT_7_TX_WAKEUP_EN_SHIFT   (0x00000007u)
#define UART_WER_EVENT_7_TX_WAKEUP_EN_DISABLE   (0x0u)
#define UART_WER_EVENT_7_TX_WAKEUP_EN_ENABLE   (0x1u)


/* CFPS */
#define UART_CFPS_CFPS   (0x000000FFu)
#define UART_CFPS_CFPS_SHIFT   (0x00000000u)

/* RXFIFO_LVL */
#define UART_RXFIFO_LVL_RXFIFO_LVL   (0x000000FFu)
#define UART_RXFIFO_LVL_RXFIFO_LVL_SHIFT   (0x00000000u)


/* TXFIFO_LVL */
#define UART_TXFIFO_LVL_TXFIFO_LVL   (0x000000FFu)
#define UART_TXFIFO_LVL_TXFIFO_LVL_SHIFT   (0x00000000u)


/* IER2 */
#define UART_IER2_EN_RXFIFO_EMPTY   (0x00000001u)
#define UART_IER2_EN_RXFIFO_EMPTY_SHIFT   (0x00000000u)
#define UART_IER2_EN_RXFIFO_EMPTY_DISABLE   (0x0u)
#define UART_IER2_EN_RXFIFO_EMPTY_ENABLE   (0x1u)

#define UART_IER2_EN_TXFIFO_EMPTY   (0x00000002u)
#define UART_IER2_EN_TXFIFO_EMPTY_SHIFT   (0x00000001u)
#define UART_IER2_EN_TXFIFO_EMPTY_DISABLE   (0x0u)
#define UART_IER2_EN_TXFIFO_EMPTY_ENABLE   (0x1u)


/* ISR2 */
#define UART_ISR2_RXFIFO_EMPTY_STS   (0x00000001u)
#define UART_ISR2_RXFIFO_EMPTY_STS_SHIFT   (0x00000000u)
#define UART_ISR2_RXFIFO_EMPTY_STS_NONE   (0x0u)
#define UART_ISR2_RXFIFO_EMPTY_STS_PENDING   (0x1u)

#define UART_ISR2_TXFIFO_EMPTY_STS   (0x00000002u)
#define UART_ISR2_TXFIFO_EMPTY_STS_SHIFT   (0x00000001u)
#define UART_ISR2_TXFIFO_EMPTY_STS_NONE   (0x0u)
#define UART_ISR2_TXFIFO_EMPTY_STS_PENDING   (0x1u)


/* FREQ_SEL */
#define UART_FREQ_SEL_FREQ_SEL   (0x000000FFu)
#define UART_FREQ_SEL_FREQ_SEL_SHIFT   (0x00000000u)


/* MDR3 */
#define UART_MDR3_DISABLE_CIR_RX_DEMOD   (0x00000001u)
#define UART_MDR3_DISABLE_CIR_RX_DEMOD_SHIFT   (0x00000000u)
#define UART_MDR3_DISABLE_CIR_RX_DEMOD_DISABLE   (0x1u)
#define UART_MDR3_DISABLE_CIR_RX_DEMOD_ENABLE   (0x0u)

#define UART_MDR3_NONDEFAULT_FREQ   (0x00000002u)
#define UART_MDR3_NONDEFAULT_FREQ_SHIFT   (0x00000001u)
#define UART_MDR3_NONDEFAULT_FREQ_DISABLE   (0x0u)
#define UART_MDR3_NONDEFAULT_FREQ_ENABLE   (0x1u)

#define UART_MDR3_SET_DMA_TX_THRESHOLD   (0x00000004u)
#define UART_MDR3_SET_DMA_TX_THRESHOLD_SHIFT   (0x00000002u)
#define UART_MDR3_SET_TX_DMA_THRESHOLD_64   (0x0u)
#define UART_MDR3_SET_TX_DMA_THRESHOLD_REG   (0x1u)


/* TX_DMA_THRESHOLD */
#define UART_TX_DMA_THRESHOLD_TX_DMA_THRESHOLD   (0x0000003Fu)
#define UART_TX_DMA_THRESHOLD_TX_DMA_THRESHOLD_SHIFT   (0x00000000u)


#ifdef __cplusplus
}
#endif

#endif

