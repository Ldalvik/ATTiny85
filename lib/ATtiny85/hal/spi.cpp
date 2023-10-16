#include "spi.h"

// No Clock:                    USICLK = 0, USICS0 = 0, USICS1 = 0
// Timer/Counter Compare Match: USICS1 = 0, USICS0 = 1
// External Positive Edge:      USICS0 = 0, USICLK = 0, USICS1 = 1
// #define EXT_NEGATIVE_EDGE          (USISR & ~(sb(USICLK)) | sb(USICS1)) | sb(USICS0)
// #define EXT_POSITIVE_EDGE_SOFTWARE (USISR & ~sb(USICS0)) | sb(USICLK) | sb(USICS1)
// #define EXT_NEGATIVE_EDGE_SOFTWARE sb(USICLK) | sb(USICS0) | sb(USICS1)

SPI::SPI() {}

SPI::~SPI() { // Disable USI 
    USICR &= ~(set(USIWM1) | set(USIWM0));
}

void SPI::init()
{
    DDRB |= set(DDB1) | set(DDB2);                   // Set PB1 and PB2 as output
    DDRB &= ~set(DDB0);                              // Set PB0 as input
    USICR = set(USIWM0) | set(USICS1) | set(USICLK); // Set 3-wire mode (SPI)
}

// Writes a byte using the software clock
// TODO: Allow setting different clock modes
void SPI::write(uint8_t data)
{
    USIDR = data;
    USISR = set(USIOIF);

    ATOMIC_BLOCK(ATOMIC_RESTORESTATE)
    {
        while (!(USISR & set(USIOIF))) USICR |= set(USITC);
    }
}

void SPI::fastWrite(uint8_t data)
{
    USIDR = data; // Put data in the data register

    // 15.3.2, page 111
    // Writes data at half the clock speed
    USICR |= set(USIWM0);
    USICR &= ~(set(USICS0) | set(USITC));

    USICR |= set(USICLK);
    USICR &= ~set(USICLK);
    USICR |= set(USICLK);
    USICR &= ~set(USICLK);
    USICR |= set(USICLK);
    USICR &= ~set(USICLK);
    USICR |= set(USICLK);
    USICR &= ~set(USICLK);
    USICR |= set(USICLK);
    USICR &= ~set(USICLK);
    USICR |= set(USICLK);
    USICR &= ~set(USICLK);
    USICR |= set(USICLK);
    USICR &= ~set(USICLK);
    USICR |= set(USICLK);

    volatile uint8_t dummy = USIDR;
}

uint8_t SPI::read()
{
    while (!(USISR & set(USIOIF))){}
    USISR |= set(USIOIF);
    return USIBR;
}