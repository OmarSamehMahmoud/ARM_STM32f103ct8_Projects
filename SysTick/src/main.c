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
#include "Systick_int.h"


int main (void)
{
	RCC_Init();
	Systick_Init(7999);


	RCC_voidEnableClock(RCC_CLK_IOPA);

	GPIO_voidInit();




	while (1)
	{
		DIO_SetPinValue(PORTA,PIN0,HIGH);
		_delay_ms(500);
		DIO_SetPinValue(PORTA,PIN0,LOW);
		_delay_ms(500);
	}
	return 0 ;
}
