#include<bitwiseop.h>

int rotate_left(int num, int n)
{
    unsigned int num1;
    unsigned int bits = 0;
    unsigned int result = 0;
    unsigned int mask;

    mask = ((1 << n) - 1);
    mask <<= 32 - n;

    num1 = num & mask;

    while (num1 >= 1)
    {
        bits = (num1 & 1);
        result = ((result << 1) | bits);
        num1 >>= 1;
    }

    num <<= n;
    result >>= (32 - n);

    num |= result;

    return num;
}

