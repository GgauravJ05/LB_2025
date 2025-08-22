#include<stdio.h>
#include<stdlib.h>
void display(int iCnt, int arr[])
{
    for(int iCount=0;iCount<iCnt;iCount++)
    {
        printf("%d \t",arr[iCount]);
    }
}

int main()
{
    int iCnt=0;
    int *ptr=NULL;
    int iCount =0;
    
    printf("Enter the no of elements \n");//5
    scanf("%d",&iCnt);
    ptr = (int *)malloc(iCnt*sizeof(int));

    printf("Enter the elements: \n");

    for(iCount=0;iCount<iCnt;iCount++)
    {
        scanf("%d",&ptr[iCount]);
    }

    printf("Elements in the array are : \n");
    display(iCnt,ptr);
    free(ptr);

    return 0;
}