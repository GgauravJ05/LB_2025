/*
Problem Statement:
Write a program which returns the smallest element from a 
singly linear linked list.

Example:
Input Linked List : |110|->|230|->|10|->|240|->|640|
Output            : 10
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
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

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

int Minimum(PNODE Head)
{
    int min = Head->Data;         // assume first node is minimum

    while(Head != NULL)
    {
        if(Head->Data < min)
        {
            min = Head->Data;     // update minimum
        }
        Head = Head->Next;
    }

    return min;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 10);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    int result = Minimum(First);
    printf("Minimum element = %d\n", result);

    return 0;
}
