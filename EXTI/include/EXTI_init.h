#ifndef _EXTI_INIT_H
#define _EXTI_INIT_H
	
#define 			Rising_Edge								0
#define				Falling_Edge							1
#define 			Any_Change								2

void EXTI_InterruptEnable(u8 Idx);
void EXTI_EventEnable(u8 Idx);

void EXTI_TriggerSelection(u8 Idx,u8 Trigger);
void EXTI_PendingClear(u8 Idx);
void EXTI_SWI_Event_Reg(u8 Idx);


#endif
