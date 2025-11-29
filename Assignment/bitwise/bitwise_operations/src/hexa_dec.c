#include<bitwiseop.h>

int hextodec(char hex[]) 
{
    int decimal = 0, i = 0;
    char ch;

    while (hex[i] != '\0') 
    {
        ch = hex[i];

        decimal = decimal * 16;  // shift left by base 16

        if (ch >= '0' && ch <= '9') 
        {
            decimal += ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') 
        {
            decimal += ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') 
        {
            decimal += ch - 'a' + 10;
        }
        else 
        {
            printf("Invalid hexadecimal digit %c\n", ch);
            return -1;   // return error
        }
        i++;
    }
    return decimal;
}