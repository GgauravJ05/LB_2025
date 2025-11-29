/* 
   Problem: Accept N numbers from the user and return the frequency of even numbers.
   Example:
   Input: N = 6
          Elements = 85 66 3 80 93 88
   Output: 3
*/

#include <stdio.h>

int evenCount(int Arr[], int length)
{
    int iCnt = 0, i = 0;

    for(i = 0; i < length; i++)
    {
        if(Arr[i] % 2 == 0)   // check even
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter how many numbers: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    int result = evenCount(p, iSize);
    printf("Even count = %d\n", result);

    free(p);
    return 0;
}
