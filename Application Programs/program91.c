//input 4
// 4   3   2   1
#include<stdio.h>
void display(int iNo)
{
    int iCount =0;
    for(iCount=iNo;iCount>=1;iCount--)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the no:\n");
    scanf("%d",&iNo);

    display(iNo);
    return 0;
}