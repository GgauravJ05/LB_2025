/*
    Problem Statement: Write a program which accept number from user and print 
    that number of $ and * on console.
    Input: 5
    Output: $ * $ * $ * $ * $ * 
*/

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}