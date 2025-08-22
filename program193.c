#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node  *next;
} NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PNODE Tail,int iNo){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if((*Head ==NULL) && (*Tail==NULL))//LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else { //LL contains 1 node in it
        newn->next=*Head;
        *Head = newn;
        (*Tail)->next=*Head;
    }
}
void InsertLast(PPNODE Head,PNODE Tail,int iNo){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if((*Head ==NULL) && (*Tail==NULL))//LL is empty
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    } else { //LL contains single node in it
        *Tail = newn;
        (*Head)->next = newn;
        (*Tail)->next = *Head;// compulsory add this statement
    }
}
void InsertAtLoc(PPNODE Head,PNODE Tail, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head,PNODE Tail){}
void DeleteLast(PPNODE Head,PNODE Tail){}
void DeleteAtLoc(PPNODE Head,PNODE Tail,int iLoc){}

void display(PNODE Head,PNODE Tail) {
printf("Elements in the linkedlist are :\n");
if((Head!=NULL) && (Tail!=NULL))
{
    do
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    } while (Head!=Tail->next);
    printf("First node address\n");
}
}
int count (PNODE Head,PNODE Tail){return 0;}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL; // #
    return 0;
}