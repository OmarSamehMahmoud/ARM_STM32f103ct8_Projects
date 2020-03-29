/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : RCC DRIVER    [ RCC_int.h]                 */
/* DATE        : 6 August 2019                              */
/************************************************************/

#include "STD_Types.h"
#include "Bit_Math.h"

#include "RCC_int.h"
#include "RCC_config.h"
#include "RCC_registers.h"

/*************************************************************/
/* Description : This Func used to initialize RCC Preipheral */

void RCC_Init(void)
{
	#if   ( System_Clock_Source ==  RCC_HSE )

	SET_BIT(RCC_CR,RCC_HSE_ON);
	while (!(RCC_CR&(1<<RCC_HSE_RDY)));
	RCC_CFGR |=  (1<<0);
	RCC_CFGR &=~ (1<<1);					//Select HSE in the multiplexer

	#elif   ( System_Clock_Source ==  RCC_HSI )
		
	SET_BIT(RCC_CR,RCC_HSI_ON);
	while (!(RCC_CR&(1<<RCC_HSI_RDY)));
	RCC_CFGR &=~ (1<<0);
	RCC_CFGR &=~ (1<<1);					//Select HSI in the multiplexer
	
	#elif	  ( System_Clock_Source ==  RCC_PLL )
	
	#if   ( PLL_SOURCE  == PLL_HSE		)

	SET_BIT(RCC_CR,RCC_HSE_ON);
	while (!(RCC_CR&(1<<RCC_HSE_RDY)));

	RCC_CFGR |=  (1<<16);					//Select HSE as the source of the PLL
	RCC_CFGR &=~ (1<<17);					//Don't Divide HSE by 2

	RCC_CFGR &=~ (1<<0);
	RCC_CFGR |=  (1<<1);					//Select PLL in the multiplexer

	#elif ( PLL_SOURCE  == PLL_HSE_DIV_2)

	SET_BIT(RCC_CR,RCC_HSE_ON);
	while (!(RCC_CR&(1<<RCC_HSE_RDY)));

	RCC_CFGR |=  (1<<16);					//Select HSE as the source of the PLL
	RCC_CFGR |= (1<<17);					//Divide HSE by 2

	RCC_CFGR &=~ (1<<0);
	RCC_CFGR |=  (1<<1);					//Select PLL in the multiplexer

	#elif ( PLL_SOURCE  == PLL_HSI_DIV_2)

	SET_BIT(RCC_CR,RCC_HSI_ON);
	while (!(RCC_CR&(1<<RCC_HSI_RDY)));

	RCC_CFGR |=  (1<<16);					//Select HSI as the source of the PLL
	
	#endif
	
	RCC_CFGR &= 0xFFC3FFFF;					//clearing the PLLMUL bits (MUL by 2)
	
	#if   ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_2  )
		
	RCC_CFGR|= (0<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_3  )
		
	RCC_CFGR|= (1<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_4  )
		
	RCC_CFGR|= (2<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_5  )
		
	RCC_CFGR|= (3<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_6  )
		
	RCC_CFGR|= (4<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_7  )
		
	RCC_CFGR|= (5<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_8  )
		
	RCC_CFGR|= (6<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_9  )
		
	RCC_CFGR|= (7<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_10 )
		
	RCC_CFGR|= (8<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_11 )
		
	RCC_CFGR|= (9<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_12 )
		
	RCC_CFGR|= (10<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_13 )
	
	RCC_CFGR|= (11<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_14 )
		
	RCC_CFGR|= (12<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_15 )
		
	RCC_CFGR|= (13<<18);
	
	#elif ( RCC_PLL_MUL  ==  PLL_INPUT_CLOCK_X_16 )
	
	RCC_CFGR|= (14<<18);
	RCC_CFGR|= (15<<18);
	
	#endif

	RCC_CFGR &=~ (1<<0);
	RCC_CFGR |=  (1<<1);					//Select PLL in the multiplexer

	
	#endif
	
	#if    ( Clock_Security_System == CSS_Disable )

	RCC_CR &=~ (1<<CSS);

	#elif  ( Clock_Security_System == CSS_Enable )

	RCC_CR |= (1<<CSS);

	#endif
	
}

/*************************************************************/
/* Description : this function Enable PreipheraLs ON :       */
/*				[ APB1  -- APB2 --  AHB ]  Buses             */

void RCC_voidEnableClock(u8 Idx)
{
	if(Idx>=0&&Idx<32)
	{
		RCC_AHBENR|=(1<<Idx);
	}
	else if(Idx<64)
	{
		Idx=Idx-32;
		RCC_APB2ENR|=(1<<Idx);
	}
	else
	{
		Idx=Idx-64;
		RCC_APB1ENR|=(1<<Idx);
	}
}

/*************************************************************/
/* Description : this function Disable PreipheraLs ON :      */
/*				[ APB1  -- APB2 --  AHB ]  Buses             */

void RCC_voidDisableClock(u8 Idx)
{
	if(Idx>0&&Idx<32)
	{
		RCC_AHBENR|=(0<<Idx);
	}
	else if(Idx<64)
	{
		Idx=Idx-32;
		RCC_APB2ENR|=(0<<Idx);
	}
	else
	{
		Idx=Idx-64;
		RCC_APB1ENR|=(0<<Idx);
	}
}
