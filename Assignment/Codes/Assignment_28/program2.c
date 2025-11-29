/* 
   Problem Statement:
   Write a C program which accepts a string from the user and one character,
   and return the frequency of that character in the string.

   Example:
   Input String : "Fabulous Infosystems Pune"
   Input Char   : e
   Output       : 2
*/

#include <stdio.h>

int freqCount(char *str, char ch)
{
    int i = 0, count = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;    // increment count when match found
        }
        i++;
    }
    return count;
}

int main()
{
    char arr[50];
    char ch;

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);     // read full string including spaces

    printf("Enter the character to search:\n");
    scanf(" %c", &ch);         // space avoids newline issue

    int count = freqCount(arr, ch);

    printf("Frequency of character is = %d\n", count);

    return 0;
}
