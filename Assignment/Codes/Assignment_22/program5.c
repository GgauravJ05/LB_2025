/*
   Problem:
   Accept number of rows and columns from the user and display the following pattern.

   Input:  iRow = 4,  iCol = 4

   Output:
   1  2  3  4
      2  3  4
         3  4
            4

   Logic:
   - Each row starts printing from the row number.
   - Continue printing numbers up to iCol.
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j < i; j++)   // print leading spaces
        {
            printf("  ");
        }

        for(j = i; j <= iCol; j++)   // print numbers from row number to iCol
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}

int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter number of rows and columns\n");
    scanf("%d %d", &iRow, &iCol);

    printPattern(iRow, iCol);

    return 0;
}
