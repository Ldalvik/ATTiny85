#include "ATtiny85.h"

int main()
{
	_GPIOPORT gpio = ATtiny85.GPIOPORT;
	// Register DDRB = ATtiny85.GPIOPORT.DDRB;
	// DDRB.set(DDB0, DDB1);
	
	gpio.DDRB.set(DDB0, DDB1);

	while (1)
	{
		gpio.PORTB.set(PB0, PB1);
		//delay(50000);

		gpio.PORTB.clear(PB0, PB1);
		//delay(25000);
	}
}
