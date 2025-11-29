/*
   Problem Statement:
   Write a program which accepts a string from the user and 
   displays only the digits present in the string.

   Example:
   Input  : "Fabulous101 Infosystems Pune-411041"
   Output : "101411041"
*/

#include <stdio.h>

void displayDigits(char *ch)
{
    int i = 0;

    printf("Digits: ");

    while (ch[i] != '\0')
    {
        if (ch[i] >= '0' && ch[i] <= '9')   // check digit
        {
            printf("%c", ch[i]);
        }
        i++;
    }
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    displayDigits(arr);

    return 0;
}
