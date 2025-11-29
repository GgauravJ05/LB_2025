/*
Problem Statement:
Write a C program which accepts number of rows and columns from the user
and displays the following pattern.

Input: iRow = 4, iCol = 4

Actual printed output is 5 columns (because numbers go till 5):

Output:
    1   2   3   4   5
    1       2       5
    1           3   5
    1               4   5
    1   2   3   4   5

Pattern Logic:
- Print 1 to 5 in first row and last row
- Print 1 in first column
- Print row number at diagonal position (i == j)
- Print 5 in last column
- Leave all other positions blank
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow + 1; i++)   // +1 because display has 5 rows
    {
        for(int j = 1; j <= iCol + 1; j++)   // +1 because display has 5 columns
        {
            if(i == 1 || i == iRow + 1)      // first and last row
                printf("%d\t", j);           // 1 2 3 4 5
            else if(j == 1)
                printf("1\t");               // first column is always 1
            else if(j == i)
                printf("%d\t", i);           // diagonal prints row number
            else if(j == iCol + 1)
                printf("5\t");               // last column always 5
            else
                printf("\t");                // empty space
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
