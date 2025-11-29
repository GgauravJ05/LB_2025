/*
Problem: Write a program which accepts N numbers from the user and a range,
and display all elements that lie within that range.

Input:
N = 6
Start = 50
End = 90
Elements = 85 66 3 80 93 88

Output: 85 66 80 88
*/

#include <stdio.h>
#include <stdlib.h>

/* Function: displayRange()
   Purpose: Display all elements between Start and End (inclusive) */
void displayRange(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Elements in the given range:\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
}
 
int main()
{
    int iSize = 0, iCnt = 0;
    int iStart = 0, iEnd = 0;
    int *ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    printf("Enter starting point of range:\n");
    scanf("%d", &iStart);

    printf("Enter ending point of range:\n");
    scanf("%d", &iEnd);

    ptr = (int *)malloc(iSize * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    displayRange(ptr, iSize, iStart, iEnd);

    free(ptr);

    return 0;
}
