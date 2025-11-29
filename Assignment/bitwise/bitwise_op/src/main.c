/*
=====================================================================================
 Project Title : Bitwise Operations Toolkit
 File Name     : main.c
 Author        : Abhishek C M
 Date          : 06/10/2025
-------------------------------------------------------------------------------------
 Description   :
 A menu-driven C program designed to demonstrate and test a wide range of bitwise
 operations on 32-bit integers.

 The application features 25 distinct functions, each encapsulating a specific
 bit manipulation task such as shifting, rotating, setting, clearing, and toggling
 bits.

 The main() function serves as an interactive controller. It prompts the user to
 select an operation from the menu, executes the corresponding function, and displays
 the result in both decimal and 32-bit binary formats for clear visualization.
=====================================================================================
*/

#include"bitwise.h"

unsigned int inputNumber=0;

void main()
{

	unsigned int menuChoice;
	unsigned int bits=0;
	unsigned int firstNumber=0;
	unsigned int secondNumber=0;
	unsigned int startBit=0;
	unsigned int endBit=0;
	unsigned int bitPosition=0;
	unsigned int result=0;
	unsigned int tempNumber=0;

	while(1)
	{
		printf("Enter an integer value to perform bitwise operations on : ");
		inputNumber = valid_unsigned_int();
		
		if(inputNumber != (unsigned int)-1)
		{
			if(inputNumber == 0)
			{
				printf("Bitwise Operations Cannot be done for Zero Input\n");
				continue;
			}
			else
			{
				break;
			}
		}
		else
		{
			continue;
		}
	}

	while(1)
	{

		display_menu();

		while(1)
		{
			printf("Enter your choice (0–29): : ");
			menuChoice = valid_int();

			if(menuChoice == -1)
			{
				continue;
			}
			else
			{
				break;
			}
		}

		switch (menuChoice)
		{
			case 0:
			{
				printf("Exiting program... \n");
				printf("Thank you for using Bitwise Operations Menu!\n");
				exit(1);
			}
			case 1:
			{
				printf("Bit Pattren of %u is : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 2:
			{   
				minimumbits(inputNumber);
				
				break;
			}
			case 3:
			{
				inputNumber = reverse_number(inputNumber);
				
				break;
			}
			case 4:
			{
				inputNumber = swap_bytes(inputNumber);
				
				break;
			}
			case 5:
			{
				printf("Enter the number of bits to rotate right by : ");
				scanf("%u",&bits);

				bits = bits % 32;

				printf("Bit Pattren of %u before rotate :  ",inputNumber);
				
				bit_pattren(inputNumber);
				
				inputNumber = rotate_right(inputNumber,bits);
				
				printf("Number after right rotation is : %u\t",inputNumber);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 6:
			{
				printf("Enter the number of bits to rotate left by : ");
				scanf("%u",&bits);
				
				bits=bits%32;
				
				printf("Bit Pattren of %u before rotate :  ",inputNumber);
				
				bit_pattren(inputNumber);

				inputNumber = rotate_left(inputNumber,bits);
				
				printf("Number after left rotation is : %u\t",inputNumber);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 7:
			{
				printf("Enter the number of bits to shift right by : ");
				scanf("%u",&bits);
				
				printf("Bit Pattren of %u before Shift :  ",inputNumber);
				
				bit_pattren(inputNumber);
				
				inputNumber = right_shift(inputNumber,bits);
				
				printf("Bit Pattren of %u After Shift %u Bits :  ",inputNumber,bits);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 8:
			{
				printf("Enter the number of bits to shift left by : ");
				scanf("%u",&bits);
				
				printf("Bit Pattren of %u before Shift :  ",inputNumber);
				
				bit_pattren(inputNumber);
				
				inputNumber = left_shift(inputNumber ,bits);
				
				printf("Bit Pattren of %u After Shift %u Bits :  ",inputNumber,bits);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 9:
			{
				bit_pattren(inputNumber);
				
				check_lsbbit(inputNumber);
				
				break;
			}
			case 10:
			{
				bit_pattren(inputNumber);
				
				check_msbbit(inputNumber);
				
				break;
			}
			case 11:
			{
				printf("Bit Pattren of %u is : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the bit position to extract (starting from 0) : ");
				scanf("%u",&bitPosition);
				
				inputNumber = extract_nthbit(inputNumber,bitPosition);
				
				printf("Bit Pattren after extraction %uth bit : ",bitPosition);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 12:
			{	
				printf("Bit Pattren of %u is : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the bit position to set (starting from 0) : ");
				scanf("%u",&bitPosition);
				
				inputNumber = set_nthbit(inputNumber,bitPosition);
				
				printf("Bit Pattren after Set %uth bit : ",bitPosition);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 13:
			{	
				printf("Bit Pattren of %u is : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the bit position to toggle (starting from 0) : ");
				scanf("%u",&bitPosition);
				
				inputNumber = toggle_nthbit(inputNumber,bitPosition);
				
				printf("Bit Pattren after toggle %uth bit : ",bitPosition);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 14:
			{
				bit_pattren(inputNumber);
				tempNumber = inputNumber;
				
				inputNumber = highest_setbit(inputNumber);
				
				printf("The Highest set bit position in %u is %u\n",tempNumber,inputNumber);
				
				break;
			}
			case 15:
			{
				bit_pattren(inputNumber);
				tempNumber = inputNumber; 
				
				inputNumber = lowest_setbit(inputNumber);
				
				printf("The Lowest set bit position in %u is %u\n",tempNumber,inputNumber);
				
				break;
			}
			case 16:
			{
				bit_pattren(inputNumber);
				
				count_ones_zeros(inputNumber);
				
				break;
			}
			case 17:
			{
				printf("Enter two integer values (x and y) to swap: ");
				scanf("%u%u",&firstNumber,&secondNumber);
				
				swaping_numbers(firstNumber,secondNumber);
				
				break;
			}
			case 18:
			{
				check_even_odd(inputNumber);
				
				break;
			}
			case 19:
			{
				printf("Enter the integer Y : ");
				scanf("%u",&secondNumber);
				
				printf("Binary pattren of %u : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the number of bits to set and the starting bit position : ");
				scanf("%u%u",&bits,&bitPosition);
				
				inputNumber = setbits(inputNumber,bits,bitPosition,secondNumber);
				
				break;
			}
			case 20:
			{	
				printf("Binary pattren of %u : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the number of bits to invert and the starting bit position : ");
				scanf("%u%u",&bits,&bitPosition);
				
				inputNumber = invertbits(inputNumber,bits,bitPosition);
				
				break;
			}
			case 28:
			{
				printf("Enter number of bits to rotate : ");
				scanf("%u",&bits);
				
				bits=bits%32;
				
				bit_pattren(inputNumber);
				
				inputNumber = right_rot(inputNumber,bits);
				
				printf("Number after right rotation is : %u\t",inputNumber);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 29:
			{
				printf("Enter number of bits to rotate : ");
				scanf("%u",&bits);
				
				bits=bits%32;
				
				bit_pattren(inputNumber);
				
				inputNumber = left_rot(inputNumber,bits);
				
				printf("Number after left rotation is : %u\t",inputNumber);
				
				bit_pattren(inputNumber);
				
				break;
			}
			case 21:
			{	
				printf("Binary pattren of %u : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the start and end bit positions to toggle : ");
				scanf("%u%u",&startBit,&endBit);
				
				inputNumber = toggle_bits(inputNumber,startBit,endBit);
				
				break;
			}
			case 22:
			{	
				printf("Binary pattren of %u : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the start and end bit positions to set : ");
				scanf("%u%u",&startBit,&endBit);
				
				inputNumber = set_bits(inputNumber,startBit,endBit);
				
				break;
			}
			case 23:
			{
				printf("Binary pattren of %u : ",inputNumber);
				
				bit_pattren(inputNumber);
				
				printf("Enter the start and end bit positions to reset : ");
				scanf("%u%u",&startBit,&endBit);
				
				inputNumber = reset_bits(inputNumber,startBit,endBit);
				
				break;
			}
			case 24:
			{
				printf("Enter two integers (A and B) to add : ");
				scanf("%d%d",&firstNumber,&secondNumber);
				
				result = addition(firstNumber,secondNumber);
				
				printf("Addition of %d and %d is %d\n",firstNumber,secondNumber,result);
				
				break;
			}
			case 25:
			{
				printf("Enter two integers (A and B) to subtract : ");
				scanf("%d%d",&firstNumber,&secondNumber);
				
				result = subtraction(firstNumber,secondNumber);
				
				printf("Subtraction of %d and %d is %d\n",firstNumber,secondNumber,result);
				
				break;
			}
			case 26:
			{
				printf("Enter two integers (A and B) to multiply : ");
				scanf("%d%d",&firstNumber,&secondNumber);
				
				result = multiplication(firstNumber,secondNumber);
				
				printf("Multiplication of %d and %d is %d\n",firstNumber,secondNumber,result);
				
				break;
			}
			case 27:
			{
				printf("Enter two integers (A and B) to divide (B must not be zero) : ");
				scanf("%d%d",&firstNumber,&secondNumber);
				
				result = division(firstNumber,secondNumber);
				if(result = -1)
				{
					printf("Divison cannot be done by zero\n");
				}
				{
					printf("Division of %d and %d is %d\n",firstNumber,secondNumber,result);
				}
				
				break;
			}
			default:
			{
				printf("Invalid Choice! Please enter a valid choice from the menu.\n");
			}
		}
	}
}
