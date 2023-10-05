/*  Universal Serial Bus (Page 108, chapter 15) */
    
/* Features:
    • Two-wire Synchronous Data Transfer (Master or Slave)
    • Three-wire Synchronous Data Transfer (Master or Slave)
    • Data Received Interrupt
    • Wakeup from Idle Mode
    • Wake-up from All Sleep Modes In Two-wire Mode
    • Two-wire Start Condition Detector with Interrupt Capability
*/

#pragma once
#include "registers.h"

// USICR (USI Control Register)
#define USISIE 7
#define USIOIE 6
#define USIWM1 5
#define USIWM0 4
#define USICS1 3
#define USICS0 2
#define USICLK 1
#define USITC  0

// USISR (USI Status Register)
#define USISIF 7
#define USIOIF 6
#define USIPF 5
#define USIDC 4
#define USICNT3 3
#define USICNT2 2
#define USICNT1 1
#define USICNT0 0

typedef struct
{
    Register<uint8_t, 0x0D> USICR; // USI Control Register
    Register<uint8_t, 0x0E> USISR; // USI Status Register
    Register<uint8_t, 0x0F> USIDR; // USI Data Register
    Register<uint8_t, 0x10> USIBR; // USI Buffer Register
} _SERIAL;
