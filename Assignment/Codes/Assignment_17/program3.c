/* Problem:
   Accept a number N from the user and display the pattern:
   1 * 2 * 3 * ... N *
   Example:
   Input  : 5
   Output : 1 * 2 * 3 * 4 * 5 *
*/

#include <stdio.h>

void printPattern(int NO)
{
    for(int i = 1; i <= NO; i++)
    {
        printf("%d * ", i);
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
