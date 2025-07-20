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


void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    
    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        (*Tail)->next = (*Head)->next;  // Tail points to second node
        free(*Head);                    // Free the first node
        *Head = (*Tail)->next;          // Move head to second node
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

    if(*Head == NULL && *Tail == NULL)
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else // LL with multiple nodes
    {
        while (temp->next != *Tail)
        {
            temp = temp->next;
        }

        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
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

void InsertAtLoc(PPNODE Head,PPNODE Tail,int iNo, int iLoc)
{
    int size, i = 0;
    size = count(*Head, *Tail);
    PNODE newn = NULL;
    PNODE Temp = *Head;

    if((iLoc<1) && (iLoc>(size+1)))
    {
        printf("Invalid Location \n");
        return;
    }

    if(iLoc == 1)
    {
        InsertFirst(Head, Tail, iNo);
    } else if(iLoc == (size+1))
    {
        InsertLast(Head, Tail, iNo);
    } else {
        newn = (PNODE)malloc(sizeof(NODE));
        newn -> data = iNo;
        newn -> next = NULL;

        for(i = 1; i<iLoc; i++)
        {
            Temp = Temp -> next;
        }
        newn -> next = Temp->next;
        Temp->next = newn;
    }

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL; //#

    InsertFirst(&First, &Last, 30);
    InsertFirst(&First, &Last, 20);
    InsertFirst(&First, &Last, 10);
    InsertFirst(&First, &Last, 40);
    InsertFirst(&First, &Last, 50);
    InsertFirst(&First, &Last, 60);

    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));

    DeleteFirst(&First, &Last);
    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));

    DeleteLast(&First, &Last);
    InsertAtLoc(&First, &Last, 100, 3);
    display(First, Last);
    printf("Total nodes in LL are :: %d \n", count(First, Last));
    return 0;
}
