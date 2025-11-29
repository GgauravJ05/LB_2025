/* 
Problem Statement:
Write a program which searches the first occurrence of a particular element 
from a singly linear linked list. The function should return the position at 
which the element is found.

Example:
Input Linked List : |10|->|20|->|30|->|40|->|50|->|60|->|70|
Input Element     : 30
Output            : 3
*/

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int SearchFirstOcc(PNODE Head, int no)
{
    int pos = 1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            return pos;
        }
        pos++;
        Head = Head->Next;
    }
    return -1;     // If element not found
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 70);
    InsertFirst(&First, 60);
    InsertFirst(&First, 50);
    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int result = SearchFirstOcc(First, 30);
    printf("First Occurrence = %d\n", result);

    return 0;
}
