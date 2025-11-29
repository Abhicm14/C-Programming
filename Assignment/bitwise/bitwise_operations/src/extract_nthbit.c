#include"bitwiseop.h"

int extract_nthbit(int num,int n)
{
    unsigned int mask=0;
    
    mask = 1 << n;
    num &= mask;

    return num;
}
