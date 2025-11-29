/* 
   Problem: Write a program which accepts number of rows and columns 
            from the user and displays the following pattern.

   Input:  iRow = 3, iCol = 5

   Output:
           A A A A A
           B B B B B
           C C C C C
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i, j;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c  ", ch);
        }
        ch++;  // next alphabet on next row
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
