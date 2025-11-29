/*
Problem: Write a program which accepts N numbers from the user
and return the product of all odd elements.

Input:
N = 6
Elements = 88 10 70 3 66 15

Output: 45
*/

#include <stdio.h>
#include <stdlib.h>

/* Function: Product()
   Purpose: Return the product of all odd elements.
            If no odd elements, return 0. */
int Product(int Arr[], int iSize)
{
    int iCnt = 0;
    int iProd = 1;
    int flag = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)     // odd number check
        {
            iProd = iProd * Arr[iCnt];
            flag = 1;             // at least one odd number found
        }
    }

    if(flag == 0)
        return 0;
    else
        return iProd;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements:\n");
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
        scanf("%d", &ptr[iCnt]);
    }

    int result = Product(ptr, iSize);
printf("product of all odd numbers is : %d\n", result);

free(ptr);

return 0;
}

