#include<bitwiseop.h>

void reverse_number(int num)
{
    unsigned int mask=0xF;
    unsigned int bits=0;
    unsigned int result = 0;
    unsigned int shift = 0;

    printf("Number u Entered is %x\n",num);
    if(num ==0)
        printf("Number Is 0\n");
    else
    {
        while(num>0)
        {
            bits = (num & mask);
            result = ((result << 4) | bits);
            num >>=4;
        }
        printf("Number u Entered is %x\t",result);
        print_binary(result);
    }
}