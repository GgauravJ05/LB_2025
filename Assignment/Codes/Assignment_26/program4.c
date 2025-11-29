/* 
Problem Statement:
Write a program which accepts a string from the user and checks 
whether it contains any vowel or not.

Examples:
Input  : "Fabulous Infosystems Pune"
Output : TRUE

Input  : "xyz"
Output : FALSE
*/

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL isVowelsInString(char *ch)
{
    while(*ch != '\0')
    {
        char c = *ch;

        // Check both small and capital vowels
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
           c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            return TRUE;
        }
        ch++;
    }
    return FALSE;
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    BOOL bret = isVowelsInString(arr);

    if(bret == TRUE)
    {
        printf("String contains vowels\n");
    }
    else
    {
        printf("String does not contain vowels\n");
    }

    return 0;
}
