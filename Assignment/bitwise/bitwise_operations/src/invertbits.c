#include<bitwiseop.h>

void invertbits(int x,int n,int p)
{
    unsigned int mask=0;
    unsigned int mask1=0;
    unsigned int mask2=0;

    for(int i=0; i<n; i++)
    {
        mask = ((mask << 1) |1 << 0);
    }

    mask1 = (mask <<=  p);

    x ^= mask1;

    printf("The X after Inverted %d bits from %dth position : %x\n",n,p,x);
    print_binary(x);

}