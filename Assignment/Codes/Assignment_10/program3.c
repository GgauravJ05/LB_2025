/* 
   Problem:
   Accept a start and end range from the user and return the addition of 
   all numbers between that range.
   
   Conditions:
   - Range must contain only POSITIVE numbers (start > 0 and end > 0).
   - If start > end → Invalid range.
   - If start <= 0 or end <= 0 → Invalid range.
*/

#include <stdio.h>

int RangeSum(int start, int end)
{
    if(start <= 0 || end <= 0 || start > end)
    {
        printf("Invalid range");
        return -1;     // indicates invalid
    }

    int sum = 0;
    for(int i = start; i <= end; i++)
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

    int isum = RangeSum(ival1, ival2);

    if(isum != -1)
        printf("Addition = %d", isum);

    return 0;
}