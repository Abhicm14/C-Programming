/*
================================================================================
 Project Title   : Bitwise Operations Project
 File Name       : main.c
 Author          : Abhishek C M
 Date            : 06/10/2025
 --------------------------------------------------------------------------------
 Description   :
 A menu-driven C program designed to demonstrate and test a wide range of 
 bitwise operations on 32-bit integers.

 The application features 25 distinct functions, each encapsulating a specific
 bit manipulation task such as shifting, rotating, setting, clearing, and 
 toggling bits.

 The main() function serves as an interactive controller. It prompts the user 
 to select an operation from the menu, executes the corresponding function, 
 and displays the result in both decimal and 32-bit binary formats for clear 
 visualization.

================================================================================
*/

#include<bitwiseop.h>

void main()
{
    unsigned int choice=0;
    unsigned int num=0;
    unsigned int n=0;
    unsigned int bit=0;
    unsigned int x=0;
    unsigned int y=0;
    unsigned int p=0;
    unsigned int result=0;

    while (1)
    {
        display_menu();
        
        while(1)
        {
            printf("Enter a ur Choice : ");
            choice = valid_int();
            if(choice == -1)
            {
                continue;;
            }
            else
            {
                break;
            }
        }

        switch(choice)
        {
            case 0:
            {
                exit(1);
            }
            case 1:
            {
                printf("Enter a number : ");
                scanf("%d",&num);
                print_binary(num);
                break;
            }
            case 2:
            {   
                printf("Enter a number : ");
                scanf("%d",&num);
                minimumbits(num);
                break;
            }
            case 3:
            {
                printf("Enter a number : ");
                scanf("%x",&num);
                reverse_number(num);
                break;
            }
            case 4:
            {
                printf("Enter number to Swap Bytes : ");
                scanf("%d",&num);
                swap_bytes(num);
                break;
            }
            case 5:
            {
                printf("Enter number : ");
                scanf("%d",&num);
                printf("Enter number of bits to rotate : ");
                scanf("%d",&n);
                n=n%32;
                print_binary(num);
                num = rotate_right(num,n);
                printf("Number after right rotation is : %d\t",num);
                print_binary(num);
                break;
            }
            case 6:
            {
                printf("Enter number : ");
                scanf("%d",&num);
                printf("Enter number of bits to rotate : ");
                scanf("%d",&n);
                n=n%32;
                print_binary(num);
                num = rotate_left(num,n);
                printf("Number after left rotation is : %d\t",num);
                print_binary(num);
                break;
            }
            case 7:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                printf("Enter number of bits u want to shift Right : ");
                scanf("%d",&n);
                print_binary(num);
                num = right_shift(num,n);
                print_binary(num);
                break;
            }
            case 8:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                printf("Enter number of bits u want to shift Left : ");
                scanf("%d",&n);
                print_binary(num);
                num = left_shift(num ,n);
                print_binary(num);
                break;
            }
            case 9:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                print_binary(num);
                check_lsbbit(num);
                break;
            }
            case 10:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                print_binary(num);
                check_msbbit(num);
                break;
            }
            case 11:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                printf("Enter position of bit u want to extract : ");
                scanf("%d",&n);
                print_binary(num);
                bit = extract_nthbit(num,n);
                print_binary(bit);
                break;
            }
            case 12:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                printf("Enter position of bit u want to set : ");
                scanf("%d",&n);
                print_binary(num);
                bit = set_nthbit(num,n);
                print_binary(bit);
                break;
            }
            case 13:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                printf("Enter position of bit u want to toggle : ");
                scanf("%d",&n);
                print_binary(num);
                bit = toggle_nthbit(num,n);
                print_binary(bit);
                break;
            }
            case 14:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                print_binary(num);
                bit = highest_setbit(num);
                printf("The Highest set bit position in %x is %d\n",num,bit);
                break;
            }
            case 15:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                print_binary(num);
                bit = lowest_setbit(num);
                printf("The Lowest set bit position in %x is %d\n",num,bit);
                break;
            }
            case 16:
            {
                printf("Enter Number : ");
                scanf("%x",&num);
                print_binary(num);
                count_ones_zeros(num);
                break;
            }
            case 17:
            {
                printf("Enter values for x and y : ");
                scanf("%d%d",&x,&y);
                swaping_numbers(x,y);
                break;
            }
            case 18:
            {
                printf("Enter the Number to check Even/Odd : ");
                scanf("%d",&num);
                check_even_odd(num);
                break;
            }
            case 19:
            {
                printf("Enter the integer X and Y : ");
                scanf("%x%x",&x,&y);
                printf("Enter the number of bits and position of starting bit : ");
                scanf("%d%d",&n,&p);
                printf("Binary pattren of %x : ",x);
                print_binary(x);
                setbits(x,n,p,y);
                break;
            }
            case 20:
            {
                printf("Enter the integer X : ");
                scanf("%x",&x);
                printf("Enter the number of bits and position of starting bit : ");
                scanf("%d%d",&n,&p);
                printf("Binary pattren of %x : ",x);
                print_binary(x);
                invertbits(x,n,p);
                break;
            }
            case 28:
            {
                printf("Enter number : ");
                scanf("%x",&num);
                printf("Enter number of bits to rotate : ");
                scanf("%d",&n);
                n=n%32;
                print_binary(num);
                num = right_rot(num,n);
                printf("Number after right rotation is : %x\t",num);
                print_binary(num);
                break;
            }
            case 29:
            {
                printf("Enter number : ");
                scanf("%x",&num);
                printf("Enter number of bits to rotate : ");
                scanf("%d",&n);
                n=n%32;
                print_binary(num);
                num = left_rot(num,n);
                printf("Number after left rotation is : %x\t",num);
                print_binary(num);
                break;
            }
            case 21:
            {
                printf("Enter the integer X : ");
                scanf("%x",&x);
                printf("Enter position of starting bit and ending bit : ");
                scanf("%d%d",&n,&p);
                printf("Binary pattren of %x : ",x);
                print_binary(x);
                toggle_bits(x,n,p);
                break;
            }
            case 22:
            {
                printf("Enter the integer X : ");
                scanf("%x",&x);
                printf("Enter position of starting bit and ending bit : ");
                scanf("%d%d",&n,&p);
                printf("Binary pattren of %x : ",x);
                print_binary(x);
                set_bits(x,n,p);
                break;
            }
            case 23:
            {
                printf("Enter the integer X : ");
                scanf("%x",&x);
                printf("Enter position of starting bit and ending bit : ");
                scanf("%d%d",&n,&p);
                printf("Binary pattren of %x : ",x);
                print_binary(x);
                reset_bits(x,n,p);
                break;
            }
            case 24:
            {
                printf("Enter integer A and B : ");
                scanf("%d%d",&x,&y);
                result = addition(x,y);
                printf("Addition of %d and %d is %d\n",x,y,result);
                break;
            }
            case 25:
            {
                printf("Enter integer A and B : ");
                scanf("%d%d",&x,&y);
                result = subtraction(x,y);
                printf("Subtraction of %d and %d is %d\n",x,y,result);
                break;
            }
            case 26:
            {
                printf("Enter integer A and B : ");
                scanf("%d%d",&x,&y);
                result = multiplication(x,y);
                printf("Multiplication of %d and %d is %d\n",x,y,result);
                break;
            }
            case 27:
            {
                printf("Enter integer A and B : ");
                scanf("%d%d",&x,&y);
                result = division(x,y);
                if(result = -1)
                {
                    printf("Divison cannot be done by zero\n");
                }
                {
                    printf("Division of %d and %d is %d\n",x,y,result);
                }
                break;
            }
            default:
            {
                printf("Invalid Choice\n");
            }
        }
    }
}
