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

int main (void)
{
	RCC_Init();
	RCC_voidEnableClock(RCC_CLK_IOPA);

	GPIO_voidInit();

	while (1)
	{
		DIO_SetPinValue(PORTA,PIN1,HIGH);

	}
	return 0 ;
}
