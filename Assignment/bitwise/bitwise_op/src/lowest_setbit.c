#include"bitwise.h"

unsigned int lowest_setbit(unsigned int inputNumber)
{
    unsigned int mask;
    unsigned int bit;
    unsigned int count;

    for(int count=0; count<=31; count++)
    {
        mask = 1<<count;
        bit = inputNumber & mask;
        if(bit != 0)
            break;
    }
    return count;
}