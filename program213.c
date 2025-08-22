#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node * next;
} NODE, *PNODE, **PPNODE;

//void InsertFirst(PPNODE Head, int iNo){}

void Push(PPNODE Head, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL) // LL is empty
    {
        *Head = newn;
    } else{
        newn -> next = *Head;
        *Head = newn;
    }
}

// void DeleteFirst(PPNODE Head)

int POP(PPNODE Head)
{
    return 0;
}

void display(PNODE Head)
{
    printf("ELEMENTS IN THE STACK ARE :: \n");

    while(Head!=NULL)
    {
        printf("|%d| \n", Head->data);
        Head = Head->next;
    }
}

int main()
{
    PNODE First = NULL;
    Push(&First, 10);
    Push(&First, 20);
    Push(&First, 30);
    Push(&First, 40);
    Push(&First, 50);
    display(First);
    return 0;
}
