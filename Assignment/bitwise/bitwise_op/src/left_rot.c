#include<bitwise.h>

unsigned int left_rot(unsigned int inputNumber,unsigned int bits)
{
    unsigned int msbit;

    for(int count=1; count<= bits; count++)
    {
        msbit = inputNumber & (1<<31) ? 1:0;
        inputNumber = inputNumber << 1;
        if(msbit == 0)
        {
            inputNumber = inputNumber & ~1;
        }
        else
        {
            inputNumber = inputNumber | 1;
        }
    }
    return inputNumber;
}