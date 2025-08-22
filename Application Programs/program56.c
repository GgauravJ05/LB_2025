#include<stdio.h>
void display(int iNo)
{
    int iDigit =0;
    while(iNo!=0)
    {
        printf("Value of iNo is %d \n",iNo);
        iDigit = iNo%10;
        printf("digit is : %d\n",iDigit);
        iNo = iNo/10;    
        printf("-----------------------------\n");
    }
}

int main()
{
    int iValue =0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    display(iValue);
    return 0;
}