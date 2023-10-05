#pragma once
#include "registers.h"

// PCMSK
#define PCINT5 5
#define PCINT4 4
#define PCINT3 3
#define PCINT2 2
#define PCINT1 1
#define PCINT0 0

// GIFR
#define INTF0 6
#define PCIF 5

// GIMSK 
#define INT0 6
#define PCIE 5

typedef struct
{
    Register<uint8_t, 0x15> PCMSK;
    Register<uint8_t, 0x3A> GIFR;
    Register<uint8_t, 0x3B> GIMSK;
} _INTERRUPTS;
