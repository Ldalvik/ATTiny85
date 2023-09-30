#pragma once
#include <stdint.h>

template <uint8_t address, bool SFR = true>
struct Register
{
private:
    inline static volatile uint8_t *reg = reinterpret_cast<volatile uint8_t *>(address + (SFR ? 0x20 : 0x0));

public:
    /* Sets all bits to 0 */
    void clear()
    {
        *reg = 0x0;
    }

    /* Sets all bits to 1 */
    void set()
    {
        *reg = 0xFF;
    }

    /* Set 1 or multiple bits at a time. */
    template <typename... Bits>
    void set(Bits... bits)
    {
        ((*reg |= (1 << bits)), ...);
    }

    /* Clear 1 or multiple bits at a time. */
    template <typename... Bits>
    void clear(Bits... bits)
    {
        ((*reg &= ~(1 << bits)), ...);
    }
};

// #define GPIOR0 _SFR_IO8(0x11)
// #define GPIOR1 _SFR_IO8(0x12)
// #define GPIOR2 _SFR_IO8(0x13)

// /* EEPROM Control Register EECR */
// #define EECR _SFR_IO8(0x1C)
// #define EEPM1 5
// #define EEPM0 4
// #define EERIE 3
// #define EEMPE 2
// #define EEPE 1
// #define EERE 0

// /* EEPROM Data Register */
// #define EEDR _SFR_IO8(0x1D)

// /* EEPROM Address Register */
// #define EEAR _SFR_IO16(0x1E)
// #define EEARL _SFR_IO8(0x1E)
// #define EEARH _SFR_IO8(0x1F)

// #define PRR _SFR_IO8(0x20)
// #define PRTIM1 3
// #define PRTIM0 2
// #define PRUSI 1
// #define PRADC 0

// #define __AVR_HAVE_PRR ((1 << PRADC) | (1 << PRUSI) | (1 << PRTIM0) | (1 << PRTIM1))
// #define __AVR_HAVE_PRR_PRADC
// #define __AVR_HAVE_PRR_PRUSI
// #define __AVR_HAVE_PRR_PRTIM0
// #define __AVR_HAVE_PRR_PRTIM1

// #define WDTCR _SFR_IO8(0x21)
// #define WDIF 7
// #define WDIE 6
// #define WDP3 5
// #define WDCE 4
// #define WDE 3
// #define WDP2 2
// #define WDP1 1
// #define WDP0 0

// #define DWDR _SFR_IO8(0x22)

// #define DTPS1 _SFR_IO8(0x23)
// #define DTPS11 1
// #define DTPS10 0

// #define DT1B _SFR_IO8(0x24)
// #define DT1BH3 7
// #define DT1BH2 6
// #define DT1BH1 5
// #define DT1BH0 4
// #define DT1BL3 3
// #define DT1BL2 2
// #define DT1BL1 1
// #define DT1BL0 0

// #define DT1A _SFR_IO8(0x25)
// #define DT1AH3 7
// #define DT1AH2 6
// #define DT1AH1 5
// #define DT1AH0 4
// #define DT1AL3 3
// #define DT1AL2 2
// #define DT1AL1 1
// #define DT1AL0 0

// #define CLKPR _SFR_IO8(0x26)
// #define CLKPCE 7
// #define CLKPS3 3
// #define CLKPS2 2
// #define CLKPS1 1
// #define CLKPS0 0

// #define PLLCSR _SFR_IO8(0x27)
// #define LSM 7
// #define PCKE 2
// #define PLLE 1
// #define PLOCK 0

// #define OCR0B _SFR_IO8(0x28)

// #define OCR0A _SFR_IO8(0x29)

// #define TCCR0A _SFR_IO8(0x2A)
// #define COM0A1 7
// #define COM0A0 6
// #define COM0B1 5
// #define COM0B0 4
// #define WGM01 1
// #define WGM00 0

// #define OCR1B _SFR_IO8(0x2B)

// #define GTCCR _SFR_IO8(0x2C)
// #define TSM 7
// #define PWM1B 6
// #define COM1B1 5
// #define COM1B0 4
// #define FOC1B 3
// #define FOC1A 2
// #define PSR1 1
// #define PSR0 0

// #define OCR1C _SFR_IO8(0x2D)

// #define OCR1A _SFR_IO8(0x2E)

// #define TCNT1 _SFR_IO8(0x2F)

// #define TCCR1 _SFR_IO8(0x30)
// #define CTC1 7
// #define PWM1A 6
// #define COM1A1 5
// #define COM1A0 4
// #define CS13 3
// #define CS12 2
// #define CS11 1
// #define CS10 0

// #define OSCCAL _SFR_IO8(0x31)

// #define TCNT0 _SFR_IO8(0x32)

// #define TCCR0B _SFR_IO8(0x33)
// #define FOC0A 7
// #define FOC0B 6
// #define WGM02 3
// #define CS02 2
// #define CS01 1
// #define CS00 0

// #define MCUSR _SFR_IO8(0x34)
// #define WDRF 3
// #define BORF 2
// #define EXTRF 1
// #define PORF 0

// #define MCUCR _SFR_IO8(0x35)
// #define BODS 7
// #define PUD 6
// #define SE 5
// #define SM1 4
// #define SM0 3
// #define BODSE 2
// #define ISC01 1
// #define ISC00 0

//     /* Reserved [0x36] */

// #define SPMCSR _SFR_IO8(0x37)
// #define RSIG 5
// #define CTPB 4
// #define RFLB 3
// #define PGWRT 2
// #define PGERS 1
// #define SPMEN 0

// #define TIFR _SFR_IO8(0x38)
// #define OCF1A 6
// #define OCF1B 5
// #define OCF0A 4
// #define OCF0B 3
// #define TOV1 2
// #define TOV0 1

// #define TIMSK _SFR_IO8(0x39)
// #define OCIE1A 6
// #define OCIE1B 5
// #define OCIE0A 4
// #define OCIE0B 3
// #define TOIE1 2
// #define TOIE0 1

// #define GIFR _SFR_IO8(0x3A)
// #define INTF0 6
// #define PCIF 5

// #define GIMSK _SFR_IO8(0x3B)
// #define INT0 6
// #define PCIE 5