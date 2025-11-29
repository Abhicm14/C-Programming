#include<bitwise.h>

int addition(int operandOne, int operandTwo) 
{
    while (operandTwo != 0) 
    {
        unsigned int carry = operandOne & operandTwo;     // Calculate carry bits
        operandOne = operandOne ^ operandTwo;             // Sum without carry
        operandTwo = carry << 1;        // Shift carry to add in next iteration
    }
    return operandOne;
}
