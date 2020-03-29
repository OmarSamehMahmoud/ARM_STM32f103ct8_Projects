#include "STD_Types.h"
#include "AFIO_int.h"
#include "AFIO_reg.h"

void AFIO_voidinit(void)
{	
	AFIOP->EVCR=EVENTOUT_Default;
	
}
void AFIO_voidExtInterrupt (u8 PORT,u8 PIN)
{
	if ((PIN >= 0) && (PIN < 4))
	{
		AFIOP->EXTICR1 |= (PORT<<(PIN*4));
	}
	if ((PIN >= 4) && (PIN < 8))
	{
		AFIOP->EXTICR2 |= (PORT<<(PIN*4));
	}
	if ((PIN >= 8) && (PIN < 12))
	{
		AFIOP->EXTICR3 |= (PORT<<(PIN*4));
	}
	if ((PIN >= 12) && (PIN < 16))
	{
		AFIOP->EXTICR4 |= (PORT<<(PIN*4));
	}
}
