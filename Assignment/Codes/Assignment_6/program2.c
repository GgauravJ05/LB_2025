#include<stdio.h>

void display(int iNo)
{
    int iCnt = 0; 

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
    printf("\n"); 
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    display(iValue);
    
    return 0;
}