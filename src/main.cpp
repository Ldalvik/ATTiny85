#include "ATtiny85.h"

int main()
{
	DDRB->DB0 = 1;
	while (1)
	{
		// PORTB |= 0b00000001;
		// PORTB |= 0x08;

		PORTB->PB0 = 1;
		delay(1000);

		PORTB->PB0 = 0;
		delay(50000);
		delay(50000);
	}
}
