/* 
   Problem:
   Accept number of rows and columns from user and display the below pattern.

   Example:
   Input : iRows = 3, iCol = 4
   Output:
        1 1 1 1
        2 2 2 2
        3 3 3 3
        4 4 4 4
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", i);
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
