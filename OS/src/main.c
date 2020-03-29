/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION :Main   [ main.c]    Operating System        */
/* DATE        : 6 September 2019                           */
/* VERSION     : V01                                        */
/************************************************************/

#include "STD_Types.h"
#include "Bit_Math.h"
#include "RCC_int.h"
#include "DIO_int.h"
#include "Systick_int.h"
#include "OS_Init.h"

/**************************Function Of Task 1***********************/
void Blink_Red_Off(void) {
	DIO_SetPinValue(PORTA, PIN0,LOW);
}

/**************************Function Of Task 2***********************/
void Blink_Green_On(void) {
	DIO_SetPinValue(PORTA, PIN1, HIGH);

}

/**************************Function Of Task 1***********************/
void Blink_Red_On(void) {
	DIO_SetPinValue(PORTA, PIN0,HIGH);
}

/**************************Function Of Task 2***********************/
void Blink_Green_off(void) {
	DIO_SetPinValue(PORTA, PIN1,LOW);
}

/***************************Main Function***************************/
int main(void) {

	/*Initialization of RCC*/
	RCC_Init();

	/*Enable RCC Clock For IOPA*/
	RCC_voidEnableClock(RCC_CLK_IOPA);

	/*Calling of GPIO Initialization*/
	DIO_init();

	/*Simple Operating System Creating*/
	OS_Init();

	/*Infinite Loop and It's Return*/
	while (1) {

	}
	return 0;
}
