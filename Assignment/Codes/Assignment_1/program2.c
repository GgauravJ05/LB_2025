// PS - program to print 5 times "Fabulous" on console

#include<stdio.h>

void display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Fabulous \t");
    }
}

int main()
{
    display();
    return 0;
}