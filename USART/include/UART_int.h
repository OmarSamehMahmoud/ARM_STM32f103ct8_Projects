#ifndef _UART_INT_H
#define _UART_INT_H


#define  		 	USART_TXE			7
#define  		 	USART_RXNE			5

void USART_Init(void);


void USART_SendData(u8 Data);


u8 	USART_ReceiveData(void);


#endif
