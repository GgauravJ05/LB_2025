/* 
   Problem: Accept N numbers from user and return the difference between 
            the frequency of even and odd numbers.

   Example:
   Input: N = 7
          Elements = 85 66 3 80 93 88 90
   Even count = 4
   Odd count  = 3
   Output = 1   (4 - 3)
*/

#include <stdio.h>
#include <stdlib.h>

int diffEvenOdd(int Arr[], int length)
{
    int evenCnt = 0, oddCnt = 0;
    int i = 0;

    for(i = 0; i < length; i++)
    {
        if(Arr[i] % 2 == 0)     // even number
        {
            evenCnt++;
        }
        else                    // odd number
        {
            oddCnt++;
        }
    }
    return evenCnt - oddCnt;    // difference
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter how many no of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable Memory allocation\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    int result = diffEvenOdd(p, iSize);
    printf("Difference (Even - Odd) = %d\n", result);

    free(p);

    return 0;
}
