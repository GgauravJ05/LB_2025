// PS - Accept one character frome the user and check wheter that character is vowel(a,e,i,o,u) or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

char checkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || 
       cValue == 'o' || cValue == 'u' || 
       cValue == 'A' || cValue == 'E' || cValue == 'I' || 
       cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter character: ");
    scanf(" %c", &cValue);
    bRet = checkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("%c is a vowel\n", cValue);
    }
    else
    {
        printf("%c is not a vowel\n", cValue);
    }

    return 0;
}