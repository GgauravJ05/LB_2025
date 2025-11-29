// Problem Statement:
// Write a program which accepts number of rows and columns from user
// and displays the following pattern.
//
// Input: iRow = 5, iCol = 5
// Output:
//
//   A  B  C  D  E
//   1  2  3  4  5
//   A  B  C  D  E
//   1  2  3  4  5
//   A  B  C  D  E
#include <stdio.h>

// function to print the required pattern
void printPattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 1)       // odd row → alphabets
        {
            ch = 'A';
            for(j = 1; j <= iCol; j++)
            {
                printf("%c ", ch);
                ch++;
            }
        }
        else                // even row → numbers
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d ", j);
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
