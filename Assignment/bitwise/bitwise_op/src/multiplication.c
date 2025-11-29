#include"bitwise.h"

int multiplication(int operandOne, int operandTwo) 
{
    unsigned int result = 0;
    
    while (operandTwo != 0) 
    {
        if (operandTwo & 1) 
        {                      // If LSB of b is 1, add a to result
            result += operandOne;
        }
        operandOne <<= 1;               // Shift a left (multiply by 2)
        operandTwo >>= 1;               // Shift b right (divide by 2)
    }
    return result;
}
