/* 
   Problem:
   Accept a start and end range from the user and return the addition 
   of all EVEN numbers between that range.

   Conditions:
   - Both start and end must be POSITIVE.
   - If start > end → Invalid range.
   - If any number <= 0 → Invalid range.
*/

#include <stdio.h>

int RangeSumEven(int start, int end)
{
    if(start <= 0 || end <= 0 || start > end)
    {
        printf("Invalid range");
        return -1;   // indicates invalid
    }

    int sum = 0;

    // Move start to the first even number
    if(start % 2 != 0)
        start++;

    for(int i = start; i <= end; i += 2)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int ival1 = 0, ival2 = 0;

    printf("Enter start: ");
    scanf("%d", &ival1);

    printf("Enter end: ");
    scanf("%d", &ival2);

    int isum = RangeSumEven(ival1, ival2);

    if(isum != -1)
        printf("Addition = %d", isum);

    return 0;
}