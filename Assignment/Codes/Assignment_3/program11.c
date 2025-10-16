// PS - Writr a program which accept on e number from the user and print that number of even numbers on screen.

#include<stdio.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt, iEven = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iEven = 2 * (iCnt);
        printf("%d ", iEven);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d", &iValue);
    printEven(iValue);

    return 0;
}