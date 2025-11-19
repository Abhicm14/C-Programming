/*File Name : water_consum.c
 * Date : 19/07/2025
 * Author Day : Abhishek C M
 * Description : Implement a water consumption tracker that records daily water consumption and calculates the total consumption and average consumption 
 * over a period of one month.
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	while(1)
	{
		int days,count,consume,total=0,avg;
		int max_value=200,min_value = 30;

		printf("Enter the number of days in month : ");

		if (scanf("%d",&days) != 1)
		{
			printf("Invalid input. Please enter a number.\n");
			while (getchar() != '\n');  // Clear input buffer
			continue;
		}

		srand(time(NULL));

		for(count = 1; count<=days; count++)
		{
			consume = (rand()%(max_value-min_value+1))+1;
			//printf("Water consumed on Day %d (liters): %d\n",count,consume);
			total += consume;
		}
		avg = total/days;

		printf("Total Water Consumed in one month is %d Liters\n",total);
		printf("Average water Consumed in one Day is %d Liters\n",avg);
		break;
	}

}
