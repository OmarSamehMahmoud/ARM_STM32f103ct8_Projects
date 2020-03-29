#include "STD_Types.h"
#include "EXTI_init.h"
#include "EXTI_reg.h"


#define     Rising_Edge			0
#define     Falling_Edge		1
#define     Any_Change			2



void EXTI_InterruptEnable(u8 Idx)
{
	EXTI_IMR |= (1<<Idx);
}

void EXTI_EventEnable(u8 Idx)
{
	EXTI_EMR |= (1<<Idx);
}

void EXTI_TriggerSelection(u8 Idx,u8 Trigger)
{
	switch(Trigger){
	case 0:
		EXTI_RTSR |= 1<<Idx;
		break;
	case 1:
		EXTI_FTSR |= 1<<Idx;
		break;
	case 2:
		EXTI_RTSR |= 1<<Idx;
		EXTI_FTSR |= 1<<Idx;
		break;
	}
}

void EXTI_PendingClear(u8 Idx)
{
	EXTI_PR |= (1<<Idx);
}

void EXTI_SWI_Event_Reg(u8 Idx)
{
	EXTI_SWIER |= (1<<Idx);
}
