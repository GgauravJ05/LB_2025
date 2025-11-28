/* 
   Problem:
   Accept a start and end range from the user and display all numbers 
   between that range (including start and end).
   Conditions:
   - If start < end → print numbers from start to end.
   - If start == end → print that single number.
   - If start > end → print "Invalid range".
*/

#include <stdio.h>

void displayRange(int start, int end)
{
    if(start > end)
    {
        printf("Invalid range");
        return;
    }

    for(int i = start; i <= end; i++)
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

    displayRange(ival1, ival2);

    return 0;
}