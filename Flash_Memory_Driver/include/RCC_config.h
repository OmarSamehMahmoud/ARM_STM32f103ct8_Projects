/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : RCC DRIVER    [ RCC_config.h]              */
/* DATE        : 6 August 2019                              */

/************************************************************/
#ifndef _RCC_CONFIG_H
#define _RCC_CONFIG_H

/*******************System Clock*****************************/

/*  Range:     System Clock is one of this Sources :        */ 
/*             RCC_HSI                                      */
/*             RCC_HSE                                      */
/*             RCC_PLL                                      */

#define        System_Clock_Source              RCC_HSI

/****************Clock Security System***********************/

/*  Range:     Clock security system have two Cases :       */
/*             CSS_Enable                                   */
/*             CSS_Disable                                  */

#define        Clock_Security_System             CSS_Disable

/******************Main CLock Output*************************/

/*  Range:    Main_Clock_Output is one of this status:      */
/*            MCO_Enable                                    */
/*            MCO_Disable                                   */

#define        Main_Clock_Output                 MCO_Disable    

/*******************REAL TIME CLOCK *************************/

/*  Range:    Real_Time_Clock is one of this status:        */
/*            RTC_Enable                                    */
/*            RTC_Disable                                   */

#define        Real_Time_Clock                   RTC_Disable

/************************************************************/

		#if			(System_Clock_Source ==  RCC_PLL)
			
		
		/* Range : PLL source one of 3 Sources                 */
		/* 		   PLL_HSE							    	   */
		/*		   PLL_HSE_DIV_2							   */
		/*		   PLL_HSI_DIV_2							   */

		#define  PLL_SOURCE               PLL_HSE
		
		/*Range:   RCC_PLL_MUL is one of this cases                    */
		/*         		 PLL_INPUT_CLOCK_X_2 				 	   */
		/*		         PLL_INPUT_CLOCK_X_3 					   */
		/*		         PLL_INPUT_CLOCK_X_4 					   */
		/*		         PLL_INPUT_CLOCK_X_5 					   */
		/*		         PLL_INPUT_CLOCK_X_6 					   */
		/*		         PLL_INPUT_CLOCK_X_7 					   */
		/*		         PLL_INPUT_CLOCK_X_8 					   */
		/*		         PLL_INPUT_CLOCK_X_9 					   */
		/*		         PLL_INPUT_CLOCK_X_10					   */
		/*		         PLL_INPUT_CLOCK_X_11					   */
		/*		         PLL_INPUT_CLOCK_X_12					   */
		/*		         PLL_INPUT_CLOCK_X_13					   */
		/*		         PLL_INPUT_CLOCK_X_14					   */
		/*		         PLL_INPUT_CLOCK_X_15					   */
		/*		         PLL_INPUT_CLOCK_X_16					   */

#define       RCC_PLL_MUL                      PLL_INPUT_CLOCK_X_16

		#endif
		
/************************************************************/

		#if			(Main_Clock_Output==MCO_Enable)
			
/* Range : MCO select output source between  Sources : */
		/*		   MCO_SYSTEM_CLOCK   					      	   */
		/*         MCO_HSE                                         */
		/*         MCO_HSI                                         */
		/*         MCO_PLL_DIV_2                                   */

#define        MCO_SOURCE                       MCO_HSI

		#endif
		
/************************************************************/
		#if ( REAL_TIME_CLOCK == RTC_ENABLE )
	
/* Range :  RTC_SOURCE is one of Sources 	:			*/
		/*			RTC_HSE_DIV_128						    		*/
		/*			RTC_LSE 								        */
		/*			RTC_LSI  						                */
	
#define    REAL_TIME_CLOCK_SOURCE 	       RTC_HSE_DIV_128
	
	#endif
	
#endif
