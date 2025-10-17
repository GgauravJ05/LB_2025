/*
    Problem Statement: Write a program to accept a number from user and display 
    its table in reverse order.
    Input: 2
    Output: 20 18 16 14 12 10 8 6 4 2

    Input: -2
    Output: 20 18 16 14 12 10 8 6 4 2
*/

#include<stdio.h>

void printRevTable(int iNo)
{
    int iCnt = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    printRevTable(iValue);
    return 0;
}