/* 
Problem Statement:
Write a program which accepts a string from the user and displays it 
in reverse order.

Example:
Input  : "Fabulous"
Output : "suolubaF"
*/

#include <stdio.h>

void reverse(char *ch)
{
    int start = 0, end = 0;

    // Find length
    while(ch[end] != '\0')
    {
        end++;
    }
    end--; // Move to last valid index

    // Swap characters from both ends
    while(start < end)
    {
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;

        start++;
        end--;
    }

    printf("Reversed String = %s\n", ch);
}

int main()
{
    char arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", arr);

    reverse(arr);

    return 0;
}
