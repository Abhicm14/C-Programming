#include"bitwise.h"

int subtraction(int operandOne, int operandTwo) 
{
    while (operandTwo != 0) 
    {
        unsigned int borrow = (~operandOne) & operandTwo;   // Borrow bits
        operandOne = operandOne ^ operandTwo;               // Subtract without borrow
        operandTwo = borrow << 1;         // Shift borrow for next iteration
    }
    return operandOne;
}
