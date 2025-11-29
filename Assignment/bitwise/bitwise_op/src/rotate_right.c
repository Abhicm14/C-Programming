#include<bitwise.h>

unsigned int rotate_right(unsigned int inputNumber,unsigned int nbits)
{
    unsigned int tempNumber;
    unsigned int bits=0;
    unsigned int result=0;

    tempNumber = (inputNumber & ((1<<nbits)-1));

    while(tempNumber >= 1)
    {
        bits = (tempNumber & 1);
        result = ((result << 1)| bits);
        tempNumber >>= 1; 
    }

    inputNumber >>= nbits;
    result <<= (32-nbits);

    inputNumber |= result;

    return inputNumber;
}