#include"bitwise.h"

void check_even_odd(unsigned int inputNumber)
{
    unsigned int bitmask; 

    bitmask = 0x1;

    if((inputNumber&bitmask) == 1)
    {
        printf("%u is Odd Number\n",inputNumber);
    }
    else
    {
        printf("%u is Even Number\n",inputNumber);
    }
    
}