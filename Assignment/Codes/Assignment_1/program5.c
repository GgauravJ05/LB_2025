// PS - accept one number from the user and print that number on the screen

#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a number: \n");
    scanf("%d", &iValue);
    display(iValue);
    return 0;
}