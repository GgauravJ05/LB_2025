/* 
   Problem: Accept N numbers from user and accept one number as iNo.
            Return the frequency of iNo in the array.

   Example:
   Input: N = 6
          iNo = 66
          Elements = 85 66 3 66 93 88
   Output: 2
*/

#include <stdio.h>
#include <stdlib.h>

int frequency(int Arr[], int length, int iNo)
{
    int i = 0, iCnt = 0;

    for(i = 0; i < length; i++)
    {
        if(Arr[i] == iNo)       // check for iNo
        {
            iCnt++;            // increment counter
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    int *p = NULL;

    printf("Enter how many no of elements:\n");
    scanf("%d", &iSize);

    printf("Enter the number you want to search (iNo):\n");
    scanf("%d", &iNo);

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

    int iRet = frequency(p, iSize, iNo);
    printf("frequency = %d\n", iRet);

    free(p);

    return 0;
}
