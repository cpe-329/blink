#include <msp430.h>				

#define PGIO_MODE_OUTPUT 0x01

#define LED_STATE_ON 0x01
/**
 * blink.c
 */
void main(void)
{
	WDTCTL = WDTPW | WDTHOLD;		// stop watchdog timer
	P1DIR |= PGIO_MODE_OUTPUT;					// configure P1.0 as output

	volatile unsigned int i;		// volatile to prevent optimization

	while(1)
	{
		P1OUT ^= LED_STATE_ON;				// toggle P1.0
		for(i=10000; i>0; i--);     // delay
	}
}
