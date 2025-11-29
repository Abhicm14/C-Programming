#include<bitwiseop.h>

void minimumbits(int num)
{
    unsigned int bits=0;

    if(num==0)
        printf("Number is 0\n");
    else
    {
        printf("Minimum bits Required to store %d : ",num);
        while (num>0)
        {
            num >>= 1;
            bits++;
        }
        printf("%d\n",bits);
    }    
}