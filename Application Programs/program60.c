#include<stdio.h>
int countDigits(int iNo)
{
    int iDigit =0;
    int iSum =0;
    while(iNo>0)
    {
        iDigit = iNo%10;//3 , 2, 1
        iSum=iSum+iDigit;  // 3,5 ,6
        iNo = iNo/10;  //12 , 1,0
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