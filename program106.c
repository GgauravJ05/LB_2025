// 1   *   3   *
// 1   *   3   *
// 1   *   3   *
// 1   *   3   *
#include<stdio.h>
void display(int iRow,int iCol)
{
    for(int i=1;i<=iRow;i++) //outer //row
    {
        for(int j=1;j<=iCol;j++)  //inner //column
        {
            if(j%2==0) {
                printf("*\t");
            } else {
                printf("%d\t",j);
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iRow=0;
    int iCol=0;
    printf("Enter how many rows? \n");
    scanf("%d",&iRow);
    printf("Enter how many columns? \n");
    scanf("%d",&iCol);
    display(iRow,iCol);
    return 0;
}