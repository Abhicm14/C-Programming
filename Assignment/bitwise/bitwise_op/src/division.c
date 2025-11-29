#include"bitwise.h"

int division(int dividend, int divisor) 
{
    if (divisor == 0) 
        return -1; // Handle divide-by-zero
    
    unsigned int quotient = 0;
    unsigned int temp = 0;

    for (int i = 31; i >= 0; i--) 
    {
        if ((temp + (divisor << i)) <= dividend) 
        {
            temp += divisor << i;
            quotient |= 1 << i;
        }
    }
    return quotient;
}
