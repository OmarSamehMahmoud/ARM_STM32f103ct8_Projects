/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : NVIC DRIVER    [ NVIC_int.h]               */
/* DATE        : 19 August 2019                             */
/************************************************************/

#include "STD_TYPES.h"
#include "NVIC_reg.h"
#include "NVIC_int.h"

/***************************************************************/
/* Description : This Func used to Initalize NVIC Preipheral   */
/***************************************************************/

void myNVIC_Init(void)
{
	AIRCR=0x05FA0500;
}

/***************************************************************/
/* Description : This Func used to Enable Interrupt Preipheral */
/***************************************************************/

void NVIC_EnableInt(u8 Idx)
{
	if ( Idx <= 31 )
	{
		NVIC_ISER[0] = 1 << Idx;
	}
	else if (Idx <= 64 )
	{
		Idx = Idx - 32;
		NVIC_ISER[1]= 1 << Idx; 
	}
}
/***************************************************************/
/* Description : This Func used to Disable Interrupt Preipheral*/
/***************************************************************/

void NVIC_DisableInt(u8 Idx)
{
	if ( Idx <= 31 )
	{
		NVIC_IOER[0] = 1 << Idx;
	}
	else if (Idx <= 64 )
	{
		Idx = Idx - 32;
		NVIC_IOER[1]= 1 << Idx; 
	}
}

/***************************************************************/
/* Description : This Func used to Set Pending Flag            */
/***************************************************************/

void NVIC_SetPending(u8 Idx)
{
	if ( Idx <= 31 )
	{
		NVIC_ISPR[0] = 1 << Idx;
	}
	else if (Idx <= 64 )
	{
		Idx = Idx - 32;
		NVIC_ISPR[1]= 1 << Idx; 
	}
}

/***************************************************************/
/* Description : This Func used to clr Pending Flag            */
/***************************************************************/

void NVIC_ClrPending(u8 Idx)
{
	if ( Idx <= 31 )
	{
		NVIC_ICPR[0] = 1 << Idx;
	}
	else if (Idx <= 64 )
	{
		Idx = Idx - 32;
		NVIC_ICPR[1]= 1 << Idx; 
	}	
}

/***************************************************************/
/* Description : This function Get(Return ) Active Flag Value  */
/***************************************************************/

/*u8 NVIC_GetActive(u8 Idx)
{
	if ( Idx <= 31 )
	{
		u8 val = GET_BIT(NVIC_IAPR[0],Idx);
	}
	else if (Idx <= 63 )
	{
		Idx = Idx - 32;
		u8 val = GET_BIT(NVIC_IAPR[1],Idx); 
	}	
}*/

#define NVIC_IPR ((u8 *)0xE000E400)

/***************************************************************/
/* Description : This function Set Priority                    */
/***************************************************************/

void NVIC_SetPriority (u8 Idx,u8 Priority)
{
	NVIC_IPR[Idx]=Priority;
}
