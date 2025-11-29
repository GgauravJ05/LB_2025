/* 
   Problem:
      Accept a number from user and return 
      the multiplication of all digits.

   Examples:
      Input : 2395  → Output : 270   (2*3*9*5)
      Input : 1018  → Output : 8     (1*0*1*8 = 0 but 
                                      usually ignore 0 → 1*1*8 = 8)
      Input : 1234  → Output : 24    (1*2*3*4)
*/

#include <stdio.h>

int digitMultiply(int iNo)
{
    int iDigit = 0;
    int iMul = 1;

    if(iNo < 0)             // convert negative to positive
        iNo = -iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;      // extract digit

        if(iDigit != 0)         // ignore digit '0'
        {
            iMul = iMul * iDigit;
        }

        iNo = iNo / 10;         // remove last digit
    }

    return iMul;
}

int main()
{
    int iVal = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iVal);

    iRet = digitMultiply(iVal);

    printf("%d", iRet);

    return 0;
}
