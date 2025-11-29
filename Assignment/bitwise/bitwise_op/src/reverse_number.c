#include"bitwise.h"

unsigned int reverse_number(unsigned int inputNumber)
{
    unsigned int bitmask=0x1;
    unsigned int bits=0;
    unsigned int result = 0;
    unsigned int shift = 0;

    if(inputNumber ==0)
        printf("Number Is 0\n");
    else
    {
        printf("Bit Pattren of %d is : ",inputNumber);
        bit_pattren(inputNumber);
        
        while(inputNumber>0)
        {
            bits = (inputNumber & bitmask);
            result = ((result << 1) | bits);
            inputNumber >>= 1;
        }
        printf("Binary after reverse %d : ",result);
        bit_pattren(result);
    }
    return result;
}