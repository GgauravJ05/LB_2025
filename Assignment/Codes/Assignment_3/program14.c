// PS - Accept one character from the user and convert case that character.

#include<stdio.h>

char displayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32; // Convert to uppercase
        printf("%c\n", cValue);
    }
    else if(cValue >= 'A' && cValue <= 'Z') 
    {
        cValue = cValue + 32; // Convert to lowercase
        printf("%c\n", cValue);
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter one character: ");
    scanf(" %c", &cValue); 
    displayConvert(cValue);
    return 0;
}

