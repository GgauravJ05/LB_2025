/*
    Problem Statement: Write a program which accept number from user and print 
    numbers till that number.
    Input: 5
    Output: 1 2 3 4 5
*/

#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0; 

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    display(iValue);
    
    return 0;
}