//PS - write a program which accept name from user and display it.

#include<stdio.h>

int main()
{
    char Name[30];
    printf("please enter full name: \n");
    scanf("%29[^\n]", Name);
    printf("Your name is: %s:", Name);
    return 0;
}

// Time Complexity: O(1) (Constant Time)