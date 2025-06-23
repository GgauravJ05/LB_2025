// PS - Write a program which accept one number from user and print even factors of that number.

#include<stdio.h>

void displayEvernFactor(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(int i=1; i<=iNo; i++)
    {
        if((iNo % i) == 0)
        {
            if(i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
}