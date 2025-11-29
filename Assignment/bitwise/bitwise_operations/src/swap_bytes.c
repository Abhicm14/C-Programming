#include<bitwiseop.h>

void swap_bytes(int num)
{
    unsigned int bits=0;

    printf("Number is %d\n",num);
    print_binary(num);

    while(num>0)
    {
        bits =((bits << 8) | (num & 0xff));
        num >>= 8;
    }

    printf("Swap Bytes is %d\n",bits);
    print_binary(bits);
}