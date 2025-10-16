#include<stdio.h>

void MulDisplay(int iNo)
{
    int iCnt = 0; 

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);
    MulDisplay(iValue);
    return 0;
}