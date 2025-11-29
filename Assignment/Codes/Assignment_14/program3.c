/* 
   Problem: Accept N numbers from user and check whether the number 15 
            is present in the array or not.

   Example:
   Input: N = 7
          Elements = 85 66 11 80 93 88 90
   Output: 15 is present / absent
*/

#define TRUE 1
#define FALSE 0
typedef int BOOL;

#include <stdio.h>
#include <stdlib.h>

BOOL check(int Arr[], int length)
{
    int i = 0;

    for(i = 0; i < length; i++)
    {
        if(Arr[i] == 15)     // check if element is 15
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter how many elements: ");
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

    BOOL bRet = check(p, iSize);

    if(bRet == TRUE)
    {
        printf("15 is present\n");
    }
    else
    {
        printf("15 is absent\n");
    }

    free(p);

    return 0;
}
