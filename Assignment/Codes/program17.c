// PS - Write a program which accept one number from user and display its factors in decreasing order.

#include <stdio.h>
int factRev(int iNo)
{
    int iFact = iNo / 2;
    printf("Facotrs of %d in decreasing order are :: \n", iNo);

    for(int iCnt = iFact; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);
    factRev(iValue);
    return 0;
}

