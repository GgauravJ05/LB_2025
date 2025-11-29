/* 
   Problem: Write a program which accepts number of rows and columns 
            from the user and displays the following pattern.

   Input:  iRow = 4, iCol = 4

   Output:
           A  B  C  D
           A  B  C  D
           A  B  C  D
           A  B  C  D
*/

#include <stdio.h>

void printPattern(int iRow, int iCol)
{
    int i, j;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A';
        for(j = 1; j <= iCol; j++)
        {
            printf("%c  ", ch);
            ch++;
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
