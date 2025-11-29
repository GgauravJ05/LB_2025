/* Problem: Accept a number from user and display its digits in reverse order.
   Example:
   Input: 2395
   Output:
   5
   9
   3
   2
*/
#include <stdio.h>

void displayReverseDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)        // convert negative number to positive
    {
        iNo = -iNo;
    }

    while(iNo != 0)    // loop until number becomes zero
    {
        iDigit = iNo % 10;       // extract last digit
        printf("%d\n", iDigit);  // print digit
        iNo = iNo / 10;          // remove last digit
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    displayReverseDigit(iValue);

    return 0;
}
