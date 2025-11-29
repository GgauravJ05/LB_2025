// Problem Statement:
// Write a program which accepts number of rows and columns from user
// and displays the following pattern.
//
// Input: iRow = 4, iCol = 4
// Output:
//     1  2  3  4
//     2  3  4  5
//     3  4  5  6
//     4  5  6  7
#include <stdio.h>

// function to print the required pattern
void printPattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 0;

    for(i = 1; i <= iRow; i++)
    {
        num = i;          // starting number of each row

        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", num);
            num++;        // increment for next column
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
