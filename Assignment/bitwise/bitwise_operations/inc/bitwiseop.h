#include<stdio.h>
#include<stdlib.h>
#include"validation.h"

void display_menu(void);
int hextodec(char hex[]);

void print_binary(int num);
void minimumbits(int num);
void reverse_number(int num);
void swap_bytes(int num);

int rotate_right(int num,int n);
int rotate_left(int num,int n);

int right_shift(int num,int n);
int left_shift(int num,int n);

void check_lsbbit(int num);
void check_msbbit(int num);

int extract_nthbit(int num,int n);
int set_nthbit(int num,int n);
int toggle_nthbit(int num,int n);

int highest_setbit(int num);
int lowest_setbit(int num);

void count_ones_zeros(int num);
void swaping_numbers(int x, int y);
void check_even_odd(int num);
void setbits(int x,int n,int p,int y);
void invertbits(int x,int n,int p);
void toggle_bits(int x,int n,int m);
void set_bits(int x,int n,int m);
void reset_bits(int x,int n,int m);
int right_rot(int num,int n);
int left_rot(int num,int n);

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int dividend, int divisor);
