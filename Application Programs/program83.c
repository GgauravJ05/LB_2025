#include<stdio.h>
#include<stdlib.h>
int frequency(int iCnt, int arr[],int iNo)
{
    int iPresent =0;
    for(int iCount=0;iCount<iCnt;iCount++) //11,7,20,43,20
    {
        if(iNo==arr[iCount])
        {
            iPresent++;
        }
    }
    printf("\n");
    return iPresent;
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

    int iNo;
    printf("Enter the no to search: \n");
    scanf("%d",&iNo);


    int howmanytimes = frequency(iCnt,ptr,iNo);
    printf("%d number occurred %d time (s) in an array \n",iNo,howmanytimes);
    free(ptr);
    printf("Dynamic memory deallocated successfully ....\n");

    return 0;
}