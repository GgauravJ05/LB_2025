// PS - Write a program which accepts one number from the user and print factors of that number.

#include<stdio.h>

void displayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i =1; i <= iNo; i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);
    displayFactor(iValue);
    
    return 0;
}