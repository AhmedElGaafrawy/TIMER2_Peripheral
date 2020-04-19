/*
 * main.c
 *
 *  Created on : Apr 17, 2020
 *  Version	   : 1.0.0
 *  Author     : Ahmed El-Gaafarwy
 */
#include "../LIBRARY/stdTypes.h"
#include "../LIBRARY/BIT_MATH.h"
#include "../LIBRARY/errorStates.h"
#include "../LIBRARY/AVR_REG.h"

#include "../MCAL/GIE/GIE_int.h"

#include "../MCAL/TIMER2_int.h"


void fun (void * ptr);

int main ()
{
	DDRC=0xff;
	PORTC=0;
	DDRD|=(1<<7);
	TIMER2_enuInit();
	TIMER2_enuSetCTC_Value(250);
	TIMER2_enuGeneratePWM(25);
	//TIMER2_enuDelayMilliSecond(fun , NULL , 1000 , 10000);
	//TIMER2_enuEnableCTC_Interrupt();
	//TIMER2_enuSetCTC_Value(250);
	//GIE_enuEnable();
	while (1);
	return 0;
}

void fun (void * ptr)
{
	PORTC=~PORTC;
}
