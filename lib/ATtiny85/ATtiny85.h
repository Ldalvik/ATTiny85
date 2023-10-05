#pragma once

#include "adc.h"
#include "delay.h"
#include "deadtime.h"
#include "eeprom.h"
#include "interrupts.h"
#include "io.h"
#include "registers.h"
#include "serial.h"
#include "system.h"
#include "timers.h"

extern _GPIOPORT   GPIOPORT;
extern _ADC        ADC;
extern _EEPROM     EEPROM;
extern _DEADTIME   DEADTIME;
extern _INTERRUPTS INTERRUPTS;
extern _SERIAL     SERIAL;
extern _SYSTEM     SYSTEM;
extern _TIMERS     TIMERS;

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
} ATtiny85;