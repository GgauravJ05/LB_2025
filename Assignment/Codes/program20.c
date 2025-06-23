// PS - Write a program which accepts one number from the user and return difference between addtion of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSumFact = 0;
    int iSumNonFact = 0;

    for(int iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact += iCnt; // Sum of factors
        }
        else
        {
            iSumNonFact += iCnt; // Sum of non-factors
        }
}
    return iSumFact - iSumNonFact; // Return the difference
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("%d", iRet);
    return 0;
}