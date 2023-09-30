#pragma once
#include "registers.h"
#include "io.h"
#include "adc.h"
#include "delay.h"

extern _GPIOPORT GPIOPORT;
extern _ADC ADC;

extern struct
{
    _GPIOPORT GPIOPORT;
    _ADC ADC;
} ATtiny85;


// extern Register<DDRB_reg, 0x17> DDRB;
// extern Register<PORTB_reg, 0x18> PORTB;
// // extern Register<PINB_reg, 0x00> PINB;

// extern Register<uint8_t, 0x05> ADCH;
// extern Register<uint8_t, 0x04> ADCL;
