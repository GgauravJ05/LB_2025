/*
   Problem Statement:
   Write a program which displays ASCII Table.
   Table has columns like Symbol, Decimal, Hexadecimal, and Octal 
   representation of every symbol from 0 to 255.
*/

#include <stdio.h>

void DisplayAsciiTable()
{
    int i;

    printf("ASCII TABLE\n");
    printf("Char\tDecimal\tHex\tOctal\n");
    printf("-----------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)
            printf("NON-P\t%d\t%X\t%o\n", i, i, i);   // NON printable
        else
            printf("%c\t%d\t%X\t%o\n", i, i, i, i);   // printable
    }
}

int main()
{
    DisplayAsciiTable();
    return 0;
}
