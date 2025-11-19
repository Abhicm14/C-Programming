/*File Name : cinema_booking_system.c
Date : 21/07/2025
Author Name : Abhishek.C.M 
Description : Implement a simple cinema booking system where users can book and cancel tickets. Track the
number of seats available in a single cinema hall. Assume a fixed number of seats.
*/

#include<stdio.h>

void main()
{
	int choice,num,booked =0,max=100;

	while(1)
	{   
		printf("\n**********WELCOME TO Namma Cinema***********\n");
		printf("\n%d Tickets are availabel \t %d tickets are Sold OUT\n",max,booked);
		printf("1.Buy Ticket\n");
		printf("2.Cancle Ticket\n");

		if (scanf("%d", &choice) != 1) 
		{
			printf("Invalid input. Please enter a number.\n");
			while (getchar() != '\n');  // Clear input buffer
			continue;
		}

		if(choice == 1)
		{
			while(1)
			{
				if(max==0)
				{
					printf("Tickets are SOLD OUT\n");
					printf("Show is \"HOUSEFULL\"\n");
				}
				else
				{
					printf("\nEnter the number of tickets u want :");
					scanf("%d",&num);
					if(num <= max)
					{    
						max -= num;
						booked  += num;
						printf("\n%d Tickets are Booked Successfully\n",num);
						printf("\nThank You! Enjoy the Show\n");
					}
					else
					{
						printf("Enter the valid Number of tickets");
						continue;
					}
				}
				break;
			}
		}
		else if (choice == 2)
		{
			while(1)
			{
				printf("\nEnter the number of  tickets u want to cancle : ");
				scanf("%d",&num);

				if(max+num >100)
				{
					printf("\nPlease Enter a Valid Number to cancle ticket\n");
					continue;
				}
				else
				{
					printf("\n%d Tickets are Successfully Cancalled\n",num);
					max += num;
					booked -= num;
				}
				break;
			}
		}
		else
		{
			printf("\nPlease Enter a Valid Option\n");
		} 
	}
}
