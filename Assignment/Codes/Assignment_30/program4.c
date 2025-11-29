/*
   Problem Statement:
   Write a program which returns the second maximum element 
   from a singly linear linked list.

   Function Prototype:
   int SecMaximum(PNODE Head);

   Example:
   Input Linked List : 110 -> 230 -> 320 -> 240
   Output            : 240
*/

int SecMaximum(PNODE Head)
{
    if(Head == NULL || Head->Next == NULL)
    {
        return -1;   // Not enough elements
    }

    int max1 = Head->Data;       // Largest
    int max2 = -1;               // Second largest

    PNODE temp = Head->Next;

    while(temp != NULL)
    {
        int val = temp->Data;

        if(val > max1)
        {
            max2 = max1;   // previous max becomes second max
            max1 = val;    // new max
        }
        else if(val < max1 && (val > max2))
        {
            max2 = val;    // update second max
        }

        temp = temp->Next;
    }

    return max2;
}
