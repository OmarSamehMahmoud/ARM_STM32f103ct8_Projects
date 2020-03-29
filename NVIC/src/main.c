/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : NVIC DRIVER    [ main.c]                   */
/* DATE        : 19 August 2019                             */
/************************************************************/

#include "STD_TYPES.h"
#include "Bit_Math.h"

#include "RCC_int.h"
#include "DIO_int.h"
#include "NVIC_int.h"

/***************************************************************/
/* Description : This function is main entry of our Program    */   
/***************************************************************/

void main(void)
{
	/*RCC Initialize */
	RCC_Init();
	
	/*Enable clock for all used peripherals - GPIOA */
	RCC_voidEnableClock(RCC_CLK_IOPA);

	/*GPIOA Initialize */
	GPIO_voidInit();
	

	/*Enable UART Interrupt*/
	NVIC_EnableInt(EXTI0);
	NVIC_EnableInt(EXTI1);

	/*Init NVIC*/
	myNVIC_Init();

	//	asm("MOV R0,#1");
	//	asm("MSR PRIMASK,R0");

	/*Set Priority */

	NVIC_SetPriority(EXTI0,0x40);
	NVIC_SetPriority(EXTI1,0x30);
	
	/*Set Pending UART Interrupt*/
	NVIC_SetPending(EXTI0);

	
}

/***************************************************************/
/* Description : This function is our ISR for execute Interrupt*/   
/***************************************************************/


void USART1_IRQHandler(void)
{
	DIO_SetPinValue(PORTA,PIN0,HIGH);
}


void EXTI0_IRQHandler(void)
{
	//red on
	DIO_SetPinValue(PORTA,PIN0,HIGH);
	NVIC_SetPending(7);
}

void EXTI1_IRQHandler(void)
{
	//red on
	DIO_SetPinValue(PORTA,PIN2,HIGH);
	while(1);
}
