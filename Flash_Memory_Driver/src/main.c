/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: Omar Sameh
 */
#include "Bit_Math.h"
#include "STD_Types.h"
#include "Flash_Int.h"

int main(void)
{
	/* Flash Lock */
	//Flash_Lock();

	/* Flah Unlock */
	//Flash_Unlock();

	/* Page Erase */
	//Flash_Unlock();
	//Flash_PageErase(0x08000400);
    //Flash_Lock();

	/* Mass Erase */
	//Flash_Unlock();
	//Flash_MassErase();
	//Flash_Lock();

	/* Write Data to Address */
	Flash_Unlock();
	Flash_PageErase(0x08001000);
	Flash_WordProgramming(0x08004000,0xAAAAAAAA);
	Flash_WordProgramming(0x08004004,0xAAAAAAAA);
	Flash_WordProgramming(0x08004008,0xAAAAAAAA);
	Flash_WordProgramming(0x0800400C,0xAAAAAAAA);
	Flash_WordProgramming(0x08004010,0xAAAAAAAA);
	Flash_Lock();

	while(1)
	{

	}
}



