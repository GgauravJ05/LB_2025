/*
    Problem Statement: Write a program which accepts number from user and print 
    all odd numbers up to that number.
    Input: 18
    Output: 1 3 5 7 9 11 13 15 17
*/

#include<stdio.h>

void oddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    oddDisplay(iValue);
    return 0;
}