// PS - program to print 5 to 1 number on the screen

#include<stdio.h>

void display()
{
    int iCnt = 0;
    int i = 5;

    for(i = 5; i >= 1; i--)
    {
        printf("%d \t", i);
    }
}

int main()
{
    display();
    return 0;
}