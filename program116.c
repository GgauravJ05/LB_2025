#include<stdio.h>
int main()
{
    char ch = '\0';
    printf("Enter the character :\n");
    scanf("%c",&ch);

    printf("Decimal value of character is : %d \n",ch);
    printf("Octal value of character is : %o \n",ch);
    printf("Hexadecimal value of character is : %x \n",ch);
    return 0;
}