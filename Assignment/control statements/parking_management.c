/*File Name : parking_management.c
Date : 19/07/2025
Author Name : Abhishek C M 
Description : Implement a simple parking lot management system where users can check in and check out
cars, with a maximum parking capacity.
*/

#include <stdio.h>
#include<stdlib.h>

void main()
{
	int capacity = 5, choice,choice1, car_no;
	int slot1 = 0, slot2 = 0, slot3 = 0, slot4 = 0, slot5 = 0;
	int car1 = 0, car2 = 0, car3 = 0, car4 = 0, car5 = 0;

	while (1)
	{
		printf("\n==== Welcome to the Parking Lot Space ====\n");
		printf("1. CHECK IN\n");
		printf("2. CHECK OUT\n");
		printf("3. CHECK AVAILABILITY\n");
		printf("4. DATA\n");
		printf("5. EXIT\n");

		printf("\nEnter your choice: ");
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
					if (slot1 == 1 && slot2 == 1 && slot3 == 1 && slot4 == 1 && slot5 == 1)
					{
						printf("Sorry, Parking is Full!\n");
					}
					else
					{
						printf("\nAvailable Slots:\n");
						if (slot1 == 0) 
							printf("1. Slot1\n");
						if (slot2 == 0) 
							printf("2. Slot2\n");
						if (slot3 == 0) 
							printf("3. Slot3\n");
						if (slot4 == 0) 
							printf("4. Slot4\n");
						if (slot5 == 0) 
							printf("5. Slot5\n");

						while(1)
						{	printf("Choose the Slot: ");
							if (scanf("%d", &choice1) != 1) 
							{
								printf("Invalid input. Please enter a number.\n");
								while (getchar() != '\n');  // Clear input buffer
								continue;
							}
							break;
						}

						while(1)
						{
							printf("Enter your Car No (2000 to 2004): ");
							if (scanf("%d", &car_no) != 1) 
							{
								printf("Invalid input. Please enter a number.\n");
								while (getchar() != '\n');  // Clear input buffer
								continue;
							}
							break;
						}

						if (car_no == 2000 || car_no == 2001 ||car_no == 2002 || car_no == 2003 || car_no == 2004)
						{
							if (choice1 == 1 && slot1 == 0)
							{
								slot1 = 1;
								car1 = car_no;
								printf("Car parked successfully in Slot1\n");
							}
							else if (choice1 == 2 && slot2 == 0)
							{
								slot2 = 1;
								car2 = car_no;
								printf("Car parked successfully in Slot2\n");
							}
							else if (choice1 == 3 && slot3 == 0)
							{
								slot3 = 1;
								car3 = car_no;
								printf("Car parked successfully in Slot3\n");
							}
							else if (choice1 == 4 && slot4 == 0)
							{
								slot4 = 1;
								car4 = car_no;
								printf("Car parked successfully in Slot4\n");
							}
							else if (choice1 == 5 && slot5 == 0)
							{
								slot5 = 1;
								car5 = car_no;
								printf("Car parked successfully in Slot5\n");
							}
							else
							{
								printf("Slot is already occupied or invalid!\n");
							}
						}
						else
						{
							printf("Invalid Car Number\n");
						}
					}
					break;
				}
			case 2 :
				{
					if(slot1 == 0 && slot2 == 0 && slot3 == 0 && slot4 == 0 && slot5 == 0)
					{
						printf("There is no cars in the parking slot to CHECK OUT\n");
					}
					else
					{
						printf("\nEnter your Car Number to Check Out: ");
						if (scanf("%d", &car_no) != 1) 
						{
							printf("Invalid input. Please enter a number.\n");
							while (getchar() != '\n');  // Clear input buffer
							continue;
						}

						if (car_no == car1)
						{
							slot1 = 0;
							car1 = 0;
							printf("Car %d has been checked out from Slot1\n", car_no);
						}
						else if (car_no == car2)
						{
							slot2 = 0;
							car2 = 0;
							printf("Car %d has been checked out from Slot2\n", car_no);
						}
						else if (car_no == car3)
						{
							slot3 = 0;
							car3 = 0;
							printf("Car %d has been checked out from Slot3\n", car_no);
						}
						else if (car_no == car4)
						{
							slot4 = 0;
							car4 = 0;
							printf("Car %d has been checked out from Slot4\n", car_no);
						}
						else if (car_no == car5)
						{
							slot5 = 0;
							car5 = 0;
							printf("Car %d has been checked out from Slot5\n", car_no);
						}
						else
						{
							printf("Car Number not found in any slot.\n");
						}
					}
					break;
				}
			case 3 :
				{
					int available = 0;

					if (slot1 == 0) 
						available++;
					if (slot2 == 0) 
						available++;
					if (slot3 == 0) 
						available++;
					if (slot4 == 0) 
						available++;
					if (slot5 == 0) 
						available++;

					printf("Available Slots: %d\n", available);
					break;
				}
			case 4 :
				{
					printf("\n==== Parking Lot Data ====\n");
					if (slot1 == 1) 
						printf("Slot1 - Occupied by Car %d\n", car1);
					else 
						printf("Slot1 - Empty\n");

					if (slot2 == 1) 
						printf("Slot2 - Occupied by Car %d\n", car2);
					else 
						printf("Slot2 - Empty\n");

					if (slot3 == 1) 
						printf("Slot3 - Occupied by Car %d\n", car3);
					else 
						printf("Slot3 - Empty\n");

					if (slot4 == 1) 
						printf("Slot4 - Occupied by Car %d\n", car4);
					else 
						printf("Slot4 - Empty\n");

					if (slot5 == 1) 
						printf("Slot5 - Occupied by Car %d\n", car5);
					else    
						printf("Slot5 - Empty\n");
					break;
				}
			case 5 :
				{
					printf("Thank you for using the Parking Management System.\n");
					exit(1);
				}
			default:
				{
					printf("Invalid choice! Please select between 1-5.\n");
				}
		}
	}
}
