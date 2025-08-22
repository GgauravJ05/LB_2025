// Input 'a'
// Ouput 'A'
#include<stdio.h>
#include<stdbool.h>
char convertCapital(char ch)
{
    return ch-32;
}

int main()
{
    char ch ='\0';
    char capitalch =  '\0';
    printf("Enter the character in Capital (a-z):\n");
    scanf("%c",&ch);
    capitalch=convertCapital(ch);
    printf("converted Capital character is : %c \n",capitalch);
    return 0;
}