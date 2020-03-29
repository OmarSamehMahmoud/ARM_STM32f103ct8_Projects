/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : GPIO DRIVER    [ RCC_config.h]             */
/* DATE        : 6 August 2019                              */

/************************************************************/
#include "STD_TYPES.h"
#include "Bit_Math.h"

#include "DIO_int.h"
#include "DIO_config.h"
#include "DIO_reg.h"

/*************************************************************/
/* Description : this function Initialize DIO Pheripherial    */
/*************************************************************/

void DIO_init(void) {
	/*************** PORTS Initial Directions *******************/

	GPIOA->CRL = PORTAL_DIRECTIONS;
	GPIOA->CRH = PORTAH_DIRECTIONS;

	GPIOB->CRL = PORTBL_DIRECTIONS;
	GPIOB->CRH = PORTBH_DIRECTIONS;

	GPIOC->CRL = PORTCL_DIRECTIONS;
	GPIOC->CRH = PORTCH_DIRECTIONS;

}
/*****************************************************************/
/* Description : this function sets Pin in DIO Pheripherial      */
/*****************************************************************/

void DIO_SetPinValue(u8 port, u8 pin, u8 value) {
	switch (port) {
	case PORTA:
		if (value == HIGH) {
			SET_BIT(GPIOA -> ODR, pin);
		} else {
			CLR_BIT(GPIOA -> ODR, pin);
		}
		break;
	case PORTB:
		if (value == HIGH) {
			SET_BIT(GPIOB -> ODR, pin);
		} else {
			CLR_BIT(GPIOB -> ODR, pin);
		}
		break;
	case PORTC:
		if (value == HIGH) {
			SET_BIT(GPIOC -> ODR, pin);
		} else {
			CLR_BIT(GPIOC -> ODR, pin);
		}
		break;
	}
}
/********************************************************************/
/* Description : this function gets Pin value in DIO Pheripherial   */
/********************************************************************/
u8 DIO_GetPinValue(u8 port, u8 pin) {
	u8 Value;
	/* Check on the Required PORT Number */
	switch (port) {
	case PORTA:
		Value = GET_BIT(GPIOA->IDR, pin);
		break;
	case PORTB:
		Value = GET_BIT(GPIOB->IDR, pin);
		break;
	case PORTC:
		Value = GET_BIT(GPIOC->IDR, pin);
		break;
	}
	return Value;
}
