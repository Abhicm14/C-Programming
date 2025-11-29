#include<bitwiseop.h>

int left_rot(int num,int n)
{
    unsigned int msbit;

    for(int i=1; i<= n; i++)
    {
        msbit = num & (1<<31) ? 1:0;
        num = num << 1;
        if(msbit == 0)
        {
            num = num & ~1;
        }
        else
        {
            num = num | 1;
        }
    }
    return num;
}