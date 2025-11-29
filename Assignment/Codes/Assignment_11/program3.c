/* Problem: Accept a number from user and count the frequency of digit 5.
   Input: 2395  → Output: 1
   Input: 1018  → Output: 0
*/
#include <stdio.h>

int countFive(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)          // convert negative to positive
    {
        iNo = -iNo;
    }

    while(iNo != 0)      // loop till number becomes zero
    {
        iDigit = iNo % 10;   // extract last digit

        if(iDigit == 5)      // check if digit is 5
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
    int bRet = 0;

    printf("Enter number: ");
    scanf("%d", &iVal1);

    bRet = countFive(iVal1);

    printf("%d", bRet);

    return 0;
}
