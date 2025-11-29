/*
   Problem Statement:
   Accept a character from user and check if it is a special symbol or not.
   Special symbols include: ! @ # $ % ^ & * ( ) { } [ ] | / \
*/

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL isSpecialSymbol(char ch)
{
    if( (ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9') )
    {
        return FALSE;  // alphabets & digits are not special
    }

    // If it is not alphabet and not digit, then it is a special symbol
    return TRUE;
}

int main()
{
    char ch = '\0';

    printf("Enter character:\n");
    scanf("%c", &ch);

    BOOL bret = isSpecialSymbol(ch);

    if(bret == TRUE)
    {
        printf("It is a special symbol\n");
    }
    else
    {
        printf("It is not a special symbol\n");
    }

    return 0;
}
