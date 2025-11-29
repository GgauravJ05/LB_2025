/*
Problem Statement:
Write a C program which accepts number of rows and columns from the user 
and displays the following pattern.

Input: iRow = 5, iCol = 5

Output:
    *   *   *   *   *
    *   *       *   *
    *       *       *
    *   *       *   *
    *   *   *   *   *

Pattern Logic:
- Print '*' on:
    1) First row
    2) Last row
    3) First column
    4) Last column
    5) Left diagonal (i == j)
    6) Right diagonal (j == iCol - i + 1)
- Else print space.
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol || i == j || j == (iCol - i + 1))
                printf("*\t");
            else
                printf(" \t");
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
