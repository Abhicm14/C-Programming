#include"bitwiseop.h"

int multiplication(int a, int b) 
{
    unsigned int result = 0;
    
    while (b != 0) 
    {
        if (b & 1) 
        {                      // If LSB of b is 1, add a to result
            result += a;
        }
        a <<= 1;               // Shift a left (multiply by 2)
        b >>= 1;               // Shift b right (divide by 2)
    }
    return result;
}
