/*File Name : fine_calcu_lib.c
Date : 19/07/2025
Author Name : Abhishek.C.M
Description : a library fine calculation system where users can input the number of overdue days, and the system calculates the total fine based on a fixed fine rate per day.
*/

#include<stdio.h>

void main()
{
	int rate_per_day = 10;
	int overdue_days,total_fine;

	while (1)
	{
		printf("Enter the number of overdue days : ");
		if(scanf("%d",&overdue_days)  != 1)
		{
			printf("Invalid Input\n");
			while(getchar() != '\n');
			continue;

		}

		total_fine = overdue_days * rate_per_day;

		printf("%d Rs is fine for %d overdue days\n",total_fine,overdue_days);

	}

}
