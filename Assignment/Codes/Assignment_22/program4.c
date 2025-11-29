/*
   Problem:
   Accept number of rows and columns from the user and display the following pattern.

   Input:  iRow = 6,  iCol = 5

   Output:
   *   *   *   *   *
   *   *       *   *
   *       *       *
   *       *       *
   *   *       *   *
   *   *   *   *   *

   Logic:
   - Print '*' when:
        • j == 1  (left border)
        • j == iCol (right border)
        • i == j  (left diagonal)
        • i + j == iCol + 1  (right diagonal)
   - Else print space
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j == 1 || j == iCol || i == j || (i + j) == (iCol + 1))
                printf("* ");
            else
                printf("  ");
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
