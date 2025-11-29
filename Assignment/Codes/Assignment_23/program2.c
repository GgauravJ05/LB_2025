/*
Problem Statement:
Write a C program which accepts number of rows and columns from the user 
and displays the following pattern.

Input: iRow = 4, iCol = 4

Output:
    *   *   *   #
    *   *   #   @
    *   #   @   @
    #   @   @   @

Pattern Logic:
- Print '*' where column < row and row == 1 (upper-left triangle)
- Print '#' where row == column (diagonal)
- Print '@' where column > row
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == j)
                printf("#\t");          // diagonal
            else if(j > i)
                printf("@\t");          // right side of diagonal
            else
                printf("*\t");          // left side
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
