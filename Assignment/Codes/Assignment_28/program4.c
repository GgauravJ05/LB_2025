/* 
   Problem Statement:
   Write a C program which accepts a string from the user and one character.
   Check if that character is present in the string or not, and return the 
   index of its last occurrence.

   Example:
   Input String : "Fabulous Infosystems Pune"
   Input Char   : u
   Output       : 22
*/

#include <stdio.h>

int lastIndex(char *str, char ch)
{
    int i = 0;
    int last = -1;      // store last found index

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            last = i;   // update whenever found
        }
        i++;
    }
    return last;        // -1 means not found
}

int main()
{
    char arr[50];
    char ch;

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    printf("Enter the character to search:\n");
    scanf(" %c", &ch);

    int index = lastIndex(arr, ch);

    printf("Last index of character is = %d\n", index);

    return 0;
}
