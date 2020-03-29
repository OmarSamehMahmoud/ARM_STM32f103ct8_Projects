/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : RCC DRIVER    [ RCC_int.h]                 */
/* DATE        : 6 August 2019                              */
/************************************************************/

#ifndef _RCC_INT_H
#define _RCC_INT_H

/*************************************************************/
/****First We Write Enables Periperals For Registers On RCC***/

/******AHB peripheral clock enable register (RCC_AHBENR)******/

#define       RCC_CLK_DMA1              0
#define 	  RCC_CLK_DMA2              1
#define       RCC_SRAM_EN               2
#define       RCC_FLITF_EN              4
#define       RCC_CRC_EN                6
#define       RCC_FSMC_EN               8
#define	      RCC_SDIO_EN               10

/******AHB2 peripheral clock enable register (RCC_AHB2ENR)******/

#define       RCC_CLK_AFIO              32
#define       RCC_CLK_IOPA              34
#define       RCC_CLK_IOPB              35
#define       RCC_CLK_IOPC              36
#define       RCC_CLK_IOPD              37
#define	      RCC_CLK_IOPE              38
#define       RCC_CLK_IOPF              39
#define	      RCC_CLK_IOPG              40
#define       RCC_ADC1_EN               41
#define       RCC_ADC2_EN               42
#define       RCC_TIM1_EN               43
#define       RCC_SPI1_EN               44
#define       RCC_TIM8_EN               45
#define       RCC_USART1_EN             46
#define       RCC_ADC3_EN	            47
#define       RCC_TIM9_EN               51
#define       RCC_TIM10_EN              52
#define       RCC_TIM11_EN              53

/******AHB1 peripheral clock enable register (RCC_AHB1ENR)******/
#define	      RCC_TIM2_EN               64
#define	      RCC_TIM3_EN               65
#define	      RCC_TIM4_EN               66
#define	      RCC_TIM5_EN               67
#define	      RCC_TIM6_EN               68
#define	      RCC_TIM7_EN               69
#define	      RCC_TIM12_EN              70
#define	      RCC_TIM13_EN              71
#define	      RCC_TIM14_EN              72
#define       RCC_WWD_GEN               75
#define       RCC_SPI2_EN               78
#define       RCC_SPI3_EN               79
#define       RCC_USART2_EN             81
#define       RCC_USART3_EN             82
#define       RCC_USART4_EN             83
#define       RCC_USART5_EN             84
#define       RCC_I2C1_EN               85
#define       RCC_I2C2_EN               86
#define       RCC_USB_EN                87
#define       RCC_CAN_EN                89
#define       RCC_PKB_EN                91
#define       RCC_PWR_EN                92
#define       RCC_DAC_EN                93

/****************************************************************/

// RCC_CR
#define RCC_HSI_ON		0
#define RCC_HSI_RDY		1
#define RCC_HSE_ON		16
#define RCC_HSE_RDY		17
#define RCC_HSE_BYP		18
#define RCC_CSS_ON		19
#define RCC_PLL_ON		24
#define RCC_PLL_RDY		25

/**************** SYSTEM CLOCK Sources ***********************/

#define		 RCC_HSI			0
#define		 RCC_HSE			1
#define		 RCC_PLL			2


/***************** REAL TIME CLOCK Status *********************/
#define RTC_Disable              0
#define RTC_Enable	             5

/***************** REAL TIME CLOCK Sources **********************/

#define RTC_HSE_DIV_128	         0
#define RTC_LSE 		         4
#define RTC_LSI  		         8

/*************** ENABLE /DISABLE CLock Security system *********/

#define  CSS_Enable              5
#define  CSS_Disable             0

/***************** PLL Sources *********************************/

#define PLL_HSE		             0
#define PLL_HSE_DIV_2            1
#define PLL_HSI_DIV_2            2

/****************** PLL INPUT Multiplier Factor *****************/

#define PLL_INPUT_CLOCK_X_2 	 2
#define PLL_INPUT_CLOCK_X_3 	 3
#define PLL_INPUT_CLOCK_X_4 	 4
#define PLL_INPUT_CLOCK_X_5 	 5
#define PLL_INPUT_CLOCK_X_6 	 6
#define PLL_INPUT_CLOCK_X_7 	 7
#define PLL_INPUT_CLOCK_X_8 	 8
#define PLL_INPUT_CLOCK_X_9 	 9
#define PLL_INPUT_CLOCK_X_10	 10
#define PLL_INPUT_CLOCK_X_11	 11
#define PLL_INPUT_CLOCK_X_12	 12
#define PLL_INPUT_CLOCK_X_13	 13
#define PLL_INPUT_CLOCK_X_14	 14
#define PLL_INPUT_CLOCK_X_15	 15
#define PLL_INPUT_CLOCK_X_16	 16

#define			CSS				19

/*************** Microcontroller Clock Output Status *********/

#define  MCO_Disable             0
#define  MCO_Enable              5

/*************** Microcontroller Clock Output Sources ********/

#define MCO_SYSTEM_CLOCK         0
#define MCO_HSE                  4
#define MCO_HSI                  8
#define MCO_PLL_DIV_2            16

/*************************************************************/
/* Description : This Func used to initialize RCC Preipheral */

void RCC_InitI(void);

/*************************************************************/
/* Description : this function Enable PreipheraLs ON :       */
/*				[ APB1  -- APB2 --  AHB ]  Buses             */

void RCC_voidEnableClock(u8 Idx);

/*************************************************************/
/* Description : this function Disable PreipheraLs ON :      */
/*				[ APB1  -- APB2 --  AHB ]  Buses             */

void RCC_voidDisableClock(u8 Idx);

#endif
