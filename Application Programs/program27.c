#include<stdio.h>
int smallestNumber(int no1, int no2, int no3)
{
    if(no1<=no2 && no1<=no3)
    {
        return no1;
    } else if(no2<=no1 && no2<=no3)
    {
        return no2;
    } else {
        return no3;
    }
}

int main()
{   
    int iNo1, iNo2, iNo3=0;
    printf("Enter first number \n");
    scanf("%d",&iNo1);
    printf("Enter second number \n");
    scanf("%d",&iNo2);
    printf("Enter third number \n");
    scanf("%d",&iNo3);
    int minNumber=smallestNumber(iNo1,iNo2,iNo3);
    printf("Smallest number is: %d",minNumber);
}