// PS - Write a program which accept one number from the user and display all its non factors.

#include<stdio.h>

int NonFact(int iNo)
{
    printf("Non-factors of %d are: \n", iNo);

    for(int iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);
    NonFact(iValue);
    return 0;
}