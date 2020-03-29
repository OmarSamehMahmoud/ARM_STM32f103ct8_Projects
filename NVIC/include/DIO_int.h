/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : GPIO DRIVER    [ RCC_config.h]             */
/* DATE        : 6 August 2019                              */

/************************************************************/

#ifndef _DIO_INT_H
#define _DIO_INT_H

/************************************************************/
/* Description : PINS Definitions                           */
/* Range :       OUTPUT_PUSH_PULL_2MHZ             			 */
/* 			     OUTPUT_OPEN_DRAIN_2MHZ            			 */
/* 			     ALTRNATE_OUTPUT_PUSH_PULL_2MHZ    			 */
/* 			     ALTRNATE_OUTPUT_OPEN_DRAIN_2MHZ  			  */
/* -------------------------------------------------------  */
/*				 OUTPUT_PUSH_PULL_10MHZ            			 */
/*				 OUTPUT_OPEN_DRAIN_10MHZ           			 */
/*				 ALTRNATE_OUTPUT_PUSH_PULL_10MHZ   			 */
/*				 ALTRNATE_OUTPUT_OPEN_DRAIN_10MHZ  			 */
/* -------------------------------------------------------- */
/*				 OUTPUT_PUSH_PULL_50MHZ                      */    
/*				 OUTPUT_OPEN_DRAIN_50MHZ                     */    
/*               ALTRNATE_OUTPUT_PUSH_PULL_50MHZ             */
/*               ALTRNATE_OUTPUT_OPEN_DRAIN_50MHZ            */
/*              ------------------------------------         */
/* 			     INPUT_PULL_UP                    			 */
/* 			     INPUT_PULL_DOWN                   			 */
/* 			     INPUT_FLOATING                    			 */
/* 			     INPUT_ANALOGE                               */
/*                                                           */
/************************************************************/

#define OUTPUT_PUSH_PULL_2MHZ                2     
#define OUTPUT_OPEN_DRAIN_2MHZ       		 6   
#define ALTRNATE_OUTPUT_PUSH_PULL_2MHZ  	 A
#define ALTRNATE_OUTPUT_OPEN_DRAIN_2MHZ 	 E
/*  ------------------------------------------------------  */
#define OUTPUT_PUSH_PULL_10MHZ               1
#define OUTPUT_OPEN_DRAIN_10MHZ              5
#define ALTRNATE_OUTPUT_PUSH_PULL_10MHZ      9
#define ALTRNATE_OUTPUT_OPEN_DRAIN_10MHZ     D
/*  ------------------------------------------------------  */
#define OUTPUT_PUSH_PULL_50MHZ               3
#define OUTPUT_OPEN_DRAIN_50MHZ              7
#define ALTRNATE_OUTPUT_PUSH_PULL_50MHZ      B
#define ALTRNATE_OUTPUT_OPEN_DRAIN_50MHZ     F
/*  ------------------------------------------------------  */
#define INPUT_PULL_UP_DOWN                   8
#define INPUT_FLOATING                       4
#define INPUT_ANALOGE                        0
/*************************************************************/
/* Description : Definitions for GPIO HIGH and LOW           */

#define 		HIGH                         1
#define 		LOW                          0

#define 		PULL_UP					     1
#define 		PULL_DOWN                    0

/********************** Ports Name **************************/
#define 		PORTA	          0
#define 		PORTB             1
#define 		PORTC             2

/**********************PIN Defines***************************/
#define         PIN0              0
#define         PIN1              1
#define         PIN2              2
#define         PIN3              3
#define         PIN4              4
#define         PIN5              5
#define         PIN6              6
#define         PIN7              7
#define         PIN8              8
#define         PIN9              9
#define         PIN10             10
#define         PIN11             11
#define         PIN12             12
#define         PIN13             13
#define         PIN14             14
#define         PIN15             15


/********************** Pin Direction *********************/

#define 		OUTPUT_2MHZ       2
#define  		OUTPUT_10MHZ      1
#define 		OUTPUT_50MHZ	  3
#define 		INPUT             0     

/*********************** pin Config *************************/
/* Range         FLOATING                                   */
/* 			     PU_PD                                      */
/* 			     ANALOG      		         		        */
/*               PULL_PUSH                                  */
/* 			     OPEN_DRAIN                                 */
/*               PULL_PUSH                                  */
/* 			     OPEN_DRAIN                                 */
/************************************************************/

#define 	ANALOG            0
#define		FLOATING          1
#define 	PU_PD             2 //Pull up and Pull down

/*
#define 	PULL_PUSH         0
#define 	OPEN_DRAIN        1
#define		PULL_PUSH         2
#define 	OPEN_DRAIN        3
*/

/********************** PreBuild Configuration  *************/

#define  PORTAL_DIRECTIONS   CONC_BIT(PORTA_DIR_7 ,PORTA_DIR_6 ,PORTA_DIR_5 ,PORTA_DIR_4 ,PORTA_DIR_3 ,PORTA_DIR_2 ,PORTA_DIR_1 ,PORTA_DIR_0 )
#define  PORTAH_DIRECTIONS   CONC_BIT(PORTA_DIR_15,PORTA_DIR_14,PORTA_DIR_13,PORTA_DIR_12,PORTA_DIR_11,PORTA_DIR_10,PORTA_DIR_9 ,PORTA_DIR_8 )

#define  PORTBL_DIRECTIONS   CONC_BIT(PORTB_DIR_7,PORTB_DIR_6,PORTB_DIR_5,PORTB_DIR_4,PORTB_DIR_3,PORTB_DIR_2,PORTB_DIR_1,PORTB_DIR_0)
#define  PORTBH_DIRECTIONS   CONC_BIT(PORTB_DIR_15 ,PORTB_DIR_14,PORTB_DIR_13 ,PORTB_DIR_12 ,PORTB_DIR_11,PORTB_DIR_10 ,PORTB_DIR_9,PORTB_DIR_8 )

#define  PORTCL_DIRECTIONS   CONC_BIT(PORTC_DIR_7,PORTC_DIR_6,PORTC_DIR_5,PORTC_DIR_4,PORTC_DIR_3,PORTC_DIR_2,PORTC_DIR_1 ,PORTC_DIR_0 )
#define  PORTCH_DIRECTIONS   CONC_BIT(PORTC_DIR_15,PORTC_DIR_14,PORTC_DIR_13,PORTC_DIR_12,PORTC_DIR_11,PORTC_DIR_10,PORTC_DIR_9 ,PORTC_DIR_8 )

/************************************************************************/

void DIO_init(void);
void DIO_SetPinValue(u8 port, u8 pin, u8 value);
u8 DIO_GetPinValue(u8 port, u8 pin);

#endif
