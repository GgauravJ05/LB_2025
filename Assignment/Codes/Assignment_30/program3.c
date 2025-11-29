/*
   Problem Statement:
   Write a program which returns the addition of all even 
   elements from a singly linear linked list.

   Function Prototype:
   int AdditionEven(PNODE Head);

   Example:
   Input Linked List : 11 -> 20 -> 32 -> 41
   Output            : 52
*/

int AdditionEven(PNODE Head)
{
    PNODE temp = Head;
    int sum = 0;

    while(temp != NULL)
    {
        if((temp->Data % 2) == 0)   // Check even number
        {
            sum += temp->Data;
        }

        temp = temp->Next;
    }

    return sum;
}
