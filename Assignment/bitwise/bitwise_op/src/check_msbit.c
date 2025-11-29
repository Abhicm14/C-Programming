#include"bitwise.h"

void check_msbbit(unsigned int inputNumber)
{
    unsigned int bit;

    bit = inputNumber & (1<<31);

    if(bit == 0)
    {
        printf("Bit MSB is Not SET\n");
    }
    else
    {
        printf("Bit MSB is SET\n");   
    }
}