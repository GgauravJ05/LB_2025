/*
Problem Statement:
Write a C program which accepts number of rows and columns from the user
and displays the following pattern.

Input: iRow = 6, iCol = 6

Output:
    *   *   *   *   *   *
    *   #   #   #   *   *
    *   #   #   *   $   *
    *   #   *   $   $   *
    *   *   $   $   $   *
    *   *   *   *   *   *

Pattern Logic:
- Print '*' on border (first row, last row, first col, last col)
- Print '#' where row < column  (upper-left region)
- Print '$' where row > column  (lower-right region)
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
                printf("*\t");          // border
            else if(i < j)
                printf("#\t");          // upper-left region
            else if(i > j)
                printf("$\t");          // lower-right region
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
