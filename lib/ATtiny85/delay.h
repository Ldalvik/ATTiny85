#pragma once
#include <stdint.h>

// These delays are not working, trying to port from avr. Use delay().

// static __inline__ void _delay_loop_1(uint8_t __count) __attribute__((__always_inline__));
// static __inline__ void _delay_loop_2(uint16_t __count) __attribute__((__always_inline__));

// static __inline__ void _delay_us(double __us) __attribute__((__always_inline__));
// static __inline__ void _delay_ms(double __ms) __attribute__((__always_inline__));
// /**
//     Executes three CPU cycles per loop.
//     Not including the overhead the compiler requires to setup the
//     counter register.

//     Delays up to 768ms at a CPU speed of 1MHz
// **/
// void _delay_loop_1(uint8_t __count)
// {
//     __asm__ volatile(
//         "1: dec %0"
//         "\n\t"
//         "brne 1b"
//         : "=r"(__count)
//         : "0"(__count));
// }

// /**
//     Executes four CPU cycles per loop.
//     Not including the overhead the compiler requires to setup the
//     counter register pair.

//     Delays up to 262.1us at a CPU speed of 1MHz
// **/
// void _delay_loop_2(uint16_t __count)
// {
//     __asm__ volatile(
//         "1: sbiw %0,1"
//         "\n\t"
//         "brne 1b"
//         : "=w"(__count)
//         : "0"(__count));
// }

// // Adds about 6 bytes
// void _delay_us(double __us)
// {
//     uint8_t __ticks;
//     double __tmp, __tmp2;
//     __tmp = ((F_CPU) / 3e6) * __us;
//     __tmp2 = ((F_CPU) / 4e6) * __us;
//     if (__tmp < 1.0)
//         __ticks = 1;
//     else if (__tmp2 > 65535)
//     {
//         _delay_ms(__us / 1000.0);
//         return;
//     }
//     else if (__tmp > 255)
//     {
//         uint16_t __ticks = (uint16_t)__tmp2;
//         _delay_loop_2(__ticks);
//         return;
//     }
//     else
//         __ticks = (uint8_t)__tmp;
//     _delay_loop_1(__ticks);
// }

// // Adds about 8 bytes
// void _delay_ms(double __ms)
// {
//     uint16_t __ticks;
//     double __tmp;
//     __tmp = ((F_CPU) / 4e3) * __ms;
//     if (__tmp < 1.0)
//         __ticks = 1;
//     else if (__tmp > 65535)
//     {
//         //	__ticks = requested delay in 1/10 ms
//         __ticks = (uint16_t)(__ms * 10.0);
//         while (__ticks)
//         {
//             // wait 1/10 ms
//             _delay_loop_2(((F_CPU) / 4e3) / 10);
//             __ticks--;
//         }
//         return;
//     }
//     else
//         __ticks = (uint16_t)__tmp;
//     _delay_loop_2(__ticks);
// }

// This delay function takes up a lot space in flash, but
// inlining it brings it down to ~64 bytes per use.
// No need to inline if you're using it a lot
inline 
static void delay(volatile long delayTime)
{
    volatile long d = delayTime;
    for (; d > 0; d--){}
}