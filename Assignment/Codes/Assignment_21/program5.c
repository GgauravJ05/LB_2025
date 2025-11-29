/*
Problem Statement:
Write a program which accepts number of rows and columns from user 
and displays the following pattern:

Input:
iRow = 4
iCol = 4

Output:
1 2 3 4
1 * * 4
1 * * 4
1 2 3 4
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("%d ", j);   // border numbers
            }
            else
            {
                printf("* ");       // inside stars
            }
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
