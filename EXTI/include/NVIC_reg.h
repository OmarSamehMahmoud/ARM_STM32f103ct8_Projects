/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : NVIC DRIVER    [ NVIC_reg.h]               */
/* DATE        : 19 August 2019                             */
/************************************************************/

#ifndef _NVIC_REG_H
#define _NVIC_REG_H

/***************ADDRESS of NVIC Registers *******************/

#define 		NVIC_ISER         ((u32*)0xE000E100)
#define 		NVIC_IOER         ((u32*)0xE000E180)
#define 		NVIC_ISPR         ((u32*)0xE000E200)
#define 		NVIC_ICPR         ((u32*)0xE000E280)
#define 		NVIC_IAPR         ((u32*)0xE000E300)
#define			NVIC_IPR 		  ((u8 *)0xE000E400)
#define 		AIRCR 			*((u32 *)0xE000ED0C)
#endif
