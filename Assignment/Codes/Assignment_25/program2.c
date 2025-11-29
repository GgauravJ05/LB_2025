/*
   Problem Statement:
   Accept a character from user. 
   If character is small display its capital character, 
   if it is capital display its small character, 
   otherwise display it as it is.
*/

#include <stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')       // small letter
    {
        printf("Output: %c\n", ch - 32);   // convert to capital
    }
    else if(ch >= 'A' && ch <= 'Z')  // capital letter
    {
        printf("Output: %c\n", ch + 32);   // convert to small
    }
    else
    {
        printf("Output: %c\n", ch);        // others as it is
    }
}

int main()
{
    char ch = '\0';

    printf("Enter character: \n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}
