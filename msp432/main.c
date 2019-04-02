#include "msp.h"

#define PGIO_MODE_OUTPUT 0x01

#define LED_STATE_ON 0x01

#define DELAY 10000
/**
 * main.c
 */
void main(void)
{
	WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;		// stop watchdog timer
	P1DIR |= PGIO_MODE_OUTPUT;

	volatile unsigned int i;

	while(1)
	{
	    P1OUT ^= LED_STATE_ON;
	    for(i = DELAY; i> 0; i--);
	}
}
