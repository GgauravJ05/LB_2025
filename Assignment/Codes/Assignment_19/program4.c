/* 
   Problem: Write a program which accepts number of rows and columns 
            from the user and displays the following pattern.

   Input:  iRow = 4, iCol = 5

   Output:
           4 4 4 4 4
           3 3 3 3 3
           2 2 2 2 2
           1 1 1 1 1
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i, j;
    int num = iRow;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d  ", num);
        }
        num--;     // Decrease number for next row
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
