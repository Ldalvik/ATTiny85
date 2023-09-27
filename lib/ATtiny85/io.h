#pragma once
#include "registers.h"

#define PB5 5
#define PB4 4
#define PB3 3
#define PB2 2
#define PB1 1
#define PB0 0

#define DDB5 5
#define DDB4 4
#define DDB3 3
#define DDB2 2
#define DDB1 1
#define DDB0 0

#define PINB5 5
#define PINB4 4
#define PINB3 3
#define PINB2 2
#define PINB1 1
#define PINB0 0

typedef struct
{
    Register<0x18> PORTB;
    Register<0x17> DDRB;  
    Register<0x16> PINB;
} _GPIOPORT;
