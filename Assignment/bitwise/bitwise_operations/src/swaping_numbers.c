#include"bitwiseop.h"

void swaping_numbers(int x, int y)
{
    printf("Befor Swaping X = %d, Y = %d\n",x,y);

    x=x^y;
    y=x^y;
    x=x^y;

    printf("After Swaping X = %d, Y = %d\n",x,y);

}