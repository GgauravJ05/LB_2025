/* 
Problem Statement:
Write a program which accepts a string from the user and returns the 
difference between the count of small letters and capital letters.

Example:
Input  : "Fabulous"
Small letters = 7
Capital letters = 1
Output = 6   (7 - 1)
*/

#include <stdio.h>

int diffCount(char *ch)
{
    int small = 0, capital = 0;

    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            small++;
        }
        else if(*ch >= 'A' && *ch <= 'Z')
        {
            capital++;
        }
        ch++;
    }

    return small - capital;
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    int iret = diffCount(arr);

    printf("Difference (small - capital) = %d\n", iret);

    return 0;
}
