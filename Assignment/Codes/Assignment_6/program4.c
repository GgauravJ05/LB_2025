#include<stdio.h>

void oddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    oddDisplay(iValue);
    return 0;
}