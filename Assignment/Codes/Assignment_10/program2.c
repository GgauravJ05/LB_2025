/* 
   Problem:
   Accept a start and end range from the user and display all EVEN numbers 
   between that range (including start and end).
   
   Conditions:
   - If start < end → print even numbers from start to end.
   - If start == end → print that number only if it is even.
   - If start > end → print "Invalid range".
*/

#include <stdio.h>

void displayRangeEven(int start, int end)
{
    if(start > end)
    {
        printf("Invalid range");
        return;
    }

    // Ensure we start from an EVEN number
    if(start % 2 != 0)
    {
        start++;     // move to next even
    }

    for(int i = start; i <= end; i += 2)
    {
        printf("%d ", i);
    }
}

int main()
{
    int ival1 = 0, ival2 = 0;

    printf("Enter start: ");
    scanf("%d", &ival1);

    printf("Enter end: ");
    scanf("%d", &ival2);

    displayRangeEven(ival1, ival2);

    return 0;
}