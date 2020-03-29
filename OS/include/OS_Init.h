#ifndef OS_INTI_H_
#define OS_INTI_H_

#define STATUS_READY		10
#define STATUS_SUSPENDED	20

typedef struct
{
	/*Task Periodicity*/
	int Periodicity;
	/*Task First Delay*/
	u8 FirstDelay;
	/*Task Status*/
	u8 Status;
	/*Task Function*/
	void ( *TaskHandler ) (void);

}Task_TCB ;

#define NULL ((void *)0)

	/*Initalization OS*/
void OS_Init(void);
	/*Pause a task*/
void OS_StopTask(Task_TCB* Suspended_Task);
	/*Run a task*/
void OS_ContTask(Task_TCB* Continued_Task);
	/*Create new task in Run Time*/
//Function of Creation of Our Task
void OS_CreateTask( u8 Periority,Task_TCB* Created_Task);

void Blink_Green_off(void);
void Blink_Red_On(void);
void Blink_Green_On(void);
void Blink_Red_Off(void);

#endif /* OS_INTI_H_ */
