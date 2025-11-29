#include<bitwiseop.h>

void check_lsbbit(int num)
{
    unsigned int bit;

    bit = num & 0x1;

    if(bit == 0)
    {
        printf("Bit LSB is Not SET\n");
    }
    else
    {
        printf("Bit LSB is SET\n");
    }
}