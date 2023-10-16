// This is the lowest level C code you can write for this chip, other than assembly

// #define PORTB *((volatile unsigned char *)0x18 + 0x20)
// #define DDRB *((volatile unsigned char *)0x17 + 0x20)

// int main()
// {
//     DDRB |= (1 << 0);
//     PORTB |= (1 << 0);

//     while (1)
//     {
//     }
// }
