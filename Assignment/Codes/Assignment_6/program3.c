
/*
    Problem Statement: Write a program which accept number from user and print 
    its numbers line.
    Input: 4
    Output: -4 -3 -2 -1 0 1 2 3 4
*/

#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    display(iValue);
    return 0;
}