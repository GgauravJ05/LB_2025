#include<stdio.h>
#include<stdlib.h>

// structure declaration
struct node
{
    int data; // 4 bytes
    struct node *next; // 8 bytes
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL; // Create a new node
    newn = malloc(sizeof(NODE)); // Allocate memory for the new node
    
    newn->data = iNo; // Assign data to the new node
    newn->next = NULL; // Initialize the next pointer to NULL
    
}

int main()
{
    PNODE First = NULL;
    InsertFirst(&First, 10);
    return 0;
}