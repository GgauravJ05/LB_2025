/* 
Q1. Write a program which accepts a character from the user and checks 
    whether it is an alphabet or not (A–Z / a–z).

    Input : F
    Output: TRUE

    Input : $
    Output: FALSE
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL isAlphabet(char ch)
{
    // Alphabet ranges (ASCII):
    // 'A'–'Z' → 65 to 90
    // 'a'–'z' → 97 to 122

    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    result = isAlphabet(ch);

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
