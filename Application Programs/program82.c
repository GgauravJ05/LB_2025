#include<stdio.h>
#include<stdlib.h>
void MinMax(int iCnt, int arr[])
{
    int iMin=arr[0];//11
    int iMax=arr[0];//11
    for(int iCount=0;iCount<iCnt;iCount++) //11,7,20,43,25
    {
        if(iMin>arr[iCount])
        {
            iMin = arr[iCount];//7
        }

        if(iMax<arr[iCount])
        {
            iMax = arr[iCount];//43
        }
    }
    printf("Smallest no is : %d \n",iMin);
    printf("Largest no is : %d \n",iMax);
    printf("\n");
}

int main()
{
    int iCnt=0;
    int *ptr=NULL;
    int iCount =0;
    
    printf("How many elements/numbers you want to enetr? \n");//5
    scanf("%d",&iCnt);
    ptr = (int *)malloc(iCnt*sizeof(int));
    
    printf("Dynamic memory allocated for  %d elements \n",iCnt);
    
    printf("Enter the elements: \n");
    for(iCount=0;iCount<iCnt;iCount++)
    {
        printf("Enter value for element: %d \n",iCount+1);
        scanf("%d",&ptr[iCount]);
    }

    MinMax(iCnt,ptr);
    free(ptr);
    printf("Dynamic memory deallocated successfully ....\n");

    return 0;
}