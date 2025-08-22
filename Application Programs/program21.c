#include<stdio.h>
int maximumNumber(int iNo1, int iNo2)
{
    if(iNo1>iNo2)
    {
        return iNo1;
    } else {
        return iNo2;
    }
}
int main()
{
    int iNo1, iNo2 =0;
    printf("Enter first number \n");
    scanf("%d",&iNo1);
    printf("Enter second number \n");
    scanf("%d",&iNo2);
    int largestNumber = maximumNumber(iNo1,iNo2);
    printf("Largest number is : %d \n",largestNumber);
    return 0;
}