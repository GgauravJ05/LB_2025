/*
Problem: Accept N numbers from the user and another number iNo.
Check whether iNo is present in the array or not.
Input: N = 6, iNo = 66
Elements: 85 66 3 80 93 88
Output: TRUE
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

/* Function: check()
   Purpose: To check whether iNo is present in Arr[] */
BOOL check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;     // Found
        }
    }
    return FALSE;            // Not found
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0;
    int *ptr = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter number to search:\n");
    scanf("%d", &iNo);

    bRet = check(ptr, iSize, iNo);

    if(bRet == TRUE)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    free(ptr);

    return 0;
}
