#include<stdio.h>
int countDigits(int iNo)
{
    int iDigit =0;
    int iCnt =0;
    while(iNo>0)
    {
        iNo = iNo/10;    
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue =0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    int iCnt = countDigits(iValue);
    printf("%d is having %d digits",iValue,iCnt);
    return 0;
}