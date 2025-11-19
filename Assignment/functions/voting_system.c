#include<stdio.h>
#include<stdlib.h>

int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0,count = 0;
int voted[5] = {0}; 

void menu(void)
{
	printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("|	Election Commission of INDIA	  |\n");
	printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("1.Vote\n");
	printf("2.Result\n");
	printf("3.Failed attempts\n");
	printf("4.Reset Data\n");
	printf("5.Exit\n");
	printf("\n");
}

int voting(void)
{
	int choice;

	printf("  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf(" |	Candidate List to Vote    |\n");
	printf("  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("1. Alice\n");
	printf("2. Bob\n");
	printf("3. Charlie\n");
	printf("4. NOTA\n");
	printf("5. Exit without voting\n");

	printf("Please Vote for the Candidate : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: sum1++; break;
		case 2: sum2++; break;
		case 3: sum3++; break;
		case 4: sum4++; break;
		case 5: printf("You chose not to vote.\n"); return 0;
		default: printf("Invalid Choice!\n"); return 0;
	}

	printf("\nYou have Voted Successfully.\nThanks for Voting!\n");
	return 1; // voted successfully
}


void vote(void)
{
	int voter_id, password;

	printf("Enter your Voter ID (1-4): ");
	scanf("%d", &voter_id);

	if (voter_id >= 1 && voter_id <= 4)
	{
		if (voted[voter_id] == 1)
		{
			printf("You have already voted!\n");
			return;
		}

		printf("Enter your password: ");
		scanf("%d", &password);

		if (voter_id == password)
		{
			if (voting())
				voted[voter_id] = 1; // Mark as voted
		}
		else
		{
			printf("Wrong Password\n");
		}
	}
	else
	{
		printf("Invalid Voter ID\n");
	}
}

int result(void)
{
	int admin_id, password;

	printf("Enter Admin ID: ");
	scanf("%d", &admin_id);

	printf("Enter Password: ");
	scanf("%d", &password);

	if (admin_id == 9 && password == 9)
	{
		printf("\n--- Election Results ---\n");
		printf("Alice   : %d votes\n", sum1);
		printf("Bob     : %d votes\n", sum2);
		printf("Charlie : %d votes\n", sum3);
		printf("NOTA    : %d votes\n", sum4);

		if (sum1 >= sum2 && sum1 >= sum3 && sum1 >= sum4)
			printf("\nAlice wins the election!\n");
		else if (sum2 >= sum1 && sum2 >= sum3 && sum2 >= sum4)
			printf("\nBob wins the election!\n");
		else if (sum3 >= sum1 && sum3 >= sum2 && sum3 >= sum4)
			printf("\nCharlie wins the election!\n");
		else
			printf("\nNOTA has the highest votes!\n");

		return 0;
	}
	else
	{
		printf("Wrong Credentials! Try again.\n");
		return 1;
	}
}

void failed_attempts(int count)
{
	printf("The Number of failed attempts = %d\n",count);
}

void reset_data(void)
{
	sum1 = sum2 = sum3 = sum4 = 0;
	for (int i = 0; i < 5; i++)
		voted[i] = 0;

	printf("All voting data has been reset.\n");
}


void main()
{
	int choice;

	while(1)
	{
		menu();

		printf("Choose the option from menu : ");
		if(scanf("%d",&choice)!=1)
		{
			printf("Wrong Choice!\n");
			while(getchar() == '\n');
			continue;
		}

		switch(choice)
		{
			case 1:
				vote(); 
				break;
			case 2:
				count += result(); 
				break;
			case 3:
				failed_attempts(count); 
				break;
			case 4:
				reset_data(); 
				break;
			case 5:
				exit(0); 
				break;
			default :
				printf("Wrong Choice!\n");
		}
	}

}
