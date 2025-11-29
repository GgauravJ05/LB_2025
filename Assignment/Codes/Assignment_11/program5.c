/* Problem: Accept a number from user and count how many digits
   are less than 5.

   Input: 2395  
   Output: 3     (2, 3, 9? → No, 9 is NOT < 5 → digits < 5 are 2, 3, 5? → 5 is NOT < 5 → only 2, 3 → but digit 9? Incorrect in PDF)
   Input: 1018  
   Output: 3     (1, 0, 1 → all < 5)
*/
#include <stdio.h>

int count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)              // convert negative to positive
    {
        iNo = -iNo;
    }

    while(iNo != 0)          // loop till number becomes zero
    {
        iDigit = iNo % 10;   // extract last digit

        if(iDigit < 5)       // check if digit is less than 5
        {
            iCnt++;          // increment counter
        }

        iNo = iNo / 10;      // remove last digit
    }

    return iCnt;             // return frequency
}

int main()
{
    int iVal1 = 0;

    printf("Enter number: ");
    scanf("%d", &iVal1);

    int bRet = count(iVal1);

    printf("%d", bRet);

    return 0;
}
