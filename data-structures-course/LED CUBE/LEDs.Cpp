#define	DECODER_BITS	5

#define	LEDS_PER_ROW	5

#define	pEN	12

#define	MICRO	25



#define	p0	4

#define	p1	3

#define	p2	2

#define	p3	6

#define	p4	5



#define	Z0	7

#define	Z1	8

#define	Z2	9

#define	Z3	10

#define	Z4	11



unsigned	int	decoderPins[]	=	{p0,	p1,	p2,	p3,	p4};

unsigned	int	cathodePins[]	=	{Z0,	Z1,	Z2,	Z3,	Z4};



//individual	LEDS

void	LED1()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}



void	LED2()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED3()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);			digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED4()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED5()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED6()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED7()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED8()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);			digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED9()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED10()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED11()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED12()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);	}

void	LED13()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED14()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED15()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED16()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED17()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);			digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED18()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED19()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED20()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED21()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED22()	{			digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED23()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED24()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED25()	{

		digitalWrite(Z0,	HIGH);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	HIGH);

}



void	LED26()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);			digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}



void	LED27()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED28()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED29()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED30()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED31()	{			digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED32()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED33()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED34()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED35()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);			digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED36()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED37()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED38()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED39()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED40()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);			digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED41()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED42()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED43()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED44()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);			digitalWrite(p4,	HIGH);

}

void	LED45()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED46()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED47()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED48()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED49()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);			digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED50()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	HIGH);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	HIGH);

}



void	LED51()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}



void	LED52()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED53()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);			digitalWrite(p4,	LOW);

}

void	LED54()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED55()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED56()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED57()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED58()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);			digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED59()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED60()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED61()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED62()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}		void	LED63()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED64()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED65()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED66()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED67()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);			digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED68()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED69()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED70()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED71()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED72()	{

		digitalWrite(Z0,	LOW);			digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED73()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED74()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED75()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	HIGH);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	HIGH);

}



void	LED76()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);			digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}



void	LED77()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED78()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED79()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED80()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED81()	{

		digitalWrite(Z0,	LOW);			digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED82()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED83()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED84()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED85()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);			digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED86()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED87()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED88()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED89()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED90()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);			digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED91()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED92()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED93()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED94()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);	}

void	LED95()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED96()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED97()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED98()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED99()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);			digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED100()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	HIGH);

		digitalWrite(Z4,	LOW);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	HIGH);

}

void	LED101()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}



void	LED102()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED103()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}		void	LED104()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED105()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED106()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED107()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED108()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);			digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	LOW);

}

void	LED109()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED110()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED111()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED112()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED113()	{

		digitalWrite(Z0,	LOW);			digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED114()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED115()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED116()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	LOW);

}

void	LED117()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);			digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED118()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED119()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED120()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED121()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED122()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);			digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED123()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED124()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	HIGH);

		digitalWrite(p1,	HIGH);

		digitalWrite(p2,	HIGH);

		digitalWrite(p3,	LOW);

		digitalWrite(p4,	HIGH);

}

void	LED125()	{

		digitalWrite(Z0,	LOW);

		digitalWrite(Z1,	LOW);

		digitalWrite(Z2,	LOW);

		digitalWrite(Z3,	LOW);

		digitalWrite(Z4,	HIGH);

		digitalWrite(p0,	LOW);

		digitalWrite(p1,	LOW);

		digitalWrite(p2,	LOW);

		digitalWrite(p3,	HIGH);

		digitalWrite(p4,	HIGH);

}

void LEDS(int n , String F0){

int LEDS_A[125]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21
,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50
,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79
,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100
,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119
,120,121,122,123,124,125};

if(LEDS_A[n]==1){
  if (F0=="F"){

  }
  else LED1();

}
if(LEDS_A[n]==2){
  if (F0=="F"){

  }
  else LED2();

}if(LEDS_A[n]==3){
  if (F0=="F"){

  }
  else LED3();

}if(LEDS_A[n]==4){
  if (F0=="F"){

  }
  else LED4();

}if(LEDS_A[n]==5){
  if (F0=="F"){

  }
  else LED5();

}if(LEDS_A[n]==6){
  if (F0=="F"){

  }
  else LED6();

}if(LEDS_A[n]==7){
  if (F0=="F"){

  }
  else LED7();

}if(LEDS_A[n]==8){
  if (F0=="F"){

  }
  else LED8();

/////
if(LEDS_A[n]==9){
  if (F0=="F"){

  }
  else LED9();

}
//////
/////
if(LEDS_A[n]==10){
  if (F0=="F"){

  }
  else LED10();

}
///////////
if(LEDS_A[n]==11){
  if (F0=="F"){

  }
  else LED11();

}
///////////
if(LEDS_A[n]==12){
  if (F0=="F"){

  }
  else LED12();

}
///////////
if(LEDS_A[n]==13){
  if (F0=="F"){

  }
  else LED13();

}
/////
if(LEDS_A[n]==14){
  if (F0=="F"){

  }
  else LED14();

}
//////
///////////
if(LEDS_A[n]==15){
  if (F0=="F"){

  }
  else LED15();

}
///////////
if(LEDS_A[n]==16){
  if (F0=="F"){

  }
  else LED16();

}
///////////
if(LEDS_A[n]==17){
  if (F0=="F"){

  }
  else LED17();

}
///////////
if(LEDS_A[n]==18){
  if (F0=="F"){

  }
  else LED18();

}
///////////
if(LEDS_A[n]==19){
  if (F0=="F"){

  }
  else LED19();

}
//////
/////
if(LEDS_A[n]==20){
  if (F0=="F"){

  }
  else LED20();

}
///////////
if(LEDS_A[n]==21){
  if (F0=="F"){

  }
  else LED21();

}
///////////
if(LEDS_A[n]==22){
  if (F0=="F"){

  }
  else LED22();

}
///////////
if(LEDS_A[n]==23){
  if (F0=="F"){

  }
  else LED23();

}
///////////
if(LEDS_A[n]==24){
  if (F0=="F"){

  }
  else LED24();

}
///////////
if(LEDS_A[n]==25){
  if (F0=="F"){

  }
  else LED25();

}
///////////
if(LEDS_A[n]==26){
  if (F0=="F"){

  }
  else LED26();

}
///////////
if(LEDS_A[n]==27){
  if (F0=="F"){

  }
  else LED27();

}
/////
if(LEDS_A[n]==28){
  if (F0=="F"){

  }
  else LED28();

}
//////
///////////
if(LEDS_A[n]==29){
  if (F0=="F"){

  }
  else LED29();

}
///////////
if(LEDS_A[n]==30){
  if (F0=="F"){

  }
  else LED30();

}
///////////
if(LEDS_A[n]==31){
  if (F0=="F"){

  }
  else LED31();

}
///////////
if(LEDS_A[n]==32){
  if (F0=="F"){

  }
  else LED32();

}
/////
if(LEDS_A[n]==33){
  if (F0=="F"){

  }
  else LED33();

}
//////
///////////
if(LEDS_A[n]==34){
  if (F0=="F"){

  }
  else LED34();

}
///////////
if(LEDS_A[n]==35){
  if (F0=="F"){

  }
  else LED35();

}
///////////
if(LEDS_A[n]==36){
  if (F0=="F"){

  }
  else LED36();

}
///////////
if(LEDS_A[n]==37){
  if (F0=="F"){

  }
  else LED37();

}
///////////
if(LEDS_A[n]==38){
  if (F0=="F"){

  }
  else LED38();

}
///////////
if(LEDS_A[n]==39){
  if (F0=="F"){

  }
  else LED39();

}
///////////
if(LEDS_A[n]==40){
  if (F0=="F"){

  }
  else LED40();

}
///////////
if(LEDS_A[n]==41){
  if (F0=="F"){

  }
  else LED41();

}
///////////
if(LEDS_A[n]==42){
  if (F0=="F"){

  }
  else LED42();

}
///////////
if(LEDS_A[n]==43){
  if (F0=="F"){

  }
  else LED43();

}
///////////
if(LEDS_A[n]==44){
  if (F0=="F"){

  }
  else LED44();

}
///////////
if(LEDS_A[n]==45){
  if (F0=="F"){

  }
  else LED45();

}
///////////
if(LEDS_A[n]==46){
  if (F0=="F"){

  }
  else LED46();

}
///////////
if(LEDS_A[n]==47){
  if (F0=="F"){

  }
  else LED47();

}
/////
if(LEDS_A[n]==48){
  if (F0=="F"){

  }
  else LED48();

}
//////
///////////
if(LEDS_A[n]==49){
  if (F0=="F"){

  }
  else LED49();

}
///////////
if(LEDS_A[n]==50){
  if (F0=="F"){

  }
  else LED50();

}
///////////
if(LEDS_A[n]==51){
  if (F0=="F"){

  }
  else LED51();

}
/////
if(LEDS_A[n]==52){
  if (F0=="F"){

  }
  else LED52();

}
//////
///////////
if(LEDS_A[n]==53){
  if (F0=="F"){

  }
  else LED53();

}
///////////
if(LEDS_A[n]==54){
  if (F0=="F"){

  }
  else LED54();

}
///////////
if(LEDS_A[n]==55){
  if (F0=="F"){

  }
  else LED55();

}
///////////
if(LEDS_A[n]==56){
  if (F0=="F"){

  }
  else LED56();

}
///////////
if(LEDS_A[n]==57){
  if (F0=="F"){

  }
  else LED57();

}
///////////
if(LEDS_A[n]==58){
  if (F0=="F"){

  }
  else LED58();

}
///////////
if(LEDS_A[n]==59){
  if (F0=="F"){

  }
  else LED59();

}
///////////
if(LEDS_A[n]==60){
  if (F0=="F"){

  }
  else LED60();

}
///////////
if(LEDS_A[n]==61){
  if (F0=="F"){

  }
  else LED61();

}
///////////
if(LEDS_A[n]==62){
  if (F0=="F"){

  }
  else LED62();

}
///////////
if(LEDS_A[n]==63){
  if (F0=="F"){

  }
  else LED63();

}
///////////
if(LEDS_A[n]==64){
  if (F0=="F"){

  }
  else LED64();

}
///////////
if(LEDS_A[n]==65){
  if (F0=="F"){

  }
  else LED65();

}
///////////
if(LEDS_A[n]==66){
  if (F0=="F"){

  }
  else LED66();

}
///////////
if(LEDS_A[n]==67){
  if (F0=="F"){

  }
  else LED67();

}
///////////
if(LEDS_A[n]==68){
  if (F0=="F"){

  }
  else LED68();

}
///////////
if(LEDS_A[n]==69){
  if (F0=="F"){

  }
  else LED69();

}
///////////
if(LEDS_A[n]==70){
  if (F0=="F"){

  }
  else LED70();

}
///////////
if(LEDS_A[n]==71){
  if (F0=="F"){

  }
  else LED71();

}
///////////
if(LEDS_A[n]==72){
  if (F0=="F"){

  }
  else LED72();

}
///////////
if(LEDS_A[n]==73){
  if (F0=="F"){

  }
  else LED73();

}
///////////
if(LEDS_A[n]==74){
  if (F0=="F"){

  }
  else LED74();

}
///////////
if(LEDS_A[n]==75){
  if (F0=="F"){

  }
  else LED75();

}
///////////
if(LEDS_A[n]==76){
  if (F0=="F"){

  }
  else LED76();

}
///////////
if(LEDS_A[n]==77){
  if (F0=="F"){

  }
  else LED77();

}
///////////
if(LEDS_A[n]==78){
  if (F0=="F"){

  }
  else LED78();

}
///////////
if(LEDS_A[n]==79){
  if (F0=="F"){

  }
  else LED79();

}
///////////
if(LEDS_A[n]==80){
  if (F0=="F"){

  }
  else LED80();

}
///////////
if(LEDS_A[n]==81){
  if (F0=="F"){

  }
  else LED81();

}
///////////
if(LEDS_A[n]==82){
  if (F0=="F"){

  }
  else LED82();

}
///////////
if(LEDS_A[n]==83){
  if (F0=="F"){

  }
  else LED83();

}
///////////
if(LEDS_A[n]==84){
  if (F0=="F"){

  }
  else LED84();

}
///////////
if(LEDS_A[n]==85){
  if (F0=="F"){

  }
  else LED85();

}
///////////
if(LEDS_A[n]==86){
  if (F0=="F"){

  }
  else LED86();

}
///////////
if(LEDS_A[n]==87){
  if (F0=="F"){

  }
  else LED87();

}
///////////
if(LEDS_A[n]==88){
  if (F0=="F"){

  }
  else LED88();

}
///////////
if(LEDS_A[n]==89){
  if (F0=="F"){

  }
  else LED89();

}
///////////
if(LEDS_A[n]==90){
  if (F0=="F"){

  }
  else LED90();

}
///////////
if(LEDS_A[n]==91){
  if (F0=="F"){

  }
  else LED91();

}
///////////
if(LEDS_A[n]==92){
  if (F0=="F"){

  }
  else LED92();

}
///////////
if(LEDS_A[n]==93){
  if (F0=="F"){

  }
  else LED93();

}
///////////
if(LEDS_A[n]==94){
  if (F0=="F"){

  }
  else LED94();

}
///////////
if(LEDS_A[n]==95){
  if (F0=="F"){

  }
  else LED95();

}
///////////
if(LEDS_A[n]==96){
  if (F0=="F"){

  }
  else LED96();

}
///////////
if(LEDS_A[n]==97){
  if (F0=="F"){

  }
  else LED97();

}
///////////
if(LEDS_A[n]==98){
  if (F0=="F"){

  }
  else LED98();

}
///////////
if(LEDS_A[n]==99){
  if (F0=="F"){

  }
  else LED99();

}
///////////
if(LEDS_A[n]==100){
  if (F0=="F"){

  }
  else LED100();

}
///////////
if(LEDS_A[n]==101){
  if (F0=="F"){

  }
  else LED101();

}
///////////
if(LEDS_A[n]==102){
  if (F0=="F"){

  }
  else LED102();

}
///////////
if(LEDS_A[n]==103){
  if (F0=="F"){

  }
  else LED103();

}
///////////
if(LEDS_A[n]==104){
  if (F0=="F"){

  }
  else LED104();

}
///////////
if(LEDS_A[n]==105){
  if (F0=="F"){

  }
  else LED105();

}
///////////
if(LEDS_A[n]==106){
  if (F0=="F"){

  }
  else LED106();

}
///////////
if(LEDS_A[n]==107){
  if (F0=="F"){

  }
  else LED107();

}
///////////
if(LEDS_A[n]==108){
  if (F0=="F"){

  }
  else LED108();

}
///////////
if(LEDS_A[n]==109){
  if (F0=="F"){

  }
  else LED109();

}
///////////
if(LEDS_A[n]==110){
  if (F0=="F"){

  }
  else LED110();

}
///////////
if(LEDS_A[n]==111){
  if (F0=="F"){

  }
  else LED111();

}
///////////
if(LEDS_A[n]==112){
  if (F0=="F"){

  }
  else LED112();

}
///////////
if(LEDS_A[n]==113){
  if (F0=="F"){

  }
  else LED113();

}
///////////
if(LEDS_A[n]==114){
  if (F0=="F"){

  }
  else LED114();

}
//////
/////
if(LEDS_A[n]==115){
  if (F0=="F"){

  }
  else LED115();

}
///////////
if(LEDS_A[n]==116){
  if (F0=="F"){

  }
  else LED116();

}
///////////
if(LEDS_A[n]==117){
  if (F0=="F"){

  }
  else LED117();

}
///////////
if(LEDS_A[n]==118){
  if (F0=="F"){

  }
  else LED118();

}
///////////
if(LEDS_A[n]==119){
  if (F0=="F"){

  }
  else LED119();

}
///////////
if(LEDS_A[n]==120){
  if (F0=="F"){

  }
  else LED120();

}
///////////
if(LEDS_A[n]==121){
  if (F0=="F"){

  }
  else LED121();

}
///////////
/////
if(LEDS_A[n]==122){
  if (F0=="F"){

  }
  else LED122();

}
//////
if(LEDS_A[n]==123){
  if (F0=="F"){

  }
  else LED123();

}
///////////
if(LEDS_A[n]==124){
  if (F0=="F"){

  }
  else LED124();

}
//////
/////
if(LEDS_A[n]==125){
  if (F0=="F"){

  }
  else LED125();

}
//////
}}





void	setup()	{

		//set	decoder	pins	to	low

		pinMode(p0,	OUTPUT);

		digitalWrite(p0,	LOW);

		pinMode(p1,	OUTPUT);

		digitalWrite(p0,	LOW);

		pinMode(p2,	OUTPUT);

		digitalWrite(p0,	LOW);

		pinMode(p3,	OUTPUT);

		digitalWrite(p0,	LOW);

		pinMode(p4,	OUTPUT);

		digitalWrite(p0,	LOW);



		//set	cathode	pins	to	low

		pinMode(Z0,	OUTPUT);

		digitalWrite(Z0,	LOW);

		pinMode(Z1,	OUTPUT);

		digitalWrite(Z1,	LOW);

		pinMode(Z2,	OUTPUT);

		digitalWrite(Z2,	LOW);

		pinMode(Z3,	OUTPUT);

		digitalWrite(Z3,	LOW);

		pinMode(Z4,	OUTPUT);

		digitalWrite(Z4,	LOW);



		//enable	decoders

		pinMode(pEN,	OUTPUT);

		digitalWrite(pEN,	HIGH);	}



void	loop()	{
