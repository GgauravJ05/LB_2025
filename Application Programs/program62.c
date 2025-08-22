#include<stdio.h>
int reverseNo(int iNo)
{
    int iDigit =0;
    int iRev=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo = iNo/10;
        iRev =(iRev*10)+iDigit;
    }
    return iRev;
}

int main()
{
    int iValue =0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    int iRev = reverseNo(iValue);
    printf("%d reversed = : %d",iValue,iRev);
    return 0;
}