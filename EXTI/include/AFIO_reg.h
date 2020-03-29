#ifndef _AFIO_REGISTER_H
#define _AFIO_REGISTER_H

typedef struct
{
	u32 EVCR;
	u32 MAPR;
	u32 EXTICR1;
	u32 EXTICR2;
	u32 EXTICR3;
	u32 EXTICR4;
	u32 MAPR2;
} AFIO;

static volatile AFIO * AFIOP = (volatile AFIO*)0x40010000;


#endif
