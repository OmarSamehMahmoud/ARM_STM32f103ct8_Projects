/************************************************************/
/* AUTHOR      : AHMED ABO ELNOUR                           */
/* DESCRIPTION : MACROS LIB File  [ Bit_Math.h]             */
/* DATE        : 8 DEC 2017                                 */
/* VERSION     : V01                                        */
/************************************************************/

#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(Byte,Pos) ((Byte) |= (1<<(Pos)) )
#define CLR_BIT(Byte,Pos) ((Byte) &= ~( 1<<(Pos) ) )
#define TOGGLE_BIT(Byte,Pos) ((Byte) ^=(1<<(Pos)))

#define SET_BYTE(Byte) (Byte |=(0xFF))
#define CLR_BYTE(Byte) (Byte &=(0x00))

#define SET_NIBBLE_HIGH(Byte) (Byte |=(0xF0))
#define SET_NIBBLE_LOW(Byte) (Byte |=(0x0F))
#define CLEAR_NIBBLE_HIGH(Byte) (Byte &=(0x0F))
#define CLEAR_NIBBLE_LOW(Byte) (Byte &=(0xF0))

#define CONC_BIT(bit7,bit6,bit5,bit4,bit3,bit2,bit1,bit0) CONC_HELP(bit7,bit6,bit5,bit4,bit3,bit2,bit1,bit0)
#define CONC_HELP(bit7,bit6,bit5,bit4,bit3,bit2,bit1,bit0) 0x##bit7##bit6##bit5##bit4##bit3##bit2##bit1##bit0 

#define CONCC_BIT(bit15,bit14,bit13,bit12,bit11,bit10,bit9,bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1,bit0)   CONCC_HELP(bit15,bit14,bit13,bit12,bit11,bit10,bit9,bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1,bit0)

#define CONCC_HELP(bit15,bit14,bit13,bit12,bit11,bit10,bit9,bit8,bit7,bit6,bit5,bit4,bit3,bit2,bit1,bit0)  0b##bit15##bit14##bit13##bit12##bit11##bit10##bit9##bit8##bit7##bit6##bit5##bit4##bit3##bit2##bit1##bit0 


#define GET_BIT(Reg,Bit) (((Reg)>>(Bit))&(0x01))

#endif /* BIT_MATH_H_ */
