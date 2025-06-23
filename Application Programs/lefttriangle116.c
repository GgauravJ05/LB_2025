// *   *   *   *
// *   *   *
// *   * 
// *

#include <stdio.h>
void display(int iRows, int iCols)
{
    for (int i = 1; i <= iRows; i++) //outer //row
    {
        for (int j = i; j<=iRows; j++) //inner //column
        {
        
                printf("* \t");
        }
        printf("\n");
    }
}

int main()
{
    int iRows = 0;
    int iCols = 0;

    printf("Enter the no of rows: \n");
    scanf("%d", &iRows);

    printf("Enter the no of columns: \n");
    scanf("%d", &iCols);

    display(iRows, iCols);
    return 0;
}