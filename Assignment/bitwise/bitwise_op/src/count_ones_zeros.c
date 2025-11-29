#include"bitwise.h"

void count_ones_zeros(unsigned int inputNumber)
{
    int count;
    unsigned int zerosCount=0;
	unsigned int onesCount=0;
	unsigned int bitmask;

    bit_pattren(inputNumber);
    
	for(count=31; count>=0; count--)
	{
		bitmask=1<<count;
		if((inputNumber&bitmask)==0)
			zerosCount++;
		else
			onesCount++;
	}
    printf("The Number of Zeros : %u\n",zerosCount);
    printf("The Number of Ones : %u\n",onesCount);
	printf("\n");
}