#include<stdio.h>
void display(int iNo)
{
    int iCnt=0; // counter
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("*\n",iCnt);
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