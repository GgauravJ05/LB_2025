/* 
   Problem:
   Write a program which accepts N numbers from the user and 
   returns the difference between the addition of even elements 
   and the addition of odd elements.

   Example:
   Input: N = 6
   Elements: 85 66 3 80 93 88
   Even sum = 66 + 80 + 88 = 234
   Odd sum  = 85 + 3 + 93 = 181
   Output   = 234 - 181 = 53
*/
#include <stdio.h>

int diff(int Arr[], int length)
{
    int i = 0, evenSum = 0, oddSum = 0;

    for(i = 0; i < length; i++)
    {
        if(Arr[i] % 2 == 0)
            evenSum += Arr[i];
        else
            oddSum += Arr[i];
    }

    return evenSum - oddSum;
}

int main()
{
    int iSize = 0, i = 0, result = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter %d elements:\n", iSize);
    for(i = 0; i < iSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = diff(arr, iSize);

    printf("Result = %d\n", result);

    return 0;
}
