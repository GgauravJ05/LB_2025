#include<stdio.h>
int countDigits(int iNo)
{
    int iDigit =0;
    int iCnt =0;
    while(iNo>0)
    {
        printf("Value of iNo is %d \n",iNo);
        iDigit = iNo%10;
        printf("digit is : %d\n",iDigit);
        iNo = iNo/10;    
        printf("-----------------------------\n");
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