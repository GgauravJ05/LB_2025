/* 
   Problem: Accept N numbers from the user and display the sum 
            of digits of each number.

   Input : N = 6
           Elements = 8005 66 3 80 93 858
   Output: 13 12 3 8 12 21
*/

#include <stdio.h>
#include <stdlib.h>

void displaySum(int Arr[], int n)
{
    int i, num, sum;

    for(i = 0; i < n; i++)
    {
        num = Arr[i];
        sum = 0;

        while(num != 0)
        {
            sum += num % 10;
            num = num / 10;
        }

        printf("%d ", sum);
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

    displaySum(ptr, iSize);

    free(ptr);
    return 0;
}
