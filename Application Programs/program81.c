#include<stdio.h>
#include<stdlib.h>
int Minimum(int iCnt, int arr[])
{
    int iMin=arr[0];//11
    for(int iCount=0;iCount<iCnt;iCount++) //11,7,20,43,25
    {
        if(iMin>arr[iCount])
        {
            iMin = arr[iCount];//7
        }
    }

    printf("\n");
    return iMin;
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

    printf("Elements in the array are : \n");
    int smallest = Minimum(iCnt,ptr);
    printf("smallest no from all numbers is : %d \n",smallest);
    free(ptr);
    printf("Dynamic memory deallocated successfully ....\n");

    return 0;
}