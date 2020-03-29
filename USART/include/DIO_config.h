/************************************************************/
/* AUTHOR      : Omar Sameh Mahmoud                         */
/* DESCRIPTION : GPIO DRIVER   [ GPIO_config.h]             */
/* DATE        : 6 August 2019                              */
/************************************************************/

#ifndef _GPIO_CONFIG_H
#define _GPIO_CONFIG_H



/************************************************************/
/* Description : PINS Direction Definitions                 */
/* Range :       OUTPUT_PUSH_PULL_2MHZ              */
/* 			     OUTPUT_OPEN_DRAIN_2MHZ             */
/* 			     ALTRNATE_OUTPUT_PUSH_PULL_2MHZ     */
/* 			     ALTRNATE_OUTPUT_OPEN_DRAIN_2MHZ    */
/* -------------------------------------------------------  */
/*				 OUTPUT_PUSH_PULL_10MHZ             */
/*				 OUTPUT_OPEN_DRAIN_10MHZ            */
/*				 ALTRNATE_OUTPUT_PUSH_PULL_10MHZ    */
/*				 ALTRNATE_OUTPUT_OPEN_DRAIN_10MHZ   */
/* -------------------------------------------------------- */
/*				 OUTPUT_PUSH_PULL_50MHZ             */    
/*				 OUTPUT_OPEN_DRAIN_50MHZ            */    
/*               ALTRNATE_OUTPUT_PUSH_PULL_50MHZ    */
/*               ALTRNATE_OUTPUT_OPEN_DRAIN_50MHZ   */
/*              ------------------------------------        */
/* 			     INPUT_PULL_UP_DOWN                 */
/* 			     INPUT_FLOATING                     */
/* 			     INPUT_ANALOGE                      */
/*                                                          */
/************************************************************/
/*               PORT A PINS                                */

#define PORTA_DIR_0           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_1           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_2           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_3           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_4           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_5           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_6           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_7           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_8           OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_9        	  ALTRNATE_OUTPUT_PUSH_PULL_50MHZ
#define PORTA_DIR_10          INPUT_FLOATING
#define PORTA_DIR_11          OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_12          OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_13          OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_14          OUTPUT_PUSH_PULL_10MHZ
#define PORTA_DIR_15          OUTPUT_PUSH_PULL_10MHZ

/*               PORT B PINS                              */

#define PORTB_DIR_0         INPUT_PULL_UP_DOWN
#define PORTB_DIR_1         INPUT_PULL_UP_DOWN
#define PORTB_DIR_2         INPUT_PULL_UP_DOWN
#define PORTB_DIR_3         INPUT_PULL_UP_DOWN
#define PORTB_DIR_4        	INPUT_PULL_UP_DOWN
#define PORTB_DIR_5         INPUT_PULL_UP_DOWN
#define PORTB_DIR_6         OUTPUT_PUSH_PULL_10MHZ
#define PORTB_DIR_7         INPUT_PULL_UP_DOWN
#define PORTB_DIR_8         OUTPUT_PUSH_PULL_10MHZ
#define PORTB_DIR_9         INPUT_PULL_UP_DOWN
#define PORTB_DIR_10         INPUT_PULL_UP_DOWN
#define PORTB_DIR_11         INPUT_PULL_UP_DOWN
#define PORTB_DIR_12         INPUT_PULL_UP_DOWN
#define PORTB_DIR_13        INPUT_PULL_UP_DOWN
#define PORTB_DIR_14         INPUT_PULL_UP_DOWN
#define PORTB_DIR_15         OUTPUT_PUSH_PULL_10MHZ

/*               PORT C PINS                              */

#define PORTC_DIR_0         INPUT_PULL_UP_DOWN
#define PORTC_DIR_1         INPUT_PULL_UP_DOWN
#define PORTC_DIR_2        INPUT_PULL_UP_DOWN
#define PORTC_DIR_3         INPUT_PULL_UP_DOWN
#define PORTC_DIR_4         INPUT_PULL_UP_DOWN
#define PORTC_DIR_5         INPUT_PULL_UP_DOWN
#define PORTC_DIR_6         INPUT_PULL_UP_DOWN
#define PORTC_DIR_7         INPUT_PULL_UP_DOWN
#define PORTC_DIR_8         INPUT_PULL_UP_DOWN
#define PORTC_DIR_9         INPUT_PULL_UP_DOWN
#define PORTC_DIR_10         INPUT_PULL_UP_DOWN
#define PORTC_DIR_11         INPUT_PULL_UP_DOWN
#define PORTC_DIR_12         INPUT_PULL_UP_DOWN
#define PORTC_DIR_13        INPUT_PULL_UP_DOWN
#define PORTC_DIR_14         INPUT_PULL_UP_DOWN
#define PORTC_DIR_15         INPUT_PULL_UP_DOWN


#endif

