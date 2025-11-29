/*
   Problem:
   Accept N numbers from user and display all such elements 
   which are even and divisible by 5.

   Example:
   Input : 6  
           85 66 3 80 93 88
   Output: 80
*/
#include <stdio.h>
#include <stdlib.h>

void displayEvndivisibleBy5(int Arr[], int length)
{
    int i = 0;

    for(i = 0; i < length; i++)
    {
        if((Arr[i] % 2 == 0) && (Arr[i] % 5 == 0))
        {
            printf("%d ", Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter how many no of elements\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable Memory allocation\n");
        return -1;
    }

    printf("Enter %d elements\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    displayEvndivisibleBy5(p, iSize);

    free(p);
    return 0;
}
