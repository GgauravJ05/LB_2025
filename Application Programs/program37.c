#include<stdio.h>
void display(int iNo)
{
    int iCnt=0; // counter
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Hello %d\n",iCnt);
    }
}
int main()
{
    int noOfLines;
    printf("Enter no of lines to print \n");
    scanf("%d",&noOfLines);
    display(noOfLines);
    return 0;
}