// PS - Accept one number from the user and print that number of * on screen.

#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;
    while(iNo > iCnt)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number : \n");
    scanf("%d", &iValue);
    display(iValue);
    return 0;
}