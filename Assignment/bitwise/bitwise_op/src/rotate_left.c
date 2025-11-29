#include"bitwise.h"

unsigned int rotate_left(unsigned int inputNumber, unsigned int nbits)
{
    unsigned int tempNumber;
    unsigned int bits = 0;
    unsigned int result = 0;
    unsigned int mask;

    mask = ((1 << nbits) - 1);
    mask <<= 32 - nbits;

    tempNumber = inputNumber & mask;
    tempNumber >>= (32-nbits);

    while (tempNumber >= 1)
    {
        bits = (tempNumber & 1);
        result = ((result << 1) | bits);
        tempNumber >>= 1;
    }

    inputNumber <<= nbits;

    inputNumber |= result;

    return inputNumber;
}