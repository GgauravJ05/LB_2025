/*
Problem: Write a program which accepts N numbers from the user and another number iNo.
Return the index of the first occurrence of iNo.

Input:
N = 6
iNo = 66
Elements = 85 0 3 66 93 88

Output: 3
*/

#include <stdio.h>
#include <stdlib.h>

/* Function: firstOccurance()
   Purpose: Return index of first occurrence of iNo.
            If not found, return -1. */
int firstOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;   // return index
        }
    }
    return -1;             // not found
}

int main()
{
    int iSize = 0, iCnt = 0, iNo = 0, iRet = 0;
    int *ptr = NULL;

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

    iRet = firstOccurance(ptr, iSize, iNo);

    if(iRet == -1)
        printf("Number not found\n");
    else
        printf("First occurrence at index %d\n", iRet);

    free(ptr);

    return 0;
}
