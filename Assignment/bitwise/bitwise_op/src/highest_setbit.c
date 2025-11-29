#include"bitwise.h"

unsigned int highest_setbit(unsigned int inputNumber)
{
    int count;
    unsigned int mask;
    unsigned int bit;

    for(count=31; count>=0; count--)
    {
        mask = 1 << count;
        bit = inputNumber & mask;
        if(bit != 0)
            break;
    }
    return count;
}