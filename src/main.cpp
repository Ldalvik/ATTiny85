#include "ATtiny85.h"

int main()
{
	ATtiny85.GPIOPORT.DDRB.reg |= (1 << PB0);
	while (1)
	{
		
	}
}
