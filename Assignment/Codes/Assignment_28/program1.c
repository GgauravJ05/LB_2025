/* 
   Problem Statement:
   Write a C program which accepts a string from the user and one character. 
   Check whether that character is present in the string or not.
   Example:
   Input String : "Fabulous Infosystems Pune"
   Input Char   : e
   Output       : TRUE
*/

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL isCharAvailable(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return TRUE;  // character found
        }
        i++;
    }
    return FALSE;   // character not found
}

int main()
{
    char arr[50];
    char ch;

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);   // read full line including spaces

    printf("Enter the character to search:\n");
    scanf(" %c", &ch);       // space before %c to ignore previous newline

    BOOL bret = isCharAvailable(arr, ch);

    if(bret == TRUE)
    {
        printf("String contains the character.\n");
    }
    else
    {
        printf("String does not contain the character.\n");
    }

    return 0;
}
