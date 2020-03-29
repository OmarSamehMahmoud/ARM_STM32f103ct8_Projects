#ifndef _UART_REG_H
#define _UART_REG_H

#include "STD_Types.h"
#include "Bit_Math.h"

typedef struct
{
		u32 SR;
		u32 DR;
		u32 BRR;
		u32 CR1;
		u32 CR2;
		u32 CR3;
		u32 GTPR;
		
}USART;

#define      			USART1			((USART*)0x40013800)
#define      			USART2 			((USART*)0x40004400)
#define      			USART3 			((USART*)0x40004800)
#define      			UART4 			((USART*)0x40004C00)
#define      			UART5 			((USART*)0x40005000)

/******************  Bit definition for USART_CR1 register  *******************/
#define  USART_CR1_SBK                       0            /*Send Break                             */
#define  USART_CR1_RWU                       1            /*Receiver wakeup                        */
#define  USART_CR1_RE                        2            /*Receiver Enable                        */
#define  USART_CR1_TE                        3            /*Transmitter Enable                     */
#define  USART_CR1_IDLEIE                    4            /*IDLE Interrupt Enable                  */
#define  USART_CR1_RXNEIE                  ` 5            /*RXNE Interrupt Enable                  */
#define  USART_CR1_TCIE                      6            /*Transmission Complete Interrupt Enable */
#define  USART_CR1_TXEIE                 	 7            /*PE Interrupt Enable                    */
#define  USART_CR1_PEIE                      8            /*PE Interrupt Enable                    */
#define  USART_CR1_PS                        9            /*Parity Selection                       */
#define  USART_CR1_PCE                       10           /*Parity Control Enable                  */
#define  USART_CR1_WAKE                   	 11           /*Wakeup method                          */
#define  USART_CR1_M                       	 12           /*Word length                            */
#define  USART_CR1_UE                      	 13           /*USART Enable                           */


/******************  Bit definition for USART_CR2 register  *******************/

#define  USART_CR2_STOP_0                    12            /*Bit 0 */
#define  USART_CR2_STOP_1                    13            /*Bit 1 */

/******************  Bit definition for USART_CR3 register  *******************/
#define  USART_CR3_EIE                       0            /*Error Interrupt Enable      */
#define  USART_CR3_IREN                      1            /*IrDA mode Enable            */
#define  USART_CR3_IRLP                      2            /*IrDA Low-Power              */
#define  USART_CR3_HDSEL                     3            /*Half-Duplex Selection       */
#define  USART_CR3_NACK                      4            /*Smartcard NACK enable       */
#define  USART_CR3_SCEN                      5            /*Smartcard mode enable       */
#define  USART_CR3_DMAR                      6            /*DMA Enable Receiver         */
#define  USART_CR3_DMAT                      7            /*DMA Enable Transmitter      */
#define  USART_CR3_RTSE                      8            /*RTS Enable                  */
#define  USART_CR3_CTSE                      9            /*CTS Enable                  */
#define  USART_CR3_CTSIE                     10           /*CTS Interrupt Enable        */


#endif
