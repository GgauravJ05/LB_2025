#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *previous;
}NODE, *PNODE, **PPNODE;

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    return 0;
}