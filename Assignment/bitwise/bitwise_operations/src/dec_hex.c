#include<bitwiseop.h>

void dec_hex(int num)
{
    int rem;

    rem = num % 16;
    num/=16;

    if(num>0)
        dec_hex(num);
    
    if(rem < 10)
        printf("%d",rem);
    else
        printf("%c",rem-10+'A');
}