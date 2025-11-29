#include<bitwiseop.h>

void check_even_odd(int num)
{
    unsigned int mask; 

    mask = 0x1;

    if((num&mask) == 1)
    {
        printf("%d is Odd Number\n",num);
    }
    else
    {
        printf("%d is Even Number\n",num);
    }
    
}