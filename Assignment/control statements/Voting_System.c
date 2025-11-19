/*File Name : Voting_System2.c
 *Date : 17/072025
 *Author Name : Abhishek.C.M 
 *
 * Description:
 *           Voting System in C using Control Statements
 * 
 * This console-based voting system simulates a real-life election process involving voter and admin roles.
 * It uses control statements such as if-else, switch-case, while loop, break, and continue to manage the flow.
 *
 * Features:
 * 1. Voter Login:
 *    - Only valid voters with predefined ID and PIN can log in.
 *    - Voters have three login attempts before being blocked from voting.
 *
 * 2. Voting Menu:
 *    - Displays a list of five candidates.
 *    - Voter selects a candidate using switch-case.
 *    - Duplicate voting is prevented; each voter can vote only once.
 *
 * 3. Admin Menu (Password Protected):
 *    - View vote counts for each candidate.
 *    - Check the total number of voters who cast votes.
 *    - Monitor the number of failed login attempts.
 *
 * 4. Additional Features:
 *    - Includes a 'Blank Vote' option.
 *    - Allows voter to exit without voting.
 *    - Gracefully handles invalid inputs with appropriate messages.
 *
 * This program is designed to demonstrate modular code design, control flow, and input validation techniques.
 * Ideal for beginner to intermediate-level learners exploring practical applications of C programming.
 */

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int voter_id;
	int voter_id1 = 4,voter_id2 = 5;
	int admin,password,password1;
	int count = 1,count1=0;
	int hasVoted1 = 0, hasVoted2 = 0;
	int choice,choice2;
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,total_votes=0;

	int store_id1,store_id2;

	while(1)
	{
		printf("\n");
		printf("--------------------------------------------------\n");
		printf("          Election Commission of India            \n");
		printf("--------------------------------------------------\n");
		printf("1.\tVote\n");
		printf("2.\tResults\n");
		printf("3.\tFailed attempts count\n");
		printf("4.\tReset Data\n");
		printf("5.\tExit\n");

		printf("\nPlease enter your choice : "); //Asking for user to choose anyone in the above menu

		if (scanf("%d",&choice) != 1) 
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
						printf("\nEnter the Voter ID : "); // Asking for Voter ID from the user 
						if(scanf("%d", &voter_id) !=1)
						{
							printf("Invalid input. Please enter a number.\n");
							while (getchar() != '\n');  // Clear input buffer
							continue;	
						}

						if(voter_id == voter_id1 || voter_id == voter_id2) //Checking the voter ID is Valid or Invalid
						{ 
							while(1)
							{
								if(count < 4) //Checking the attempts of wrong password
								{
									printf("\nEnter your password : ");// Asking the password from user
									if(scanf("%d", &password) !=1)
									{
										printf("Invalid input. Please enter a number.\n");
										while (getchar() != '\n');  // Clear input buffer
										continue;	
									}

									if(voter_id == voter_id1 && password == 14|| voter_id == voter_id2 && password == 15)// Checking the voter ID and 																							Password is matching or Not
									{
										if((voter_id == voter_id1 && hasVoted1) || (voter_id == voter_id2 && hasVoted2)) // Checking the voter id is already    																						voted or not
										{
											printf("\nYou have Already voted Cannot vote again.\n");
											break;
										}
										else
										{
											printf("\nLogin Successfully\n");

											printf("\nSl.No\tCandidate Name\n");//Display candidates Names
											printf(" 1.\tAbhishek\n");
											printf(" 2.\tDayanand\n");
											printf(" 3.\tAnirudh\n");
											printf(" 4.\tsakshi\n");
											printf(" 5.\tAkshatha\n");
											printf(" 6.\tNota\n");
											printf(" 7.\tExit without voting\n");
											printf("\n");

											printf("Please Vote For The Candidates :  ");
											if (scanf("%d", &choice2) != 1) 
											{
												printf("Invalid input. Please enter a number.\n");
												while (getchar() != '\n');  // Clear input buffer
												continue;
											}

											if(choice2 == 1||choice2 == 2||choice2 == 3||choice2 == 4|| choice2 == 5|| choice2 ==6) // checking whether the user 																								is voted or not 
											{
												if (voter_id == voter_id1)
													hasVoted1 = 1;
												else if (voter_id == voter_id2)
													hasVoted2 = 1;

												switch(choice2)
												{
													case 1:
														{
															sum1 += 1;//adding votes that indiviusally got
															printf("\nYou have Voted Successfully \n");
															printf("\nThanks for Voting \n");
															break;
														}
													case 2:
														{
															sum2 += 1;
															printf("\nYou have Voted Successfully\n");
															printf("\nThanks for Voting \n");
															break;
														}
													case 3:
														{
															sum3 += 1;
															printf("\nYou Have Voted successfully\n");
															printf("\n Thanks For Voting \n");
															break;
														}
													case 4:
														{
															sum4 += 1;
															printf("\nYou Have Voted Successfully\n");
															printf("\nThanks For Voting \n");
															break;
														}
													case 5:
														{
															sum5 += 1;
															printf("\nYou Have Voted Successfully\n");
															printf("\nThanks For Voting \n");
															break;
														}
													case 6:
														{
															sum6 +=1;
															printf("\nYou have voted Successfully\n");
															printf("\nThanks For Voting\n");
															break;
														}
													case 7:
														{
															printf("Your Not Voted for Anyone\n");
															break;
														}
													default:
														{
															printf("You have entered the wrong choice\n");
															continue;
														}
												}
												total_votes=sum1+sum2+sum3+sum4+sum5+sum6;//Calculating total number of votes
											}
										}
									}
									else
									{
										printf("\nWrong Password,Try again!\n");//Display massage to the user that he entered wrong password
										count++;// incrementing the password attempts count
										continue;
									}
									break;
								}
								else
								{
									printf("\nYou account Blocked,Try after sometime\n");//display message to user that account blocked due to wrong password 																					attempts more than 3
									break;
								}
							}         
						}
						else
						{
							printf("\nWrong Voter ID,Try again!\n");//Display message  to user that he entered wrong voter id
							continue;
						}
						break;
					}
					break;
				}
			case 2:
				{
					printf("Please Enter admin ID : ");//asking user for admin ID
					if(scanf("%d", &admin) !=1)
					{
						printf("Invalid input. Please enter a number.\n");
						while (getchar() != '\n');  // Clear input buffer
						continue;	
					}
					printf(" Please Enter the Admin Password  : ");//asking user for admin password
					if(scanf("%d", &password1) !=1)
					{
						printf("Invalid input. Please enter a number.\n");
						while (getchar() != '\n');  // Clear input buffer
						continue;	
					}

					if (admin == 1 && password1 == 2)//Checking the admin ID and Password is correct or not
					{
						printf("\nTotal Number of votes voted %d\n",total_votes);
						printf("\nResults of The Voting \n");
						printf("\nAbhishek  got %d  Votes \n", sum1);
						printf(" Dayanand got %d Votes \n", sum2);
						printf(" Anirudh got %d Votes \n", sum3);
						printf(" Sakshi got %d Votes \n", sum4);
						printf(" Akshatha got %d Votes \n", sum5);
						printf(" Number of None votes %d\n",sum6);

						if (sum1 > sum2 && sum1 > sum3 && sum1 > sum4 && sum1 > sum5 && sum1 > sum6)
						{
							printf("\nAbhishek as Won the Elections\n");
						}
						else if (sum2 > sum3 && sum2 > sum4 && sum2 > sum5 && sum2 > sum6)
						{
							printf("\nDayanand as Won the Elections \n");
						}
						else if (sum3 > sum4 && sum3 > sum5 && sum3 > sum6)
						{
							printf("\nAnirudh as Won the Elections \n");
						}
						else if (sum4 > sum5 && sum4 > sum6)
						{
							printf("\nSakshi as Won the Elections \n");
						}
						else if(sum5 > sum6)
						{
							printf("\nAkshatha as won the Elections \n");
						}
						else
						{
							printf("\nNo one has won the elections\n");
						}
						break;
					}
					else
					{
						printf("Please Enter the correct admin credentials\n");
						count1++;
						continue;
					}
					break;
				}
			case 3:
				{
					printf("Total number of login failed attempts : %d\n",count1);
					break;
				}
			case 4:
				{
					hasVoted1 = 0, hasVoted2 = 0,count = 1,count1=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,total_votes=0,store_id1 = 0;//assigning in all the values to zero
					printf("Previous Data Is Erased\n");
					break;
				}
			case 5:
				{
					exit(1);
				}
			default:
				{
					printf("You have entered wrong Choice\n");//Display message to user due to wrong choice
					continue;
				}
		}
	}
	printf("\n");
}
