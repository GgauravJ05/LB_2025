/* Problem: Accept amount in US dollars and convert it into INR.
   Conversion rate: 1 USD = 45 INR
   Example:
   Input: 10   Output: 450
   Input: 2    Output: 90
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
    int result = 0;
    result = iNo * 45;   // Convert dollar to rupees
    return result;
}

int main()
{
    int iVal = 0;
    printf("Enter number: ");
    scanf("%d", &iVal);

    int rupees = DollarToINR(iVal);
    printf("Value in Indian rupees is: %d", rupees);

    return 0;
}