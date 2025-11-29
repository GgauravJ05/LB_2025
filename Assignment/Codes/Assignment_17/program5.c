/* Problem:
   Accept a number N from the user and display the first N even numbers.
   Example:
   Input  : 5
   Output : 2 4 6 8 10
*/

#include <stdio.h>

void printPattern(int NO)
{
    for(int i = 1; i <= NO; i++)
    {
        printf("%d ", i * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    printPattern(iValue);

    return 0;
}
