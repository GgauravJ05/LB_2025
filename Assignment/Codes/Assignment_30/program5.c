/*
   Problem Statement:
   Write a program which displays the addition of digits of each 
   element from a singly linear linked list.

   Function Prototype:
   void SumDigit(PNODE Head);

   Example:
   Input Linked List : 110 -> 230 -> 20 -> 240 -> 640
   Output            : 2 5 2 6 10
*/

void SumDigit(PNODE Head)
{
    PNODE temp = Head;

    while(temp != NULL)
    {
        int num = temp->Data;
        int sum = 0;

        while(num != 0)
        {
            sum += num % 10;     // Extract digit
            num = num / 10;      // Remove digit
        }

        printf("%d ", sum);

        temp = temp->Next;
    }
}
