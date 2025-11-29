#include"bitwise.h"

unsigned int set_nthbit(unsigned int inputNumber,unsigned int bits)
{
    unsigned int mask=0;
    
    mask = 1 << bits;
    inputNumber |= mask;

    return inputNumber;
}
