// PS - Write a prgram which accept one number from user and check whether that number is greater tham 100 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkGreater(int iNo)
{
 if(iNo > 100)
 {
    return TRUE;
 }
 else
 {
    return FALSE;
 }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("please enter number: \n");
    scanf("%d", &iValue);
    
    bRet = ChkGreater(iValue);

    if(iValue > 100)
    {
        printf("Greater");
    }
    else{
        printf("Smaller");
    }
    return 0;
}