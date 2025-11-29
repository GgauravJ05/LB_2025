/*
   Problem Statement:
   Write a program which accepts a string from the user and 
   toggles the case of each character.

   Example:
   Input  : "Fabulous Infosystems Pune"
   Output : "fABULOUS iNFOSYSTEMS pUNE"
*/

#include <stdio.h>

void strTogglecase(char *ch)
{
    int i = 0;

    while (ch[i] != '\0')
    {
        // If lowercase → convert to uppercase
        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
        // If uppercase → convert to lowercase
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
        i++;
    }

    printf("Toggled String: %s", ch);
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    strTogglecase(arr);

    return 0;
}
