/*
Problem Statement:
Write a program which returns the largest element from a 
singly linear linked list.

Example:
Input Linked List : |10|->|20|->|320|->|240|
Output            : 320
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

int Maximum(PNODE Head)
{
    int max = Head->Data;   // assume first node is maximum

    while(Head != NULL)
    {
        if(Head->Data > max)
        {
            max = Head->Data;
        }
        Head = Head->Next;
    }
    return max;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int result = Maximum(First);
    printf("Maximum element = %d\n", result);

    return 0;
}
