#include<bitwise.h>

unsigned int swap_bytes(unsigned int inputNumber)
{
    unsigned int bits=0;

    printf("Bit Pattren of %u is : ",inputNumber);
    bit_pattren(inputNumber);

    while(inputNumber>0)
    {
        bits =((bits << 8) | (inputNumber & 0xff));
        inputNumber >>= 8;
    }

    printf("Swap Bytes is %u :",bits);
    bit_pattren(bits);

    return bits;
}