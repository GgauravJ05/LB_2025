/* 
Q2. Write a program which accepts a character from the user and checks 
    whether it is CAPITAL or not (A–Z).

    Input : F
    Output: TRUE

    Input : a
    Output: FALSE
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL isCapital(char ch)
{
    // CAPITAL letters ASCII range:
    // 'A' to 'Z' → 65 to 90
    if(ch >= 'A' && ch <= 'Z')
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

    result = isCapital(ch);

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
