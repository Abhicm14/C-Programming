#include<bitwise.h>

unsigned int setbits(unsigned int firstNumber,unsigned int bits,unsigned int bitPosition,unsigned int secondNumber)
{
    unsigned int mask=0;
    unsigned int mask1=0;
    unsigned int mask2=0;

    printf("The Number after replaced %u bits from %uth position : ",bits,bitPosition);
    
    for(int count=0; count<bits; count++)
    {
        mask = ((mask << 1) |1 << 0);
    }

    mask1 = ~(mask <<=  bitPosition);

    firstNumber &= mask1;

    mask2 = (mask >>= bitPosition);

    secondNumber &= mask2;

    secondNumber <<= bitPosition;

    firstNumber |= secondNumber;

    printf("%u\n",firstNumber);
    bit_pattren(firstNumber);

    return firstNumber;
}