#pragma once
#include "registers.h"

// EECR (EEPROM Control Register)
#define EEPM1 5
#define EEPM0 4
#define EERIE 3
#define EEMPE 2
#define EEPE 1
#define EERE 0

typedef struct
{
    Register<uint8_t, 0x1C> EECR;  // EEPROM Control Register
    Register<uint8_t, 0x1D> EEDR;  // EEPROM Data Register
    Register<uint16_t, 0x1E> EEAR; // EEPROM Address Register
    Register<uint8_t, 0x1E> EEARL; // EEPROM Address Register Low
    Register<uint8_t, 0x1F> EEARH; // EEPROM Address Register High
} _EEPROM;