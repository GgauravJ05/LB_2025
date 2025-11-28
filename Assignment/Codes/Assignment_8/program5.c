/* Problem: Program to return the difference between even factorial 
   and odd factorial of a given number.

   Formula:  Difference = EvenFactorial - OddFactorial

   Examples:
   Input: 5  
   Even Fact = 8   (4*2)
   Odd Fact  = 15  (5*3*1)
   Output = 8 - 15 = -7

   Input: -5 (consider positive)
   Output = -7

   Input: 10  
   Even Fact = 3840  (10*8*6*4*2)
   Odd Fact  = 945   (9*7*5*3*1)
   Output = 3840 - 945 = 2895
*/

#include <stdio.h>

int Evenoddfactdiff(int iNo)
{
    int evenFact = 1, oddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;   // handle negative numbers
    }

    for(int i = iNo; i >= 1; i--)
    {
        if(i % 2 == 0)
        {
            evenFact = evenFact * i;
        }
        else
        {
            oddFact = oddFact * i;
        }
    }

    return evenFact - oddFact;   // final difference
}

int main()
{
    int iVal = 0;
    printf("Enter number: ");
    scanf("%d", &iVal);

    int fact = Evenoddfactdiff(iVal);
    printf("factorial difference is: %d", fact);

    return 0;
}