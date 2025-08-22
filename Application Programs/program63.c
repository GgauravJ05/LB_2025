#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int iNo)
{
    int iDigit =0;
    int iRev=0;
    int iCopyNo = iNo; // xerox kadhli
    while(iNo>0)
    {
        iDigit=iNo%10;
        iNo = iNo/10;
        iRev =(iRev*10)+iDigit; // no reverse kela
    }

    if (iCopyNo==iRev)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue =0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    bool isPalin = isPalindrome(iValue);

    if(isPalin==true)
    {
        printf("%d is palindrome number",iValue);
    } else
    {
        printf("%d is not a palindrome number",iValue);
    }

    return 0;
}