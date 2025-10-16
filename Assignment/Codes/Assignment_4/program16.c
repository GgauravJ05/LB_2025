// PS - Write a program which accepts one number from user and display its multiplication of factors

#include <stdio.h>
int multFact(int iNo)
{
    int iMult = 1;
    int iFact = iNo / 2;
    for(int iCnt = 1; iCnt <= iFact; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult *= iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);
    iRet = multFact(iValue);
    printf("%d", iRet);
    return 0;
}

// Time Complexity: O(n)