/* 
   Problem Statement:
   Write a C program which accepts a string from the user and 
   reverse that string.

   Example:
   Input  : "abcde"
   Output : "edcba"
*/

#include <stdio.h>

void strReverse(char *str)
{
    int start = 0, end = 0;
    char temp;

    // find length
    while(str[end] != '\0')
    {
        end++;
    }
    end--;        // last index

    // reverse logic (swap characters)
    while(start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string is = %s\n", str);
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    strReverse(arr);

    return 0;
}
