#include "STD_Types.h"
#include "Systick_int.h"
#include "Systick_reg.h"


volatile u32 delay_x;


void _delay_ms(u32 time)
{
	delay_x = time;
	while (delay_x != 0);
}


void Systick_Init (u32 load)
{
	Systick_Load= load;
	Systick_Value=0;
	Systick_CSR=7;

}
void SysTick_Handler (void)
{

	if(delay_x != 0)
	{
		delay_x--;
	}
}
