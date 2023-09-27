#include "ATtiny85.h"

int main()
{
	GPIOPORT.DDRB.set(DDB0);

	while (1)
	{
		GPIOPORT.PORTB.set(PB0, PB1);
		delay(50000);

		GPIOPORT.PORTB.set(PB0);
		delay(25000);
	}
}
