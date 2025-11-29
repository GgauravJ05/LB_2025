/* 
Problem Statement:
Write a program which accepts a string from the user and counts the 
number of capital (uppercase) letters.

Example:
Input  : "Fabulous Infosystems Pune"
Output : 3
*/

#include <stdio.h>

int capitalCount(char *ch)
{
    int count = 0;

    while(*ch != '\0')   // iterate till string ends
    {
        if(*ch >= 'A' && *ch <= 'Z')   // check capital letter
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

    int iret = capitalCount(arr);

    printf("Capital Count = %d\n", iret);

    return 0;
}
