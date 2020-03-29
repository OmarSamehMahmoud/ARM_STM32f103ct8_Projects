#include "STD_Types.h"
#include "Bit_Math.h"

#include "Systick_int.h"
#include "Systick_reg.h"

#include "OS_Init.h"
#include "OS_Cfg.h"
#include "OS_Priv.h"

//Prototype of Our OS Scheduler
static void OS_voidSchedular(void);

//Initialization of Systick Driver
void Systick_Init(u32 load) {
	Systick_Load = load;
	Systick_Value = 0;
	Systick_CSR = 7;

}

//Function Of Systick Handler
void SysTick_Handler(void) {
	OS_voidSchedular();
}

//Function of Our OS Scheduler
static void OS_voidSchedular(void) {
	u8 i;
	for (i = 0; i < ALL_TASKS_NUMBER; i++) {
		if (Tasks_Que[i] != NULL) {
			if (Tasks_Que[i]->FirstDelay == 0) {
				if ((Tasks_Que[i]->Status == STATUS_READY)) {
					/*Execute Task*/
					Tasks_Que[i]->TaskHandler();
					for (int var = 0; var < Tasks_Que[i]->Periodicity; ++var) {
					}
				} else {

				}

				/*PREPARE Next Delay*/
				Tasks_Que[i]->FirstDelay = Tasks_Que[i]->Periodicity - 1;
			} else {
				Tasks_Que[i]->FirstDelay--;

			}

		} else {
			/*skip and Do nothing*/
		}

	}

}

//Intilization of Simple OS
void OS_Init(void) {
	u8 u8LopIdx;
	Systick_Init(7999);
	while (1) {
		/*Our Tasks Parameters on Task_TCB*/
		Task_TCB LED1 = { 100000, 0, STATUS_READY, Blink_Red_On };
		Task_TCB LED2 = { 100000, 0, STATUS_READY, Blink_Red_Off };
		Task_TCB LED3 = { 100000, 0, STATUS_READY, Blink_Green_On };
		Task_TCB LED4 = { 100000, 0, STATUS_READY, Blink_Green_off };

		/*Creating our Tasks and It's Priority*/
		OS_CreateTask(0, &LED1);
		OS_CreateTask(1, &LED3);
		OS_CreateTask(2, &LED2);
		OS_CreateTask(3, &LED4);

		SysTick_Handler();
		for (u8LopIdx = 0; u8LopIdx < NUMBER_OF_TASKS; u8LopIdx++) {
			Tasks_Que[u8LopIdx] = &Task_ARRAY[u8LopIdx];

		}

		for (u8LopIdx = NUMBER_OF_TASKS; u8LopIdx < ALL_TASKS_NUMBER;
				u8LopIdx++) {
			Tasks_Que[u8LopIdx] = NULL;
		}
	}
}

//Function of Creation of Our Task
void OS_CreateTask(u8 Periority, Task_TCB* Created_Task) {
	if (Periority > ALL_TASKS_NUMBER) {
		//Do Nothing
	} else {
		Tasks_Que[Periority] = Created_Task;

	}

}

//Function of Supended Task
void OS_StopTask(Task_TCB* Suspended_Task) {
	Suspended_Task->Status = STATUS_SUSPENDED;
}

//Function of Countiend Task
void OS_ContTask(Task_TCB* Continued_Task) {
	Continued_Task->Status = STATUS_READY;

}
