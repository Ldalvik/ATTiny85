#pragma once
#include <stdint.h>

template <typename Type, uint8_t address, bool SFR = true>
struct Register
{
private:
    inline static volatile Type *reg = reinterpret_cast<volatile Type *>(address + (SFR ? 0x20 : 0x0));

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
