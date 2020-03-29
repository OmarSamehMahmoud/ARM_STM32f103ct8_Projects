/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION :Main   [ main.c]    RCC_GPIO_Driver         */
/* DATE        : 6 August 2019                              */
/* VERSION     : V01                                        */
/************************************************************/
#include "STD_Types.h"
#include "Bit_Math.h"
#include "RCC_int.h"
#include "DIO_int.h"
#include "UART_int.h"

int main (void)
{
	u8 y;

	RCC_Init();
	RCC_voidEnableClock(RCC_CLK_IOPA);
	RCC_voidEnableClock(RCC_USART1_EN);

	GPIO_voidInit();

	DIO_SetPinValue(PORTA,PIN9,HIGH); //TX1
	DIO_SetPinValue(PORTA,PIN10,HIGH); //RX1


	USART_Init();

	while (1)
	{
		USART_SendData('1');

	/*	y=USART_ReceiveData();

		switch(y)
		{
		case 'i':
			DIO_SetPinValue(PORTA,PIN0,HIGH);
			break;
		case 'o':
			DIO_SetPinValue(PORTA,PIN0,LOW);
			break;
		}
*/
	}
	return 0 ;
}
