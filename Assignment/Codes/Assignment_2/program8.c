// PS - Accept onen number from the user, if number is less than 10 then print "Fabulous" otherwise "Hello".

#include<stdio.h>

void display(int iNo)
{
    if(iNo < 10)
    {
        printf("Fabulous\n");
    }
    else
    {
        printf("Hello\n");
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the number: \n");
    scanf("%d", &iValue);
    display(iValue);
    return 0;
}