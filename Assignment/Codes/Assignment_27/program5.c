/*
   Problem Statement:
   Write a program which accepts a string from the user and 
   returns the count of white spaces.

   Example:
   Input  : "Fabulous Infosystems Pune"
   Output : 3
*/

#include <stdio.h>

int whiteSpaceCount(char *ch)
{
    int i = 0, count = 0;

    while (ch[i] != '\0')
    {
        if (ch[i] == ' ')      // check for space
        {
            count++;
        }
        i++;
    }

    return count;
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    int count = whiteSpaceCount(arr);

    printf("Count of white spaces = %d", count);

    return 0;
}
