/*
   Problem Statement:
   Write a program which displays all elements which are prime 
   numbers from a singly linear linked list.

   Function Prototype:
   void DisplayPrime(PNODE Head);

   Example:
   Input Linked List : 11 -> 20 -> 17 -> 41 -> 22 -> 89
   Output            : 11 17 41 89
*/

void DisplayPrime(PNODE Head)
{
    PNODE temp = Head;

    while(temp != NULL)
    {
        int num = temp->Data;
        int flag = 1;   // Assume prime

        if(num <= 1)
        {
            flag = 0;
        }
        else
        {
            for(int i = 2; i <= num/2; i++)
            {
                if(num % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag == 1)
        {
            printf("%d ", num);
        }

        temp = temp->Next;
    }
}
