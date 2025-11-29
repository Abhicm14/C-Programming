#include<bitwiseop.h>

int highest_setbit(int num)
{
    int i;
    unsigned int mask;
    unsigned int bit;

    for(i=31; i>=0; i--)
    {
        mask = 1 << i;
        bit = num & mask;
        if(bit != 0)
            break;
    }
    return i;
}

