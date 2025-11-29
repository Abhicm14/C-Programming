#include<bitwiseop.h>

int right_rot(int num,int n)
{
    unsigned int lsbit;

    for(int i=1; i<= n; i++)
    {
        lsbit = num & 1 ? 1:0;
        num = num >> 1;
        if(lsbit == 0)
        {
            num = num & ~(1<<31);
        }
        else
        {
            num = num | (1<<31);
        }
    }
    return num;
}
