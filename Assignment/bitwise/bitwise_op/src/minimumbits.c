#include<bitwise.h>

void minimumbits(unsigned int inputNumber)
{
    unsigned int bits=0;

    if(inputNumber==0)
        printf("Number is 0\n");
    else
    {
        printf("Minimum bits Required to store %u : ",inputNumber);
        while (inputNumber>0)
        {
            inputNumber >>= 1;
            bits++;
        }
        printf("%u\n",bits);
    }    
}