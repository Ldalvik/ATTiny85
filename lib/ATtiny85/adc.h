/* Analog to Digital Converter (page , chapter ) */

#pragma once
#include "registers.h"

// ADCSRB
#define BIN     7
#define ACME    6
#define IPR     5
#define ADTS2   2
#define ADTS1   1
#define ADTS0   0

// ADCSRA
#define ADEN    7
#define ADSC    6
#define ADATE   5
#define ADIF    4
#define ADIE    3
#define ADPS2   2
#define ADPS1   1
#define ADPS0   0

// ADMUX
#define REFS1   7
#define REFS0   6
#define ADLAR   5
#define REFS2   4
#define MUX3    3
#define MUX2    2
#define MUX1    1
#define MUX0    0

// ACSR
#define ACD     7
#define ACBG    6
#define ACO     5
#define ACI     4
#define ACIE    3
#define ACIS1   1
#define ACIS0   0

// DIDR0 
#define ADC0D   5
#define ADC2D   4
#define ADC3D   3
#define ADC1D   2
#define AIN1D   1
#define AIN0D   0

typedef struct
{
    Register<uint8_t,  0x03> ADCSRB;
    Register<uint16_t, 0x04> ADCW;
    Register<uint8_t,  0x04> ADCL;
    Register<uint8_t,  0x05> ADCH;
    Register<uint8_t,  0x06> ADCSRA;  
    Register<uint8_t,  0x07> ADMUX;
    Register<uint8_t,  0x08> ACSR;
    Register<uint8_t,  0x14> DIDR0;
} _ADC;
