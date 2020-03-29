#include "Bit_Math.h"
#include "STD_Types.h"
#include "Flash_Reg.h"
#include "Flash_Int.h"

/*Function to Unlock Flash Memory*/
void Flash_Unlock(void) {
	/* Write KEY1 */
	FLASH_KEYR = FLASH_KEY1;
	/* Write KEY2 */
	FLASH_KEYR = FLASH_KEY2;
}
/*Function to lock Flash Memory*/
void Flash_Lock(void) {
	/* Write lock bit */
	SET_BIT(FLASH_CR, FLASH_CR_LOCK);
}
/*Function to Main Flash memory programming */
void Flash_WordProgramming(u32 Address, u32 Data) {
	u32 tmp = 0 ;
//	u32 address = 0;
//	u32 data = 0;
	/* Check if flash is Locked*/
	if (FLASH_CR_LOCK == 1) {
		/*Unlock Flash Memory*/
		Flash_Unlock();
	} else {
		/*Wait for last operation */
		while ((GET_BIT(FLASH_SR, FLASH_SR_BSY)) != 0)
			;
		/* Enable flash programming */
		SET_BIT(FLASH_CR, FLASH_CR_PG);
		/* Write data into flash */

		*(volatile u16*) (Address) = Data;
	}
	/*Wait for last operation */
	while ((GET_BIT(FLASH_SR, FLASH_SR_BSY)) != 0)
		;
	//proceed to program the new second half word
	 tmp = Address + 2;
	 *(u16*) tmp = Data >> 16;
		/*Wait for last operation */
		while ((GET_BIT(FLASH_SR, FLASH_SR_BSY)) != 0)
			;
	/* Disable flash programming */
	CLR_BIT(FLASH_CR, FLASH_CR_PG);
}
/*Function to Flash memory Page Erase*/
void Flash_PageErase(u32 Page_Address) {
	/* Check if flash is Locked*/
	if (FLASH_CR_LOCK == 1) {
		/*Unlock Flash Memory*/
		Flash_Unlock();
	} else {
		/*Wait for last operation */
		while ((GET_BIT(FLASH_SR, FLASH_SR_BSY)) != 0)
			;
		/* Enable Page erase */
		SET_BIT(FLASH_CR, FLASH_CR_PER);
		/*Write Address of page*/
		FLASH_AR = Page_Address;
		/* Start Page erase */
		SET_BIT(FLASH_CR, FLASH_CR_STRT);
	}
	/*Wait for last operation */
	while ((GET_BIT(FLASH_SR, FLASH_SR_BSY)) != 0)
		;
	/*Disable Page Erase*/
	CLR_BIT(FLASH_CR, FLASH_CR_PER);
}
/*Function to Flash memory Mass Erase*/
void Flash_MassErase(void) {
	/* Check if flash is Locked*/
	if (FLASH_CR_LOCK == 1) {
		/*Unlock Flash Memory*/
		Flash_Unlock();
	} else {
		/*Wait for last operation */
		while ((GET_BIT(FLASH_SR, FLASH_SR_BSY)) != 0)
			;
		/* Enable Mass erase */
		SET_BIT(FLASH_CR, FLASH_CR_MER);
		/* Start Mass erase */
		SET_BIT(FLASH_CR, FLASH_CR_STRT);
	}
	/*Wait for last operation */
	while ((GET_BIT(FLASH_SR, FLASH_SR_BSY)) != 0)
		;
	/* Disable Mass erase */
	CLR_BIT(FLASH_CR, FLASH_CR_MER);
}






