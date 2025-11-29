#include"bitwise.h"

unsigned int set_bits(unsigned int firstNumber, unsigned int bits, unsigned int bitPosition)
{
    unsigned int mask;
    unsigned int mask1;

    for(int i=0; i<bitPosition-bits; i++)
    {
        mask = ((mask << 1) |1 << 0);
    }

    mask1 = (mask <<=  bits);

    firstNumber |= mask1;

    printf("The Number after Set bits from %u to %u : %u\n",bits,bitPosition,firstNumber);
    bit_pattren(firstNumber);

    return firstNumber;
}