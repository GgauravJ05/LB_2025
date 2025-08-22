#include<stdio.h>
void display(char *str)
{
    printf("Entered string is: %s\n",str);
}

int main()
{
    char Arr[20];
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    display(Arr); // call by address
    return 0;
}