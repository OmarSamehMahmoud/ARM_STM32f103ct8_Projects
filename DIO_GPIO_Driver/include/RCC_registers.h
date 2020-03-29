#ifndef RCC_REGISTER_H
#define RCC_REGISTER_H

#define RCC_CR 			*((volatile u32*)0x40021000)//TO choose clock system
#define RCC_CFGR 		*((volatile u32*)0x40021004)
#define RCC_CIR 		*((volatile u32*)0x40021008)
#define RCC_APB2RSTR 	*((volatile u32*)0x4002100C)
#define RCC_APB1RSTR 	*((volatile u32*)0x40021010)
#define RCC_AHBENR 		*((volatile u32*)0x40021014)//enable bus
#define RCC_APB2ENR 	*((volatile u32*)0x40021018)//enable bus
#define RCC_APB1ENR 	*((volatile u32*)0x4002101C)//enable bus
#define RCC_BCDR 		*((volatile u32*)0x40021020)
#define RCC_CSR 		*((volatile u32*)0x40021024)



#endif

