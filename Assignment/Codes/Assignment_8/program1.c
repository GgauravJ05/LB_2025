/*
Write a program which accept number from user and display below pattern
Input : 4
Output: ****####

Input : 6
Output: *****#####
*/

#include <stdio.h>

void display(int iNo)
{
    int i;

    // Print stars
    for(i = 1; i <= iNo; i++)
    {
        printf("* ");
    }

    // Print hashes
    for(i = 1; i <= iNo; i++)
    {
        printf("# ");
    }
}

int main()
{
    int iVal = 0;
    printf("Enter number: ");
    scanf("%d", &iVal);

    display(iVal);
    return 0;
}