#pragma once
#include <stdint.h>

template <typename Type, uint8_t address, bool SFR = true>
struct Register
{
private:
    inline static constexpr volatile Type *reg()
    {
        return reinterpret_cast<volatile Type *>(address + (SFR ? 0x20 : 0x0));
    }

public:
    volatile Type *operator->()
    {
        return reg();
    }

    void operator=(uint8_t value)
    {
        *reg() = static_cast<Type>(value);
    }

    // Cast reg() to uint, store in variable
    // OR variable with passed uint
    // cast variable to Type
    // set reg() with new updated type value
    // void operator|=(uint8_t value)
    // {
    //     uint8_t *r = static_cast<uint8_t*>(reg());
        
    // }
};

typedef struct
{
    uint8_t PB0 : 1;
    uint8_t PB1 : 1;
    uint8_t PB2 : 1;
    uint8_t PB3 : 1;
    uint8_t PB4 : 1;
    uint8_t PB5 : 1;
    uint8_t rsvd1 : 2;
} PORTB_reg;

typedef struct
{
    uint8_t DB0 : 1;
    uint8_t DB1 : 1;
    uint8_t DB2 : 1;
    uint8_t DB3 : 1;
    uint8_t DB4 : 1;
    uint8_t DB5 : 1;
    uint8_t rsvd1 : 2;
} DDRB_reg;

extern Register<DDRB_reg, 0x17> DDRB;
extern Register<PORTB_reg, 0x18> PORTB;
// extern Register<PINB_reg, 0x00> PINB;

