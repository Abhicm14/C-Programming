#include<stdlib.h>
#include<stdio.h>
#include<validation.h>

void display_menu(void);

void bit_pattren(unsigned int inputNumber);
void minimumbits(unsigned int inputNumber);
unsigned int reverse_number(unsigned int inputNumber);
unsigned int swap_bytes(unsigned int inputNumber);
void check_lsbbit(unsigned int inputNumber);
void check_msbbit(unsigned int inputNumber);
void count_ones_zeros(unsigned int inputNumber);
void swaping_numbers(unsigned int firstNumber, unsigned int secondNumber);
void check_even_odd(unsigned int inputNumber);
unsigned int set_bits(unsigned int firstNumber, unsigned int bits, unsigned int bitPosition);
unsigned int reset_bits(unsigned int firstNumber, unsigned int bits, unsigned int bitPosition);
unsigned int invertbits(unsigned int firstNumber,unsigned int bits,unsigned int bitPosition);
unsigned int toggle_bits(unsigned int firstNumber,unsigned int bits,unsigned int bitPosition);
unsigned int setbits(unsigned int firstNumber,unsigned int bits,unsigned int bitPosition,unsigned int secondNumber);

unsigned int right_shift(unsigned int inputNumber , unsigned int bits);
unsigned int left_shift(unsigned int inputNumber , unsigned int bits);
unsigned int rotate_right(unsigned int inputNumber, unsigned int bits);
unsigned int rotate_left(unsigned int inputNumber, unsigned int bits);
unsigned int set_nthbit(unsigned int inputNumber,unsigned int bits);
unsigned int extract_nthbit(unsigned int inputNumber,unsigned int bits);
unsigned int toggle_nthbit(unsigned int inputNumber,unsigned int bits);
unsigned int lowest_setbit(unsigned int inputNumber);
unsigned int highest_setbit(unsigned int inputNumber);
unsigned int left_rot(unsigned int inputNumber,unsigned int bits);
unsigned int right_rot(unsigned int inputNumber,unsigned int bits);

int addition(int operandOne, int operandTwo);
int subtraction(int operandOne, int operandTwo);
int multiplication(int operandOne, int operandTwo);
int division(int dividend, int divisor); 
