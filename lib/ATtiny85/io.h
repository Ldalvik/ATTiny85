#pragma once
#include "registers.h"

// PORTB
#define PB5 5
#define PB4 4
#define PB3 3
#define PB2 2
#define PB1 1
#define PB0 0

// DDRB
#define DDB5 5
#define DDB4 4
#define DDB3 3
#define DDB2 2
#define DDB1 1
#define DDB0 0

// PINB
#define PINB5 5
#define PINB4 4
#define PINB3 3
#define PINB2 2
#define PINB1 1
#define PINB0 0

typedef struct
{
    Register<uint8_t, 0x18> PORTB;
    Register<uint8_t, 0x17> DDRB;  
    Register<uint8_t, 0x16> PINB;
} _GPIOPORT;
