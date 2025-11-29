/* 
   Problem:
      Accept a number from user and return the count of digits
      which are in between 3 and 7.

   Range considered: digits > 3 AND digits < 7  
                     (i.e., 4, 5, 6 only)

   Examples:
      Input : 2395  → Output : 1     (only digit 5)
      Input : 1018  → Output : 0
      Input : 4521  → Output : 2     (digits 4 and 5)
*/

#include <stdio.h>

int countRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)              // convert negative number to positive
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;          // extract digit

        if(iDigit > 3 && iDigit < 7) // check if digit is between 3 and 7
        {
            iCnt++;
        }

        iNo = iNo / 10;             // remove last digit
    }

    return iCnt;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iVal);

    iRet = countRange(iVal);

    printf("%d", iRet);

    return 0;
}
