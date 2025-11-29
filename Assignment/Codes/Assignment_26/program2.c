/* 
Problem Statement:
Write a program which accepts a string from the user and counts the 
number of small (lowercase) letters.

Example:
Input  : "Fabulous"
Output : 7
*/

#include <stdio.h>

int smallCount(char *ch)
{
    int count = 0;

    while(*ch != '\0')          // iterate till end of string
    {
        if(*ch >= 'a' && *ch <= 'z')   // check lowercase
        {
            count++;
        }
        ch++;
    }

    return count;
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    int iret = smallCount(arr);

    printf("Small letter count = %d\n", iret);

    return 0;
}
