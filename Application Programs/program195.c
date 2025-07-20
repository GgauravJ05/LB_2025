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

    if ((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
        (*Tail)->next = *Head; // Maintain circular link
    }

}

void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if ((*Head == NULL) && (*Tail == NULL)) // LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head; // Circular link
    }
    else
    {
        (*Tail)->next = newn;
         *Tail = newn;
        (*Tail)->next = *Head; // Maintain circular link
    }
}

void InsertAtLoc(PPNODE Head,int iNo, int iLoc)
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
    printf("Elements in the Linked List are: ");
    if ((Head != NULL) && (Tail != NULL))
    {
        do
        {
            printf("| %d | -> ", Head->data);
            Head = Head->next;
        } while (Head != Tail->next);
        printf("First node Address\n");
    }
    else
    {
        printf("List is empty.\n");
    }
}

int count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if ((Head != NULL) && (Tail != NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head != Tail->next);
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL; //#

    InsertFirst(&First, &Last, 10);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 30);

    InsertFirst(&First, &Last, 40);
    InsertFirst(&First, &Last, 50);

    display(First, Last);

    printf("Total nodes in LL are :: %d \n", count(First, Last));
    return 0;
}
