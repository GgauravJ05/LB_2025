/*
   Problem Statement:
   Write a program which accepts a string from the user and 
   converts it into uppercase.

   Example:
   Input  : "Fabulous Infosystems Pune"
   Output : "FABULOUS INFOSYSTEMS PUNE"
*/

#include <stdio.h>

void toUppercase(char *ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'a' && ch[i] <= 'z')   // check lowercase
        {
            ch[i] = ch[i] - 32;            // convert to uppercase
        }
        i++;
    }
    printf("Uppercase String: %s", ch);
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    toUppercase(arr);

    return 0;
}
