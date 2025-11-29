#include<bitwise.h>

unsigned int right_rot(unsigned int inputNumber,unsigned int bits)
{
    unsigned int lsbit;

    for(int count=1; count<= bits; count++)
    {
        lsbit = inputNumber & 1 ? 1:0;
        inputNumber = inputNumber >> 1;
        if(lsbit == 0)
        {
            inputNumber = inputNumber & ~(1<<31);
        }
        else
        {
            inputNumber = inputNumber | (1<<31);
        }
    }
    return inputNumber;
}
