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

void InsertFirst(struct node ** Head, int iNo)
{
    // Step1 :: allocate memory dynamically for node
    PNODE newn = NULL; // Create a new node
    newn = malloc(sizeof(struct node)); // Allocate memory for the new node
    
    // Step2 :: initialize the node
    newn->data = iNo; // Assign data to the new node
    newn->next = NULL; // Initialize the next pointer to NULL
    
    // Step3 :: check wheter the linked list is empty or not
    if(*Head == NULL)
    {
        // LL is empty
        *Head = newn;

    }else{
        // LL is having atleast one node in it
        newn->next = *Head;
        *Head = newn;
    }

}

int main()
{
    struct node * First = NULL;
    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    return 0;
}