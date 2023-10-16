#pragma once

#include "x5/adc.h"
#include "x5/delay.h"
#include "x5/deadtime.h"
#include "x5/eeprom.h"
#include "x5/interrupts.h"
#include "x5/io.h"
#include "x5/registers.h"
#include "x5/serial.h"
#include "x5/system.h"
#include "x5/timers.h"

extern _GPIOPORT   GPIOPORT;
extern _ADC        ADC;
extern _EEPROM     EEPROM;
extern _DEADTIME   DEADTIME;
extern _INTERRUPTS INTERRUPTS;
extern _SERIAL     SERIAL;
extern _SYSTEM     SYSTEM;
extern _TIMERS     TIMERS;

typedef struct
{
    Register<uint8_t,  0x03> ADCSRB; // ADC Control and Status Register B
    Register<uint16_t, 0x04> ADCW;   // ADC Data Register
    Register<uint8_t,  0x04> ADCL;   // ADC Data Register Low Byte
    Register<uint8_t,  0x05> ADCH;   // ADC Data Register High Byte
    Register<uint8_t,  0x06> ADCSRA; // ADC Control and Status Register A
    Register<uint8_t,  0x07> ADMUX;  // ADC Multiplexer Selection Register
    Register<uint8_t,  0x08> ACSR;   // Analog Comparator Control and Status Register
    
    Register<uint8_t,  0x0D> USICR;  // USI Control Register
    Register<uint8_t,  0x0E> USISR;  // USI Status Register
    Register<uint8_t,  0x0F> USIDR;  // USI Data Register
    Register<uint8_t,  0x10> USIBR;  // USI Buffer Register
    
    Register<uint8_t,  0x11> GPIOR0; // GPIO R0
    Register<uint8_t,  0x12> GPIOR1; // GPIO R1
    Register<uint8_t,  0x13> GPIOR2; // GPIO R2

    Register<uint8_t,  0x14> DIDR0;  // Digital Input Disable Register 0
    Register<uint8_t,  0x15> PCMSK;  // Pin Change Mask Register

    Register<uint8_t,  0x16> PINB;   // Port B Input Pins Address
    Register<uint8_t,  0x17> DDRB;   // Port B Data Direction
    Register<uint8_t,  0x18> PORTB;  // Port B Data Register

    Register<uint8_t,  0x1C> EECR;   // EEPROM Control Register
    Register<uint8_t,  0x1D> EEDR;   // EEPROM Data Register
    Register<uint16_t, 0x1E> EEAR;   // EEPROM Address Register
    Register<uint8_t,  0x1E> EEARL;  // EEPROM Address Register Low
    Register<uint8_t,  0x1F> EEARH;  // EEPROM Address Register High

    Register<uint8_t,  0x20> PRR;    // Power Reduction Register
    Register<uint8_t,  0x21> WDTCR;  // Watchdog Timer Control Register
    Register<uint8_t,  0x22> DWDR;   // debugWire Data Register
  

} _ALL;

extern struct
{
    _GPIOPORT   GPIOPORT;
    _ADC        ADC;
    _EEPROM     EEPROM;
    _DEADTIME   DEADTIME;
    _INTERRUPTS INTERRUPTS;
    _SERIAL     SERIAL;
    _SYSTEM     SYSTEM;
    _TIMERS     TIMERS;
    _ALL        all;
} ATtiny85;
