// PS - Write a program which accept three numbers abd print its multiplication.

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    
    if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
    {
        printf("0");
    }
    return iNo1 * iNo2 * iNo3 ;
}


int main()
{
    int iValue1, iValue2, iValue3, iRet = 0;

    printf("Please enter three numbers: \n");
    scanf("%d %d %d", &iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d \n", iRet);

    return 0;
}
// Time Complexity: O(1) (Constant Time)