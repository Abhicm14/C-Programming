#include"bitwise.h"

void swaping_numbers(unsigned int firstNumber, unsigned int secondNumber)
{
    printf("Befor Swaping firstNumber = %u, secondNumber = %u\n",firstNumber,secondNumber);

    firstNumber=firstNumber^secondNumber;
    secondNumber=firstNumber^secondNumber;
    firstNumber=firstNumber^secondNumber;

    printf("After Swaping firstNumber = %u, secondNumber = %u\n",firstNumber,secondNumber);

}