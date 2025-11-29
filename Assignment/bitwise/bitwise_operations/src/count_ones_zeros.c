#include"bitwiseop.h"

void count_ones_zeros(int num)
{
    int i;
    unsigned int count0=0;
	unsigned int count1=0;
	unsigned int mask;

    print_binary(num);
    
	for(i=31; i>=0; i--)
	{
		mask=1<<i;
		if((num&mask)==0)
			count0++;
		else
			count1++;
	}
    printf("The Number of Zeros : %d\n",count0);
    printf("The Number of Ones : %d\n",count1);
	printf("\n");
}