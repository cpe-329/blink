#include "msp.h"

#define GPIO_1_MODE_OUTPUT 0x01
#define LED_STATE_ON 0x01
#define DELAY (100000)

void main(void)
{
    WDT_A->CTL = WDT_A_CTL_PW | WDT_A_CTL_HOLD;     // stop watchdog timer

    P1DIR |= GPIO_1_MODE_OUTPUT;

    volatile uint32_t i;

    while(1)
    {
        P1OUT ^= LED_STATE_ON;
        for(i = DELAY; i> 0; i--);
    }
}
