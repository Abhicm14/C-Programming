#include<stdio.h>

int calculate_system(int rate,int days);

void main()
{
	int rate=12,days,fine;

	printf("Enter the number of overdue days : ");
	scanf("%d",&days);

	fine = calculate_system(rate,days);

	printf("The Fine for %d Overdue days is %d Rs\n",days,fine);
}

int calculate_system(int rate,int days)
{
	return (rate*days);
}
