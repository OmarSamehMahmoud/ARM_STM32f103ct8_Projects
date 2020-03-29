#ifndef SYSTICK_REG_H
#define SYSTICK_REG_H

#define Systick_CSR		*((u32*)0xE000E010)
#define Systick_Load	*((u32*)0xE000E014)
#define Systick_Value 	*((u32*)0xE000E018)

#endif
