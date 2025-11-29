/*
Problem Statement:
Write a program which accepts number of rows and columns from user
and displays the following pattern:

Input:
iRow = 5
iCol = 5

Output:
$ * * * *
* $ * * *
* * $ * *
* * * $ *
* * * * $
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("$ ");
            }
            else
            {
                printf("* ");
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
