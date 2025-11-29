#include"bitwise.h"

void check_lsbbit(unsigned int inputNumber)
{
    unsigned int bit;

    bit = inputNumber & (1<<0);

    if(bit == 0)
    {
        printf("Bit LSB is Not SET\n");
    }
    else
    {
        printf("Bit LSB is SET\n");
    }
}