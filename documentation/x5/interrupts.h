#pragma once
#include "registers.h"

// PCMSK (Pin Change Mask Register)
#define PCINT5 5
#define PCINT4 4
#define PCINT3 3
#define PCINT2 2
#define PCINT1 1
#define PCINT0 0

// GIFR
#define INTF0 6
#define PCIF 5

// GIMSK 
#define INT0 6
#define PCIE 5

typedef struct
{
    Register<uint8_t, 0x15> PCMSK; // Pin Change Mask Register
    Register<uint8_t, 0x3A> GIFR;  // General Interrupt Flag Register
    Register<uint8_t, 0x3B> GIMSK; // General Interrupt Mask Register
} _INTERRUPTS;

// partially re-written avr-lib code

#define ISR(vector, ...) \
    extern "C" void vector(void) __attribute__((__signal__,__VA_ARGS__)); \
    void vector(void)

/* Interrupt vector 0 is the reset vector. */
/* External Interrupt 0 */
#define INT0_vect_num	        1
#define INT0_vect			    __vector_1
#define SIG_INTERRUPT0			__vector_1

/* Pin change Interrupt Request 0 */
#define PCINT0_vect_num			2
#define PCINT0  			    __vector_2
#define SIG_PIN_CHANGE			__vector_2

/* Timer/Counter1 Compare Match 1A */
#define TIM1_COMPA_vect_num		3
#define TIM1_COMPA   			__vector_3
#define TIMER1_COMPA_vect_num	3
#define TIMER1_COMPA    		__vector_3
#define SIG_OUTPUT_COMPARE1A	__vector_3

/* Timer/Counter1 Overflow */
#define TIM1_OVF_vect_num		4
#define TIM1_OVF    			__vector_4
#define TIMER1_OVF_vect_num		4
#define TIMER1_OVF  			__vector_4
#define SIG_OVERFLOW1			__vector_4

/* Timer/Counter0 Overflow */
#define TIM0_OVF_vect_num		5
#define TIM0_OVF_vect			__vector_5
#define TIMER0_OVF_vect_num		5
#define TIMER0_OVF_vect			__vector_5
#define SIG_OVERFLOW0			__vector_5

/* EEPROM Ready */
#define EE_RDY_vect_num			6
#define EE_RDY_vect		    	_VECTOR(6)
#define SIG_EEPROM_READY		_VECTOR(6)

/* Analog comparator */
#define ANA_COMP_vect_num		7
#define ANA_COMP_vect			_VECTOR(7)
#define SIG_COMPARATOR			_VECTOR(7)

/* ADC Conversion ready */
#define ADC_vect_num    		8
#define ADC_vect		    	_VECTOR(8)
#define SIG_ADC				    _VECTOR(8)

/* Timer/Counter1 Compare Match B */
#define TIM1_COMPB_vect_num  	9
#define TIM1_COMPB_vect			_VECTOR(9)
#define TIMER1_COMPB_vect_num	9
#define TIMER1_COMPB_vect   	_VECTOR(9)
#define SIG_OUTPUT_COMPARE1B	_VECTOR(9)

/* Timer/Counter0 Compare Match A */
#define TIM0_COMPA_vect_num		10
#define TIM0_COMPA_vect			_VECTOR(10)
#define TIMER0_COMPA_vect_num	10
#define TIMER0_COMPA_vect		_VECTOR(10)
#define SIG_OUTPUT_COMPARE0A	_VECTOR(10)

/* Timer/Counter0 Compare Match B */
#define TIM0_COMPB_vect_num		11
#define TIM0_COMPB_vect			_VECTOR(11)
#define TIMER0_COMPB_vect_num	11
#define TIMER0_COMPB_vect		_VECTOR(11)
#define SIG_OUTPUT_COMPARE0B	_VECTOR(11)

/* Watchdog Time-out */
#define WDT_vect_num			12
#define WDT_vect				_VECTOR(12)
#define SIG_WATCHDOG_TIMEOUT	_VECTOR(12)

/* USI START */
#define USI_START_vect_num		13
#define USI_START_vect			_VECTOR(13)
#define SIG_USI_START			_VECTOR(13)

/* USI Overflow */
#define USI_OVF_vect_num		14
#define USI_OVF_vect			_VECTOR(14)
#define SIG_USI_OVERFLOW		_VECTOR(14)

#define _VECTORS_SIZE 30