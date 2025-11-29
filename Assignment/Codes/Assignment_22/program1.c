/* 
   Problem:
   Accept number of rows and columns from the user and display the following pattern.

   Example:
   Input:  iRow = 4,  iCol = 4

   Output:
   *
   * *
   * * *
   * * * *
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j <= i)     // print stars up to diagonal
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

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iRow, &iCol);

    printPattern(iRow, iCol);

    return 0;
}
