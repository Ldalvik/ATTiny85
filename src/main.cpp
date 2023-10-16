#include "ATtiny85.h"
#include "util/delay.h"

int main()
{
	SPI_Init();	

	while (1)
	{
		SPI_write(0x03);
	}
}
