#include"bitwiseop.h"

int subtraction(int a, int b) 
{
    while (b != 0) 
    {
        int borrow = (~a) & b;   // Borrow bits
        a = a ^ b;               // Subtract without borrow
        b = borrow << 1;         // Shift borrow for next iteration
    }
    return a;
}
