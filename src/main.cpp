#include "ATtiny85.h"

int main()
{
	DDRB->DB0 = 1;
	while (1)
	{
		// PORTB = 0x08;  // working
		// PORTB |= 0x08; // not working
		// PORTB ^= 0x08; // not working
		// PORTB &= 0x08; // not working

		PORTB->PB0 = 1;
		delay(50000);

		PORTB->PB0 = 0;
		delay(25000);
	}
}
