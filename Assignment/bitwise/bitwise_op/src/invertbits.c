#include"bitwise.h"

unsigned int invertbits(unsigned int firstNumber,unsigned int bits,unsigned int bitPosition)
{
    unsigned int mask=0;
    unsigned int mask1=0;
    unsigned int mask2=0;

    for(int count=0; count<bits; count++)
    {
        mask = ((mask << 1) |1 << 0);
    }

    mask1 = (mask <<=  bitPosition);

    firstNumber ^= mask1;

    printf("The Number after Inverted %u bits from %uth position : %u\n",bits,bitPosition,firstNumber);
    bit_pattren(firstNumber);

    return firstNumber;
}