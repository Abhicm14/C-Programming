#include<bitwiseop.h>

int lowest_setbit(int num)
{
    unsigned int mask;
    unsigned int bit;
    unsigned int i;

    for(int i=0; i<=31; i++)
    {
        mask = 1<<i;
        bit = num & mask;
        if(bit != 0)
            break;
    }
    return i;
}