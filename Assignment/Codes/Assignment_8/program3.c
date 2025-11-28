/* Problem: Write a program to find the even factorial of a number.
   Even Factorial means: Multiply only even numbers up to the given number.
   
   Examples:
   Input: 5   -> Even numbers: 4 * 2        Output: 8
   Input: -5  -> Consider absolute value: 4 * 2  Output: 8
   Input: 10  -> 10 * 8 * 6 * 4 * 2    Output: 3840
*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int fact = 1;

    if(iNo < 0)        // Handle negative input
    {
        iNo = -iNo;
    }

    for(int i = iNo; i >= 2; i--)
    {
        if(i % 2 == 0)    // Only even numbers
        {
            fact = fact * i;
        }
    }

    return fact;
}

int main()
{
    int iVal = 0;
    printf("Enter number: ");
    scanf("%d", &iVal);

    int fact = EvenFactorial(iVal);
    printf("Even factorial of number is: %d", fact);

    return 0;
}