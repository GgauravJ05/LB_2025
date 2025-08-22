#include<stdio.h>
int countDigits(int iNo)
{
    int iSum =0;
    while(iNo>0)
    {
        iSum=iSum+(iNo%10);
        iNo = iNo/10;
    }
    return iSum;
}

int main()
{
    int iValue =0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    int iSum = countDigits(iValue);
    printf("sum of all digits is: %d",iSum);
    return 0;
}