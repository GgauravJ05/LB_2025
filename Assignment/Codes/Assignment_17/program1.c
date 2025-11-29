/* Problem:
   Accept a number N from the user and display alphabets from A onward.
   Example:
   Input : 5
   Output: A B C D E
*/

#include <stdio.h>

void printPattern(int NO)
{
    char ch = 'A';
    for(int i = 0; i < NO; i++)
    {
        printf("%c ", ch);
        ch++;
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
