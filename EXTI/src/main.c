/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : NVIC EXTI DRIVER    [ main.c]                   */
/* DATE        : 19 August 2019                             */
/************************************************************/

#include "STD_TYPES.h"
#include "Bit_Math.h"
#include "AFIO_int.h"
#include "RCC_int.h"
#include "DIO_int.h"
#include "NVIC_int.h"
#include "NVIC_reg.h"
#include "Systick_int.h"
#include "EXTI_init.h"

/***************************************************************/
/* Description : This function is main entry of our Program    */   
/***************************************************************/

void main(void)
{
	/*RCC Initialize */
	RCC_Init();
	
	/*Enable clock for all used peripherals - GPIOA - AFIO*/
	RCC_voidEnableClock(RCC_CLK_IOPA);
	RCC_voidEnableClock(RCC_CLK_AFIO);

	/*GPIOA Initialize */
	GPIO_voidInit();
	
	/*Enable UART Interrupt*/
	NVIC_EnableInt(EXTI1);
	
	AFIO_voidinit();
		AFIO_voidExtInterrupt(PORTA,PIN1);

	
		EXTI_InterruptEnable(1);
		EXTI_TriggerSelection(1,Rising_Edge);

	while(1);
	
}

/***************************************************************/
/* Description : This function is our ISR for execute Interrupt*/   
/***************************************************************/

void EXT1_IRQHandler(void)
{
	DIO_SetPinValue(PORTA,PIN0,HIGH);
	_delay_ms(1000);
	DIO_SetPinValue(PORTA,PIN0,LOW);
	_delay_ms(1000);
	EXTI_PendingClear(1);
}
