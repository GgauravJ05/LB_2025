/* 
Q4. Write a program which accepts a character from the user and 
    checks whether it is a small case character or not (a–z).

    Input : F
    Output: FALSE

    Input : a
    Output: TRUE
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL isSmallCase(char ch)
{
    // Small case ASCII range:
    // 'a' to 'z' → 97 to 122
    if(ch >= 'a' && ch <= 'z')
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

    result = isSmallCase(ch);

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
