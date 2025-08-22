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
    
}
void InsertLast(PPNODE Head, PPNODE Tail, int iNo){}
void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo,int iLoc){}
void DeleteFirst(PPNODE Head,PPNODE Tail){}
void DeleteLast(PPNODE Head,PPNODE Tail){}
void DeleteAtLoc(PPNODE Head,PPNODE Tail, int iLoc){}
//call by value
void display(PNODE Head,PNODE Tail){}
void count(PNODE Head,PNODE Tail){}

int main()
{
    PNODE First =NULL;
    PNODE Last = NULL;
    return 0;
}
