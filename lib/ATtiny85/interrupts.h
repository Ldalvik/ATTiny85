#pragma once
#include "registers.h"

// PCMSK
// #define PCINT5 5
// #define PCINT4 4
// #define PCINT3 3
// #define PCINT2 2
// #define PCINT1 1
// #define PCINT0 0

typedef struct
{
    Register<0x15> USICR;
} _USI;
