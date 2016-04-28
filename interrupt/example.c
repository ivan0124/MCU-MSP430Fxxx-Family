#include <msp430f5529.h>

void main(void)
{

    WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
    P1DIR |= 0x01; // Set P1.0 to output direction
    P1IE |= 0x10; // P1.4 interrupt enabled
    P1IES |= 0x10; // P1.4 Hi/lo edge
    P1IFG &= ~0x10; // P1.4 IFG cleared

    _bis_sr_register(LPM4_bits + GIE); // Enter LPM4 w/interrupt

}

// Port 1 interrupt service routine
#pragma vector=PORT1_VECTOR

__interrupt void Port_1(void)
{
    P1OUT ^= 0x01; // P1.0 = toggle
    P1IFG &= ~0x10; // P1.4 IFG cleared
}
