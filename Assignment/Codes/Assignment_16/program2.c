/* 
   Problem: Accept N numbers from the user and return the smallest number.
   Input : N = 6
           Elements = 85 66 3 80 93 88
   Output: 3
*/

#include <stdio.h>
#include <stdlib.h>

int Smallest(int Arr[], int n)
{
    int i, min = Arr[0];

    for(i = 1; i < n; i++)
    {
        if(Arr[i] < min)
            min = Arr[i];
    }
    return min;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter how many elements:\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    int result = Smallest(ptr, iSize);
    printf("Smallest number is: %d\n", result);

    free(ptr);
    return 0;
}
