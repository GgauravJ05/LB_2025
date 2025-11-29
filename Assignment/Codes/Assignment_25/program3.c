/*
   Problem Statement:
   Accept a character from user. 
   If it is capital then display characters from input char to Z.
   If it is small then display characters from input char to a in reverse.
   For other cases return directly.
*/

#include <stdio.h>

void Display(char ch)
{
    int i;

    // If capital letter
    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    // If small letter
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    // For other characters
    else
    {
        return;   // print nothing
    }
}

int main()
{
    char ch = '\0';

    printf("Enter character:\n");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}
