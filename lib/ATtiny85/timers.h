#pragma once
#include "registers.h"

// CLKPR
#define CLKPCE 7
#define CLKPS3 3
#define CLKPS2 2
#define CLKPS1 1
#define CLKPS0 0

// PLLCSR
#define LSM 7
#define PCKE 2
#define PLLE 1
#define PLOCK 0

// TCCR0A
#define COM0A1 7
#define COM0A0 6
#define COM0B1 5
#define COM0B0 4
#define WGM01 1
#define WGM00 0

// GTCCR
#define TSM 7
#define PWM1B 6
#define COM1B1 5
#define COM1B0 4
#define FOC1B 3
#define FOC1A 2
#define PSR1 1
#define PSR0 0

// TCCR1
#define CTC1 7
#define PWM1A 6
#define COM1A1 5
#define COM1A0 4
#define CS13 3
#define CS12 2
#define CS11 1
#define CS10 0

// TCCR0B 
#define FOC0A 7
#define FOC0B 6
#define WGM02 3
#define CS02 2
#define CS01 1
#define CS00 0

// TIFR
#define OCF1A 6
#define OCF1B 5
#define OCF0A 4
#define OCF0B 3
#define TOV1 2
#define TOV0 1

// TIMSK 
#define OCIE1A 6
#define OCIE1B 5
#define OCIE0A 4
#define OCIE0B 3
#define TOIE1 2
#define TOIE0 1


typedef struct
{
    Register<uint8_t, 0x26> CLKPR;
    Register<uint8_t, 0x27> PLLCSR;
    Register<uint8_t, 0x28> OCR0B;
    Register<uint8_t, 0x29> OCR0A;
    Register<uint8_t, 0x2A> TCCR0A;
    Register<uint8_t, 0x2B> OCR1B;
    Register<uint8_t, 0x2C> GTCCR;
    Register<uint8_t, 0x2D> OCR1C;
    Register<uint8_t, 0x2E> OCR1A;
    Register<uint8_t, 0x2F> TCNT1;
    Register<uint8_t, 0x30> TCCR1;
    Register<uint8_t, 0x32> TCNT0;
    Register<uint8_t, 0x33> TCCR0B;
    Register<uint8_t, 0x38> TIFR;
    Register<uint8_t, 0x39> TIMSK;
    Register<uint8_t, 0x33> TCCR0B;
} _TIMERS;
