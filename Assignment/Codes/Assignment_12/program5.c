/* 
   Problem:
      Accept a number from user and return the difference between
      addition of even digits and addition of odd digits.

      Difference = (Sum of Even Digits) - (Sum of Odd Digits)

   Examples:
      Input : 2395  → Output : -12   (2 - 17)
      Input : 1018  → Output : 6     (8 - 2)
      Input : 8440  → Output : 16    (16 - 0)
*/

#include <stdio.h>

int diffCount(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0, iOddSum = 0;

    if(iNo < 0)                 // convert negative to positive
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;      // extract digit

        if(iDigit % 2 == 0)     // even digit
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else                    // odd digit
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;         // remove last digit
    }

    return iEvenSum - iOddSum;  // required difference
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);

    iRet = diffCount(iVal);

    printf("%d", iRet);

    return 0;
}
