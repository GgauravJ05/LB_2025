/*
    Problem Statement: Write a program to accept a number from user and display its table.
    Input: 2
    Output: 2 4 6 8 10 12 14 16 18 20

    Input: -2
    Output: 2 4 6 8 10 12 14 16 18 20
*/

#include<stdio.h>

void printTable(int iNo)
{
    int iCnt = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
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
    printTable(iValue);
    return 0;
}