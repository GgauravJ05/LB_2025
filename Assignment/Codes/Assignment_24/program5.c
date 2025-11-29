/* 
Q5. Accept division of a student and display the exam time.  
    There are 4 divisions in the school: A, B, C, D.

    Exam Time:
        A → 7 AM
        B → 8 AM
        C → 9 AM
        D → 10 AM

    Input : C
    Output: Your Exam is at 9AM

    Input : X
    Output: No division available
*/

#include <stdio.h>

void showExamTime(char ch)
{
    // Convert lowercase to uppercase to avoid mismatch
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;     // ASCII conversion
    }

    if(ch == 'A')
        printf("Your Exam is at 7AM\n");
    else if(ch == 'B')
        printf("Your Exam is at 8AM\n");
    else if(ch == 'C')
        printf("Your Exam is at 9AM\n");
    else if(ch == 'D')
        printf("Your Exam is at 10AM\n");
    else
        printf("No division available\n");
}

int main()
{
    char ch = '\0';

    printf("Enter division: ");
    scanf("%c", &ch);

    showExamTime(ch);

    return 0;
}
