#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} NODE,* PNODE,** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        newn->next = (*Head)->next;
        (*Head)->next = newn;
        *Head = newn; // Update head to new node
        (*Tail)->next = *Head; // Maintain circular link
    }

}

void InserLast(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL)) //LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        *Tail = newn;
        (*Head)->next = newn;
        (*Tail)->next = *Head; // compulsory add this statement
    }
}

void InserAtLoc(PPNODE Head,int iNo, int iLoc)
{

}

void DeleteFirst(PPNODE Head)
{

}

void DeleteLast(PPNODE Head)
{

}

void DeleteAtLoc(PPNODE Head, int iLoc)
{

}

void display(PNODE Head, PNODE Tail)
{
    printf("Elements in the Linked List are");
    if(Head != NULL && Tail != NULL)
    {
        do
        {
            printf("| %d | -> ", Head->data);
            Head = Head -> next;
        } while (Head != Tail->next);
        printf("First node address\n");
        
    }
}

int count(PNODE Head)
{
    return 0;
}

int main()
{
    PNODE First = NULL;
    PNODE Second = NULL; //#
    return 0;
}
