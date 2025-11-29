#include<bitwiseop.h>

void setbits(int x,int n,int p,int y)
{
    unsigned int mask=0;
    unsigned int mask1=0;
    unsigned int mask2=0;

    printf("The X after replaced %d bits from %dth position : ",n,p);
    
    for(int i=0; i<n; i++)
    {
        mask = ((mask << 1) |1 << 0);
    }

    mask1 = ~(mask <<=  p);

    x &= mask1;

    mask2 = (mask >>= p);

    y &= mask2;

    y <<= p;

    x |= y;

    printf("%x\n",x);
    print_binary(x);

}