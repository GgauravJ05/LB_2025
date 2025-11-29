/* 
   Problem:
   Accept number of rows and columns from user and display the below pattern.

   Example:
   Input : iRows = 3, iCol = 5
   Output:
        5 4 3 2 1
        5 4 3 2 1
        5 4 3 2 1
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iRow, &iCol);

    printPattern(iRow, iCol);

    return 0;
}
