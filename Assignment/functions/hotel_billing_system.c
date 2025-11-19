/* File Name : 
 * Date : 
 * Author Name :
 * Description : Implement a restaurant ordering system where users can place orders from a menu. The system should calculate the total bill based on the it                 ems ordered.
 */

#include<stdio.h>

void menu(void);
int total_bill(int price,int quantity);

void main()
{
	int choice,bill=0,quantity;
	
	printf("\n");
	printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("|             \"Mirchy Spice Garden\"              | \n");
	printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	menu();

	printf("Choose the food : ");
	scanf("%d",&choice);
	printf("Enter the Quantity : ");
	scanf("%d",&quantity);

	switch(choice)
	{
		case 11:
                        {
                                bill += total_bill(30,quantity);
				break;
                        }
		case 10:
		case 12:
		case 13:
                     	{
                                bill += total_bill(40,quantity);
				break;
                        }
		case 1:
		case 14:
			{
				bill += total_bill(50,quantity);
				break;
			}
		case 2:
		case 4:
		case 8:
		case 9:
			{
				bill += total_bill(60,quantity);
				break;
			}
		case 3:
		case 5:
			{
				bill += total_bill(70,quantity);
				break;
			}
		case 6:
		case 7:
			{
				bill += total_bill(100,quantity);
				break;
			}
		default:
			printf("Wrong Choice!Try again\n");

	}
	printf("Total Bill of the Order is %d Rs\n",bill);
}

int total_bill(int price,int quantity)
{
	return (price*quantity);
}

void menu(void)
{
	printf("\n");
	printf(" ------------------------------------------------- \n");
	printf("|Sl.No  |       Items                  |    Price |\n");
	printf(" ------------------------------------------------- \n");
	printf("|  1.   |      Idli - Vada             |    50rs  |\n");
	printf("|  2.   |      Masala Dosa             |    60rs  |\n");
	printf("|  3.   |      Bisi Bele Bath          |    70rs  |\n");
	printf("|  4.   |      Puliyogare              |    60rs  |\n");
	printf("|  5.   |      Vangibath               |    70rs  |\n");
	printf("|  6.   |      Jolada Roti Meal        |    100rs |\n");
	printf("|  7.   |      Chappati Meal           |    100rs |\n");
	printf("|  8.   |      Akki Roti               |    60rs  |\n");
	printf("|  9.   |      Chitranna/Lemone Rice   |    60rs  |\n");
	printf("| 10.   |      White Rice-Sambar       |    40rs  |\n");
	printf("| 11.   |      Pani Puri               |    30rs  |\n");
	printf("| 12.   |      Masala Puri             |    40rs  |\n");
	printf("| 13.   |      Maddur vada             |    40rs  |\n");
	printf("| 14.   |      Gobi Manchuri           |    50rs  |\n");
	printf(" ------------------------------------------------- \n");
	printf("\n");
}
