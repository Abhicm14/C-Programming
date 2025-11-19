/*File Name : library.c
Date : 18/07/2002
Author Name : Abhishek.C.M
Description : 
*/

#include<stdio.h>

void main()
{
	int choice=0,choice1=0; 
	int book1,book2,book3,book4,book5;

	while(1)
	{
		printf("==WELCOME TO LIBRARY MANAGEMENT SYSTEM==\n");
		printf("1.Barrow Book\n");
		printf("2.Return Book\n");
		printf("3.Book Available\n");

		printf("Choose anyone : ");
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
					while(1)
					{
						printf("Books Available in The Library\n");
						printf("1.Book1\n");
						printf("2.Book2\n");
						printf("3.Book3\n");
						printf("4.Book4\n");
						printf("5.Book5\n");

						printf("Select the Book  ");
						if (scanf("%d", &choice1) != 1) 
						{
							printf("Invalid input. Please enter a number.\n");
							while (getchar() != '\n');  // Clear input buffer
							continue;
						}

						if(choice1 ==1 && book1 ==0)
						{
							printf("Book1 is Barrowed Sucessfully\n");
							book1 = 1;
						}
						else if(choice1 ==2 && book2 == 0)
						{
							printf("Book2 is Barrowed Sucessfully\n");
							book2 =1;
						}
						else if(choice1 ==3 && book3 ==0)
						{
							printf("Book3 is Barrowed Sucessfully\n");
							book3 = 1;
						}
						else if(choice1 ==4 && book4 ==0)
						{
							printf("Book4 is Barrowed Sucessfully\n");
							book4 =1;
						}
						else if(choice1 ==5 && book5 ==0)
						{
							printf("Book5 is Barrowed Sucessfully\n");
							book5 =1;
						}
						else
						{
							printf("Book is Already Taken or Invalid choice\n");              
						}
						break;
					}
					break;
				}
			case 2:
				{
					printf("Enter the Book Number(1-5): ");
					scanf("%d",&choice1);

					if(choice1 ==1 && book1 ==1)
					{
						book1 =0;
						printf("You Have Retured the Book1\n");
						printf("Thanks! Please Come again\n");
					}
					else if(choice1 ==2 && book2 ==1)
					{
						book1 =0;
						printf("You Have Retured the Book2\n");
						printf("Thanks! Please Come again\n");
					}
					else if(choice1 ==3 && book3 ==1)
					{
						book1 =0;
						printf("You Have Retured the Book3\n");
						printf("Thanks! Please Come again\n");
					}
					else if(choice1 ==4 && book4 ==1)
					{
						book1 =0;
						printf("You Have Retured the Book4\n");
						printf("Thanks! Please Come again\n");
					}
					else if(choice1 ==5 && book5 ==1)
					{
						book1 =0;
						printf("You Have Retured the Book5\n");
						printf("Thanks! Please Come again\n");
					}
					else
					{
						printf("Wrong choice Or Invalid\n");
					}
					break;
				}
			case 3:
				{
					printf("Available Books Are : \n");
					if(book1 == 0)
						printf("Book1 Is Available\n");
					if(book2 == 0)
						printf("Book2 Is Available\n");
					if(book3 == 0)
						printf("Book3 Is Available\n");
					if(book4 == 0)
						printf("Book4 Is Available\n");
					if(book5 == 0)
						printf("Book5 Is Available\n");
					break;
				}
			default :
				{
					printf("Wrong CHoice\n");
				}
		}
		continue;
	}
}
