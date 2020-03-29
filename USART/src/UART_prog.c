#include "STD_TYPES.h"
#include "Bit_math.h"
#include "UART_int.h"
#include "UART_reg.h"

void USART_Init(void)
{
	/* Select 1 Start bit, 9 Data bits, n Stop bit */
	SET_BIT( USART1->CR1 , USART_CR1_M);
	
	/* Enable USART1 & Transmitter & Receiver */
	SET_BIT( USART1->CR1 , USART_CR1_UE);
	SET_BIT( USART1->CR1 , USART_CR1_TE);
	SET_BIT( USART1->CR1 , USART_CR1_RE);

	/* Select odd parity */
	SET_BIT( USART1->CR1 , USART_CR1_PS);

	/* Enable Parity Contol */
	SET_BIT( USART1->CR1 , USART_CR1_PCE);

	/* Select one stop bit */
	CLR_BIT( USART1->CR2 , USART_CR2_STOP_0);
	CLR_BIT( USART1->CR2 , USART_CR2_STOP_1);

	/* Select our Baudrate 9600 */
	USART1->BRR = 0x341;
	
	
	  
}

void USART_SendData(u8 Data)
{
	
	while ((USART1->SR | (1<<USART_TXE)) == 0 );
	  
	USART1->DR = (Data & 0x1FF);
	
}

u8 	USART_ReceiveData(void)
{
	
	u8 x ;
	
	while ((USART1->SR | (1<<USART_RXNE)) == 0 );

	x = (USART1->DR & 0x1FF) ;
	
	return x;
	
}

