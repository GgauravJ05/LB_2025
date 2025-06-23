// PS - Weite a program which accept one number from the user and return addition of all its non factors

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
    
    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);
    iRet = SumNonFact(iValue);
    printf("%d", iRet);
    return 0;
}