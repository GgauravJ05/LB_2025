/* 
   Problem: Accept a number from the user and return the 
            count of even digits.
   Example:
      Input : 2395   → Output : 1
      Input : 1018   → Output : 2
      Input : -1018  → Output : 2
*/

#include <stdio.h>

int countEvn(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)          // convert negative to positive
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;      // extract last digit
        if(iDigit % 2 == 0)     // check even
        {
            iCnt++;
        }
        iNo = iNo / 10;         // remove last digit
    }

    return iCnt;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iVal);

    iRet = countEvn(iVal);

    printf("Even digit count = %d", iRet);

    return 0;
}
