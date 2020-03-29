#ifndef FLASH_INT_H_
#define FLASH_INT_H_

#define FLASH_ACR_LATENCY0		0
#define FLASH_ACR_LATENCY1		1
#define FLASH_ACR_LATENCY2		2
#define FLASH_ACR_HLFCYA		3
#define FLASH_ACR_PRFTBE		4
#define FLASH_ACR_PRFTBS		5

#define FLASH_SR_BSY			0
#define FLASH_SR_ERLYBSY		1
#define FLASH_SR_PGERR			2
#define FLASH_SR_WRPRTERR		4
#define FLASH_SR_EOP			5

#define FLASH_CR_PG				0
#define FLASH_CR_PER			1
#define FLASH_CR_MER			2
#define FLASH_CR_OPTPG			4
#define FLASH_CR_OPTER			5
#define FLASH_CR_STRT			6
#define FLASH_CR_LOCK			7
#define FLASH_CR_OPTWRE			9
#define FLASH_CR_ERRIE			10
#define FLASH_CR_EOPIE			12

#define FLASH_OBR_OPTERR		0
#define FLASH_OBR_RDPRT			1
#define FLASH_OBR_WDG_SW		2
#define FLASH_OBR_nRST_STOP		3
#define FLASH_OBR_nRST_STDBY	4

typedef enum {
	NOT_OK = 0,
	OK = 1
} Status;

/* FLASH Keys */
#define RDP_Key                  ((u16)0x00A5)
#define FLASH_KEY1               ((u32)0x45670123)
#define FLASH_KEY2               ((u32)0xCDEF89AB)	


/* Function Prototypes */
void Flash_Unlock(void);
void Flash_Lock(void);
void Flash_WordProgramming(u32 Address, u32 Data);
void Flash_PageErase(u32 Page_Address);
void Flash_MassErase(void);

#include "Flash_Reg.h"

#endif
