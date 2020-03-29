#ifndef _AFIO_INT_H
#define _AFIO_INT_H

#define EVENTOUT_Default                            0x00000000
#define EVENTOUT_PA0                                0x00000080
#define EVENTOUT_PA1                                0x00000081
#define EVENTOUT_PA2                                0x00000082
#define EVENTOUT_PA3                                0x00000083
#define EVENTOUT_PA4                                0x00000084
#define EVENTOUT_PA5                                0x00000085
#define EVENTOUT_PA6                                0x00000086
#define EVENTOUT_PA7                                0x00000087
#define EVENTOUT_PA8                                0x00000088
#define EVENTOUT_PA9                                0x00000089
#define EVENTOUT_PA10                               0x0000008A
#define EVENTOUT_PA11                               0x0000008B
#define EVENTOUT_PA12                               0x0000008C
#define EVENTOUT_PA13                               0x0000008D
#define EVENTOUT_PA14                               0x0000008E
#define EVENTOUT_PA15                               0x0000008F

#define EVENTOUT_PB0                                0x00000090
#define EVENTOUT_PB1                                0x00000091
#define EVENTOUT_PB2                                0x00000092
#define EVENTOUT_PB3                                0x00000093
#define EVENTOUT_PB4                                0x00000094
#define EVENTOUT_PB5                                0x00000095
#define EVENTOUT_PB6                                0x00000096
#define EVENTOUT_PB7                                0x00000097
#define EVENTOUT_PB8                                0x00000098
#define EVENTOUT_PB9                                0x00000099
#define EVENTOUT_PB10                               0x0000009A
#define EVENTOUT_PB11                               0x0000009B
#define EVENTOUT_PB12                               0x0000009C
#define EVENTOUT_PB13                               0x0000009D
#define EVENTOUT_PB14                               0x0000009E
#define EVENTOUT_PB15                               0x0000009F

#define EVENTOUT_PC0                                0x000000A0
#define EVENTOUT_PC1                                0x000000A1
#define EVENTOUT_PC2                                0x000000A2
#define EVENTOUT_PC3                                0x000000A3
#define EVENTOUT_PC4                                0x000000A4
#define EVENTOUT_PC5                                0x000000A5
#define EVENTOUT_PC6                                0x000000A6
#define EVENTOUT_PC7                                0x000000A7
#define EVENTOUT_PC8                                0x000000A8
#define EVENTOUT_PC9                                0x000000A9
#define EVENTOUT_PC10                               0x000000AA
#define EVENTOUT_PC11                               0x000000AB
#define EVENTOUT_PC12                               0x000000AC
#define EVENTOUT_PC13                               0x000000AD
#define EVENTOUT_PC14                               0x000000AE
#define EVENTOUT_PC15                               0x000000AF




 
void AFIO_voidinit(void);
void AFIO_voidExtInterrupt (u8 PORT,u8 PIN);




#endif
