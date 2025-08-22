// input 'A'
// output 'a'
#include<stdio.h>
#include<stdbool.h>
char convertSmall(char ch)
{
    return ch+32;
}

int main()
{
    char ch ='\0';
    char smallch =  '\0';
    printf("Enter the character in Capital (A-Z):\n");
    scanf("%c",&ch);
    smallch=convertSmall(ch);
    printf("converted small character is : %c \n",smallch);
    return 0;
}