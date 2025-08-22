#include<stdio.h>
#include<stdlib.h>
//structure declaration
struct node
{
    int data;//4 bytes
    struct node *next; //8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    struct node * newn = NULL;
    newn = malloc(sizeof(struct node));

    newn->data=iNo;
    newn->next=NULL;
}

int main()
{
    struct node * First = NULL;
    InsertFirst(&First,10);
    return 0;
}