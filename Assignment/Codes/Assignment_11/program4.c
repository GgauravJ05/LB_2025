/* Problem: Accept a number from user and count the frequency of digit 2.
   Input: 2395  → Output: 1
   Input: 1018  → Output: 0
*/
#include <stdio.h>

int countTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)            // convert negative to positive
    {
        iNo = -iNo;
    }

    while(iNo != 0)        // loop till number becomes zero
    {
        iDigit = iNo % 10;   // extract last digit

        if(iDigit == 2)      // check for digit 2
        {
            iCnt++;          // increment frequency
        }

        iNo = iNo / 10;      // remove last digit
    }

    return iCnt;             // return count of 2
}

int main()
{
    int iVal1 = 0;

    printf("Enter number: ");
    scanf("%d", &iVal1);

    int bRet = countTwo(iVal1);

    printf("%d", bRet);

    return 0;
}
