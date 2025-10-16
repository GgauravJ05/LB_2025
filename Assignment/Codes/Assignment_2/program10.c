// PS - Accept number from user and check whether number is even or odd.

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter the number: \n");
    scanf("%d", &iValue);
    bRet = CheckEven(iValue);
    return 0;
}