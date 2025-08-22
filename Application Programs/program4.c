//Problem statement: Accept twp intgers and perform the addition
#include<stdio.h>
int iAddition(int iNo1, int iNo2)
{
    int iSum =0;    // variable to store Sum of no's
    iSum = iNo1+iNo2;
    return iSum;
}

int main()
{
    auto int iValue1 = 0;   // variable to store first no
    auto int iValue2 = 0;   // variable to store second no
    auto int iAns = 0;      // variable to store addition
    printf("Enter first number\n");
    scanf("%d",&iValue1);
    printf("Enter second number\n");
    scanf("%d",&iValue2);

    iAns=iAddition(iValue1,iValue2); //call to iAddition function
    printf("Addition is: %d",iAns);
    return 0;

}