/*
 *File Name : check_password.c
 *Date : 18/07/2025
 *Author Name : 
 *Description : The code checks the user password and it gives accses if password correct or else give 3 attempts to enter correct password 
 */

#include<stdio.h>

void main()
{
	int password, count=3;

	do
	{
		printf("Enter the password : ");
		if(scanf("%d",&password) != 1)
		{
			printf("Enter only valid Input\n");
			while(getchar() !='\n');
			continue;
		}

		if(password == 12345)
		{
			printf("Login Successfuly\n");
			break;
		}
		else
		{
			printf("you have entered a wrong Password\n");
			count--;
			printf("you have only %d attempts\n",count);
		}
	}while(count>0);
}
