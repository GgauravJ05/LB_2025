// PS - Write a program which accepts total marks & obtained marks from user and calculate precentages.

#include<stdio.h>

float percentages(int iNo1, int iNo2)
{
    
    if(iNo1 == 0 || iNo2 == 0)
    {
        printf("0");
    }
    return ((float)iNo2 / iNo1) * 100;
}

int main()
{
    int iValue1, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: \n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: \n");
    scanf("%d", &iValue2);

    fRet = percentages(iValue1,iValue2);

    printf("%.2f", fRet);

    return 0;
}
// Time Complexity: O(1) (Constant Time)