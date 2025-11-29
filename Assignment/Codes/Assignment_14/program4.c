/* 
   Problem: Accept N numbers from user and return the frequency of 15.
   
   Example:
   Input: N = 6
          Elements = 85 66 3 15 93 88
   Output: 1
*/

#include <stdio.h>
#include <stdlib.h>

int frequency(int Arr[], int length)
{
    int i = 0, iCnt = 0;

    for(i = 0; i < length; i++)
    {
        if(Arr[i] == 15)     // check for 15
        {
            iCnt++;         // increment count
        }
    }
    return iCnt;
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

    int iRet = frequency(p, iSize);
    printf("frequency = %d\n", iRet);

    free(p);
    return 0;
}
