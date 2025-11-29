#include<bitwise.h>

void bit_pattren(unsigned int inputNumber)
{
	unsigned int bitmask;
	
	for(int count=31; count>=0; count--)
	{
		bitmask=1<<count;
		if((inputNumber&bitmask)==0)
			printf("0");
		else
			printf("1");
		
		if(count%4 == 0)
			printf(" ");
	}
	printf("\n");
}