/* 
   Problem Statement:
   Write a C program which accepts a string from the user and one character.
   Check if that character is present in the string or not, and return the 
   index of its first occurrence.

   Example:
   Input String : "Fabulous Infosystems Pune"
   Input Char   : o
   Output       : 5
*/

#include <stdio.h>

int getIndex(char *str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            return i;      // first occurrence index
        }
        i++;
    }
    return -1;             // -1 means character not found
}

int main()
{
    char arr[50];
    char ch;

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character to search:\n");
    scanf(" %c", &ch);

    int index = getIndex(arr, ch);

    printf("Index of character is = %d\n", index);

    return 0;
}
