#include<bitwiseop.h>

void check_msbbit(int num)
{
    unsigned int bit;

    bit = num &0x80000000;

    if(bit == 0)
    {
        printf("Bit MSB is Not SET\n");
    }
    else
    {
        printf("Bit MSB is SET\n");   
    }
}