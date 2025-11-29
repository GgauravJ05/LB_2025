/* Problem:
   Accept a number N from the user and display the pattern:
   N # (N-1) # (N-2) # ... 1 #
   Example:
   Input  : 5
   Output : 5 # 4 # 3 # 2 # 1 #
*/

#include <stdio.h>

void printPattern(int NO)
{
    for(int i = NO; i >= 1; i--)
    {
        printf("%d # ", i);
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
