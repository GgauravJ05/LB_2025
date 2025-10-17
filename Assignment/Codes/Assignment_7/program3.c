/*
    Problem Statement: Write a program to find the factorial of given number.
    Input: 5
    Output: 120 (5*4*3*2*1)

    Input: -5
    Output: 120 (5*4*3*2*1)
*/

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1; 
    int iCnt = 0;  

    // Step 1: Handle negative input by making it positive
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    // Step 2: Loop from the given number down to 1
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }

    // Step 3: Return the final calculated factorial
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);
    
    return 0;
}