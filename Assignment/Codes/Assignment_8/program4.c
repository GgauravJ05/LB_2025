/* Problem: Write a program to find the odd factorial of a given number.
   Odd Factorial means: Multiply only odd numbers up to the given number.
   
   Examples:
   Input: 5   -> Odd numbers: 5 * 3 * 1     Output: 15
   Input: -5  -> Consider absolute value: 5 * 3 * 1   Output: 15
   Input: 10  -> 9 * 7 * 5 * 3 * 1         Output: 945
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    int fact = 1;

    if(iNo < 0)      // If number is negative, make it positive
    {
        iNo = -iNo;
    }

    for(int i = iNo; i >= 1; i--)
    {
        if(i % 2 != 0)   // Only odd numbers
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

    int fact = OddFactorial(iVal);
    printf("Odd factorial of number is: %d", fact);

    return 0;
}