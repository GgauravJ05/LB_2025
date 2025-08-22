// *   *   *   *
// *           *
// *           *
// *   *   *   *
#include<stdio.h>
void display(int iRow,int iCol)
{
    for(int i=1;i<=iRow;i++) //outer //row
    {
        for(int j=1;j<=iCol;j++)  //inner //column
        {
            if(i==1 || j==1 || i==iRow || j==iCol)
            {
                printf("*\t");
            }
            else {
                printf(" \t");
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