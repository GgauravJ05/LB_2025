/* 
   Problem: Accept a number from user and return 
            the count of odd digits.
   Example:
      Input : 2395   → Output : 3
      Input : 1018   → Output : 2
      Input : -1018  → Output : 2
*/

#include <stdio.h>

int countOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)            // convert negative number to positive
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;        // extract last digit
        
        if(iDigit % 2 != 0)       // check if digit is odd
        {
            iCnt++;
        }

        iNo = iNo / 10;           // remove last digit
    }

    return iCnt;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);

    iRet = countOdd(iVal);

    printf("%d", iRet);

    return 0;
}
