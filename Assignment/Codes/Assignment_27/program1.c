/* 
   Problem Statement:
   Write a program which accepts a string from the user and 
   converts it into lowercase.

   Example:
   Input  : "Fabulous Infosystems Pune"
   Output : "fabulous infosystems pune"
*/

#include <stdio.h>

void toLowercase(char *ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')   // check uppercase
        {
            ch[i] = ch[i] + 32;            // convert to lowercase
        }
        i++;
    }
    printf("Lowercase String: %s", ch);
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    toLowercase(arr);

    return 0;
}
