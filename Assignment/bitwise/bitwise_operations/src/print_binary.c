#include<bitwiseop.h>

void print_binary(int num)
{
	unsigned int mask;

	for(int i=31; i>=0; i--)
	{
		mask=1<<i;
		if((num&mask)==0)
			printf("0");
		else
			printf("1");
		
		if(i%4 == 0)
			printf(" ");
		
	}
	printf("\n");
}
