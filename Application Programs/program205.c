#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} NODE, *PNODE,**PPNODE;

//call by address
void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));
    newn -> data =iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head==NULL) && (*Tail ==NULL)) //LL is empty
    {
        *Head = newn;
        *Tail =newn;
    } else { //LL is notEmpty
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;
    }
    (*Tail)->next =*Head;
    (*Head)->prev =*Tail;
}
void InsertLast(PPNODE Head, PPNODE Tail, int iNo){
   PNODE newn = NULL;
    newn = (PNODE) malloc(sizeof(NODE));
    newn -> data =iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head==NULL) && (*Tail ==NULL)) //LL is empty
    {
        *Head = newn;
        *Tail =newn;
    } else { //LL is not empty
        newn->prev = *Tail;
        (*Tail)->next = newn;
        *Tail = newn; 
    }
    (*Tail)->next =*Head;
    (*Head)->prev =*Tail;
}
void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo,int iLoc){}
void DeleteFirst(PPNODE Head,PPNODE Tail){}
void DeleteLast(PPNODE Head,PPNODE Tail){}
void DeleteAtLoc(PPNODE Head,PPNODE Tail, int iLoc){}
//call by value
void display(PNODE Head,PNODE Tail) {
    if(Head!=NULL && Tail!=NULL)
    {
        do
        {
            printf("| %d | <=>",Head->data);
            Head=Head->next;
        } while(Head!=Tail->next);
        printf("First Node address.");
        
    }
}
void count(PNODE Head,PNODE Tail){}

int main()
{
    PNODE First =NULL;
    PNODE Last = NULL;
    InsertFirst(&First,&Last,30);
    InsertFirst(&First,&Last,20);
    InsertFirst(&First,&Last,10);
    InsertLast(&First,&Last,40);
    InsertLast(&First,&Last,50);
    InsertLast(&First,&Last,60);
    display(First,Last);
    return 0;
}
