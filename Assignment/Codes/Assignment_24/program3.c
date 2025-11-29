/* 
Q3. Write a program which accepts a character from the user and 
    checks whether it is a digit or not (0–9).

    Input : 7
    Output: TRUE

    Input : h
    Output: FALSE
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL isDigit(char ch)
{
    // Digit ASCII range:
    // '0' to '9' → 48 to 57
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;
    }
    return FALSE;
}

int main()
{
    char ch = '\0';
    BOOL result = FALSE;

    printf("Enter character: ");
    scanf("%c", &ch);

    result = isDigit(ch);

    if(result == TRUE)
    {
        printf("TRUE\n");
    }
    else 
    {
        printf("FALSE\n");
    }

    return 0;
}
