#include<stdio.h>
#include<stdlib.h>
int evenSum(int iCnt, int arr[])
{
    int iSum=0;
    for(int iCount=0;iCount<iCnt;iCount++)
    {
        if(arr[iCount]%2==0){
            iSum=iSum+arr[iCount];
        }
        
    }
    printf("\n");
    return iSum;
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
    int sum = evenSum(iCnt,ptr);
    printf("sum of all even numbers is : %d \n",sum);
    free(ptr);
    printf("Dynamic memory deallocated successfully ....\n");

    return 0;
}