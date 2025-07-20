#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *previous;
}NODE, *PNODE, **PPNODE;

// CALL BY ADDRESS
void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{

}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{

}

void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo, int iLoc)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{

}

void DeleteLast(PPNODE Head, PPNODE Tail)
{

}

void DeleteAtLoc(PPNODE Head, PPNODE Tail, int iLoc)
{

}

// CALL BY VALUE
void Display(PNODE Head,  PNODE Tail)
{

}

void Count(PNODE Head,  PNODE Tail)
{

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}