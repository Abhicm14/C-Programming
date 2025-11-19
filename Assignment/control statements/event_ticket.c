/*File Name : event_ticket.c
 * Date : 19/07/2025
 * Author Name : Abhishek C M
 * Description : Implement an event ticketing system where users can buy tickets for different events.Each event has a limited number of tickets,and the system should track ticket sales and availability.
 */

#include<stdio.h>

void main()
{
	int choice,total_price;
	int numbers=1;
	int avail1=50,avail2=50,avail3=50,avail4=50;

	while(1)
	{   
		printf("\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|Sl.no |Event Names     |Tickets   |Price     | Tickets available| Tickets Sold\t|\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|1.    |Music Concert   | 50       |500 Rs    |  %d              |   %d        \t|\n",avail1,50-avail1);
		printf("|2.    |Standup Comedy  | 50       |300 Rs    |  %d              |   %d	       \t|\n",avail2,50-avail2);
		printf("|3.    |RCB UNBOX       | 50       |1000 Rs   |  %d              |   %d        \t|\n",avail3,50-avail3);
		printf("|4.    |Circus          | 50       |200 Rs    |  %d              |   %d        \t|\n",avail4,50-avail4);
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

		printf("\nChoose the Event to buy ticket : ");
		if (scanf("%d", &choice) != 1) 
		{
			printf("Invalid input. Please enter a number.\n");
			while (getchar() != '\n');  // Clear input buffer
			continue;
		}

		switch(choice)
		{
			case 1:
				{
					if(avail1>0)
					{
						while(1)
						{   
							printf("\nEnter the number of tickets you want :");
							scanf("%d",&numbers);

							if(numbers<=avail1)
							{
								total_price = numbers * 500;
								printf("\nTotal Amount for %d Tickets is %d\n ",numbers,total_price);
								printf("\nThanks! Tickets have been booked\n");
								printf("\nEnjoy The Event\n");
								avail1-=numbers;
							}
							else
							{
								printf("\nPlease Enter a Valid Number of tickets\n");
								printf("\nThere are only %d Tickets are available\n",avail1);
								continue;
							}
							break;
						}
					}
					else
					{
						printf("\nSorry tickets are Sold Out\n");
						printf("\nPlease Come For Next Event\n");
					}
					break;
				}
			case 2:
				{
					if(avail2>0)
					{
						while(1)
						{   
							printf("\nEnter the number of tickets you want :");
							scanf("%d",&numbers);

							if(numbers<=avail2)
							{
								total_price = numbers * 300;
								printf("\nTotal Amount for %d Tickets is %d\n ",numbers,total_price);
								printf("\nThanks! Tickets have been booked\n");
								printf("\nEnjoy The Event\n");
								avail2-=numbers;
							}
							else
							{
								printf("\nPlease Enter a Valid Number of tickets\n");
								printf("\nThere are only %d Tickets are available\n",avail2);
								continue;
							}
							break;
						}
					}
					else
					{
						printf("\nSorry tickets are Sold Out\n");
						printf("\nPlease Come For Next Event\n");
					}
					break;
				}
			case 3:
				{
					if(avail3>0)
					{
						while(1)
						{
							printf("\nEnter the number of tickets you want :");
							scanf("%d",&numbers);

							if(numbers<=avail3)
							{
								total_price = numbers * 1000;
								printf("\nTotal Amount for %d Tickets is %d\n ",numbers,total_price);
								printf("\nThanks! Tickets have been booked\n");
								printf("\nEnjoy The Event\n");
								avail3-=numbers;
							}
							else
							{
								printf("\nPlease Enter a Valid Number of tickets\n");
								printf("\nThere are only %d Tickets are available\n",avail3);
								continue;
							}
							break;
						}
					}
					else
					{
						printf("\nSorry tickets are Sold Out\n");
						printf("\nPlease Come For Next Event\n");
					}
					break;
				}
			case 4:
				{
					if(avail4>0)
					{
						while(1)
						{
							printf("\nEnter the number of tickets you want :");
							scanf("%d",&numbers);

							if(numbers<=avail4)
							{
								total_price = numbers * 200;
								printf("\nTotal Amount for %d Tickets is %d\n ",numbers,total_price);
								printf("\nThanks! Tickets have been booked\n");
								printf("\nEnjoy The Event\n");
								avail4-=numbers;
							}
							else
							{
								printf("\nPlease Enter a Valid Number of tickets\n");
								printf("\nThere are only %d Tickets are available\n",avail4);
								continue;
							}
							break;
						}
					}
					else
					{
						printf("\nSorry tickets are Sold Out\n");
						printf("\nPlease Come For Next Event\n");
					}
					break;
				}
			default :
				{
					printf("\nInvalid Choice\n");
				}
		}
	}

}
