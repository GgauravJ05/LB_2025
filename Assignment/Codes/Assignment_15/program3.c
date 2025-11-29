/*
Problem: Write a program which accepts N numbers from user and another number iNo.
Return the index of its last occurrence of iNo.

Input:
N = 6
iNo = 66
Elements = 85 66 3 80 66 88

Output: 4
*/
#include <stdio.h>
#include <stdlib.h>

/* Function: lastOccurance()
   Purpose: Return index of last occurrence of iNo.
            If not found, return -1. */
int lastOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iPos = -1;   // to store last found index

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;   // keep updating (last index)
        }
    }
    return iPos;
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

    iRet = lastOccurance(ptr, iSize, iNo);

    if(iRet == -1)
        printf("Number not found\n");
    else
        printf("Last occurrence at index %d\n", iRet);

    free(ptr);

    return 0;
}
