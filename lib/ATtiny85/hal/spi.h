#pragma once

#include "ATtiny85.h"
#include "avr/interrupt.h"
#include "util/atomic.h"

class SPI
{
public:
    SPI();
    ~SPI();
    void init();
    void write(uint8_t data);
    void fastWrite(uint8_t data);
    uint8_t read();
};