/*
Problem statement:accept the number from user and display whether its even number or not.
step1 :    integer no, 
step2: algorithm
    START
        accept integer from user and store into variabe No
        check if No %2==0 THEN 
            print "number is even"
            otherwise print "number is odd"
    STOP

*/

#include<stdio.h>
#include<stdbool.h>

bool chekEven(int number)
{
    if(number%2==0)
    {
        return true;
    } else {
        return false;
    }
}

int main()
{
    int iNo=0;
    bool bRes=false;

    printf("Enter the number \n");
    scanf("%d",&iNo);

    bRes = chekEven(iNo);
    if(bRes==true)
    {
        printf("%d is an even number\n",iNo);
    } else {
        printf("%d is an odd number\n",iNo);
    }

    return 0;
}