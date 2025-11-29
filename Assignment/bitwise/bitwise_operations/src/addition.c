#include"bitwiseop.h"

int addition(int a, int b) 
{
    while (b != 0) 
    {
        int carry = a & b;     // Calculate carry bits
        a = a ^ b;             // Sum without carry
        b = carry << 1;        // Shift carry to add in next iteration
    }
    return a;
}
