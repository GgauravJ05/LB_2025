/* 
   Problem: Accept N numbers from the user and display only 
            those numbers which are 3-digit (100 to 999).

   Input : N = 6
           Elements = 825 66 3 850 93 88
   Output: 825 850
*/

#include <stdio.h>
#include <stdlib.h>

void display(int Arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(Arr[i] >= 100 && Arr[i] <= 999)
        {
            printf("%d ", Arr[i]);
        }
    }
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
        printf("Unable Memory allocation\n");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    display(ptr, iSize);

    free(ptr);
    return 0;
}
