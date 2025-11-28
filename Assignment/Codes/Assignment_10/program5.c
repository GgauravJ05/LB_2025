/* 
   Problem:
   Accept a start and end range from the user and display all numbers 
   between that range in REVERSE ORDER.

   Conditions:
   - If start > end → VALID (because reverse must print end to start).
   - If start < end → VALID (just print from end to start).
   - If start == end → print that same number.
   - If both numbers are valid integers (negative allowed).
   - Only INVALID case: start < end but asked invalid? (As per sheet)
   - In sheet: They show "Invalid range" only when start > end.
*/

#include <stdio.h>

void ReverseRange(int start, int end)
{
    if(start < end && start >= 0 && end >= 0)
    {
        // In examples, 90 18 -> Invalid range
        printf("Invalid range");
        return;
    }

    if(start >= end)
    {
        for(int i = start; i >= end; i--)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int ival1 = 0, ival2 = 0;

    printf("Enter start: ");
    scanf("%d", &ival1);

    printf("Enter end: ");
    scanf("%d", &ival2);

    ReverseRange(ival1, ival2);

    return 0;
}