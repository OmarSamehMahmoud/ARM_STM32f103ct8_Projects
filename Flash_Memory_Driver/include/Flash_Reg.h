#ifndef FLASH_REG_H_
#define FLASH_REG_H_

#define FLASH_ACR               *((volatile u32*)0x40022000)
#define FLASH_KEYR				*((volatile u32*)0x40022004)
#define FLASH_OPTKEYR			*((volatile u32*)0x40022008)
#define FLASH_SR				*((volatile u32*)0x4002200C)
#define FLASH_CR				*((volatile u32*)0x40022010)
#define FLASH_AR				*((volatile u32*)0x40022014)
#define FLASH_OBR				*((volatile u32*)0x4002201C)
#define FLASH_WRPR				*((volatile u32*)0x40022020)

typedef struct
{
  u16 RDP;
  u16 USER;
  u16 Data0;
  u16 Data1;
  u16 WRP0;
  u16 WRP1;
  u16 WRP2;
  u16 WRP3;
} OB_TypeDef;

#define OB_BASE                 ((u32)0x1FFFF800)    /* Flash Option Bytes base address */
#define OB                      ((OB_TypeDef *) OB_BASE)

/* FLASH Mask */
#define RDPRT_Mask               ((u32)0x00000002)
#define WRP0_Mask                ((u32)0x000000FF)
#define WRP1_Mask                ((u32)0x0000FF00)
#define WRP2_Mask                ((u32)0x00FF0000)
#define WRP3_Mask                ((u32)0xFF000000)

/******************  Bit definition for FLASH_WRPR register  ******************/
#define  FLASH_WRPR_WRP         ((u32)0xFFFFFFFF)        /* Write Protect */

/******************  Bit definition for FLASH_RDP register  *******************/
#define  FLASH_RDP_RDP          ((u32)0x000000FF)        /* Read protection option byte */
#define  FLASH_RDP_nRDP         ((u32)0x0000FF00)        /* Read protection complemented option byte */

/******************  Bit definition for FLASH_USER register  ******************/
#define  FLASH_USER_USER        ((u32)0x00FF0000)        /* User option byte */
#define  FLASH_USER_nUSER       ((u32)0xFF000000)        /* User complemented option byte */

/******************  Bit definition for FLASH_Data0 register  *****************/
#define  FLASH_Data0_Data0      ((u32)0x000000FF)        /* User data storage option byte */
#define  FLASH_Data0_nData0     ((u32)0x0000FF00)        /* User data storage complemented option byte */

/******************  Bit definition for FLASH_Data1 register  *****************/
#define  FLASH_Data1_Data1      ((u32)0x00FF0000)        /* User data storage option byte */
#define  FLASH_Data1_nData1     ((u32)0xFF000000)        /* User data storage complemented option byte */

/******************  Bit definition for FLASH_WRP0 register  ******************/
#define  FLASH_WRP0_WRP0        ((u32)0x000000FF)        /* Flash memory write protection option bytes */
#define  FLASH_WRP0_nWRP0       ((u32)0x0000FF00)        /* Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP1 register  ******************/
#define  FLASH_WRP1_WRP1        ((u32)0x00FF0000)        /* Flash memory write protection option bytes */
#define  FLASH_WRP1_nWRP1       ((u32)0xFF000000)        /* Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP2 register  ******************/
#define  FLASH_WRP2_WRP2        ((u32)0x000000FF)        /* Flash memory write protection option bytes */
#define  FLASH_WRP2_nWRP2       ((u32)0x0000FF00)        /* Flash memory write protection complemented option bytes */

/******************  Bit definition for FLASH_WRP3 register  ******************/
#define  FLASH_WRP3_WRP3        ((u32)0x00FF0000)        /* Flash memory write protection option bytes */
#define  FLASH_WRP3_nWRP3       ((u32)0xFF000000)        /* Flash memory write protection complemented option bytes */

#endif
