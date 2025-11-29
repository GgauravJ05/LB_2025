/*
   Problem Statement:
   Accept a character from user and display its ASCII value 
   in decimal format.
*/

#include <stdio.h>

void Display(char ch)
{
    printf("Decimal = %d\n", ch);   // ASCII value
}

int main()
{
    char ch = '\0';

    printf("Enter character:\n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}
