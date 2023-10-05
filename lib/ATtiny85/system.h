#pragma once
#include "registers.h"

// PRR (Power Reduction Register)
#define PRTIM1 3
#define PRTIM0 2
#define PRUSI 1
#define PRADC 0

// 0xF0
// #define __AVR_HAVE_PRR ((1 << PRADC) | (1 << PRUSI) | (1 << PRTIM0) | (1 << PRTIM1))

// WDTCR 
#define WDIF 7
#define WDIE 6
#define WDP3 5
#define WDCE 4
#define WDE 3
#define WDP2 2
#define WDP1 1
#define WDP0 0

// MCUSR
#define WDRF 3
#define BORF 2
#define EXTRF 1
#define PORF 0

// MCUCR
#define BODS 7
#define PUD 6
#define SE 5
#define SM1 4
#define SM0 3
#define BODSE 2
#define ISC01 1
#define ISC00 0

// SPMCSR
#define RSIG 5
#define CTPB 4
#define RFLB 3
#define PGWRT 2
#define PGERS 1
#define SPMEN 0

typedef struct
{
    Register<uint8_t, 0x20> PRR;
    Register<uint8_t, 0x21> WDTCR;
    Register<uint8_t, 0x22> DWDR;
    Register<uint8_t, 0x31> OSCCAL;
    Register<uint8_t, 0x34> MCUSR;
    Register<uint8_t, 0x35> MCUCR;
    Register<uint8_t, 0x37> SPMCSR;

    // Register<uint8_t, 0x11> GPIOR0;
    // Register<uint8_t, 0x12> GPIOR1;
    // Register<uint8_t, 0x13> GPIOR2;
} _SYSTEM;