/* 
   Problem: Write a program which accepts number of rows and columns 
            from the user and displays the following pattern.

   Input:  iRow = 3, iCol = 4

   Output:
           1   2   3   4
           5   6   7   8
           9   10  11  12
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i, j;
    int num = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d  ", num);
            num++;      // increase continuously
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
