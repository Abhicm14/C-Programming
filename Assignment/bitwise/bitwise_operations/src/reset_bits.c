#include"bitwiseop.h"

void reset_bits(int x,int n,int m)
{
    unsigned int mask;
    unsigned int mask1;

    for(int i=0; i<m-n; i++)
    {
        mask = ((mask << 1) |1 << 0);
    }

    mask1 = (mask <<=  n);

    x &= mask1;

    printf("The X after Reset bits from %d to %d : %x\n",n,m,x);
    print_binary(x);
}