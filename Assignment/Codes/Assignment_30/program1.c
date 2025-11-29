/* 
   Problem Statement:
   Write a program which displays all elements which are perfect 
   numbers from a singly linear linked list.

   Function Prototype:
   void DisplayPerfect(PNODE Head);

   Example:
   Input Linked List : 11 -> 28 -> 17 -> 41 -> 6 -> 89
   Output            : 28 6
*/

void DisplayPerfect(PNODE Head)
{
    PNODE temp = Head;

    while(temp != NULL)
    {
        int num = temp->Data;
        int sum = 0;

        // Calculate sum of proper divisors of num
        for(int i = 1; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                sum += i;
            }
        }

        // Check if perfect number
        if(sum == num)
        {
            printf("%d ", num);
        }

        temp = temp->Next;
    }
}
