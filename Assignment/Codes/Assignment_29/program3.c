/*
Problem Statement:
Write a program which returns the addition of all the elements 
from a singly linear linked list.

Example:
Input Linked List : |10|->|20|->|30|->|400|
Output            : 460
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

int Addition(PNODE Head)
{
    int sum = 0;

    while(Head != NULL)
    {
        sum = sum + Head->Data;
        Head = Head->Next;
    }
    return sum;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 400);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    int result = Addition(First);
    printf("Addition of all elements = %d\n", result);

    return 0;
}
