/* Problem: Accept a number from user and check whether it contains digit 0 or not.
   Input: 2395  → Output: There is no Zero
   Input: 1018  → Output: There is Zero
   Input: 9000  → Output: There is Zero
*/
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL isZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)            // convert negative to positive
    {
        iNo = -iNo;
    }

    while(iNo != 0)        // loop till number becomes zero
    {
        iDigit = iNo % 10; // extract last digit

        if(iDigit == 0)    // if digit is zero
        {
            return TRUE;
        }

        iNo = iNo / 10;    // remove last digit
    }

    return FALSE;          // no zero found
}

int main()
{
    int iVal1 = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iVal1);

    bRet = isZero(iVal1);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("It contains no Zero");
    }

    return 0;
}
