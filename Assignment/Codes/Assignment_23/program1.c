/* 
Problem Statement:
Write a C program which accepts number of rows and columns from the user 
and display the following pattern.

Input: iRow = 4,  iCol = 4

Output:
    *   *   *   #
    *   #   *   *
    *   *   #   *
    #   *   *   *

Logic:
Print '*' everywhere except diagonal (row == column), where '#'.
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == j)
                printf("#\t");
            else
                printf("*\t");
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
