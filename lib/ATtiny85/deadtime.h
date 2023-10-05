#pragma once
#include "registers.h"

// DTPS1
#define DTPS11 1
#define DTPS10 0

// DT1B
#define DT1BH3 7
#define DT1BH2 6
#define DT1BH1 5
#define DT1BH0 4
#define DT1BL3 3
#define DT1BL2 2
#define DT1BL1 1
#define DT1BL0 0

// DT1A 
#define DT1AH3 7
#define DT1AH2 6
#define DT1AH1 5
#define DT1AH0 4
#define DT1AL3 3
#define DT1AL2 2
#define DT1AL1 1
#define DT1AL0 0

typedef struct
{
    Register<uint8_t, 0x23> DTPS1;
    Register<uint8_t, 0x24> DT1B;
    Register<uint8_t, 0x25> DT1A;    
} _DEADTIME;