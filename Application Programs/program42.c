#include<stdio.h>
void display(int iNo)
{
    int iCnt=0; // counter
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d ",iCnt);
        if(iCnt==10 || iCnt==20 || iCnt ==30 || iCnt==40 || iCnt==50 || iCnt==60 || iCnt==70 || iCnt==80 || iCnt==90){
            printf("\n");
        }
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