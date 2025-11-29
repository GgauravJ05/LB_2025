// Problem Statement:
// Write a program which accepts number of rows and columns from user
// and displays the following pattern.
//
// Input: iRow = 4, iCol = 4
// Output:
//     2  4  6  8
//     1  3  5  7
//     2  4  6  8
//     1  3  5  7
#include <stdio.h>

// function to print the required pattern
void printPattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 0;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)      // odd row → even numbers
            num = 2;
        else                // even row → odd numbers
            num = 1;

        for(j = 1; j <= iCol; j++)
        {
            printf("%d ", num);
            num += 2;      // jump by 2 each time
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
