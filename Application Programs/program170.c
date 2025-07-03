#include<stdio.h>
#include<stdlib.h>

// structure declaration
struct node
{
    int data; // 4 bytes
    struct node *next; // 8 bytes (on a 64-bit system)
};

// Typedefs for convenience
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(struct node ** Head, int iNo)
{
    // Step1 :: allocate memory dynamically for node
    PNODE newn = NULL; // Create a new node pointer
    newn = (PNODE)malloc(sizeof(NODE)); // Allocate memory for the new node

    // Check if memory allocation was successful
    if (newn == NULL)
    {
        printf("Memory allocation failed!\n");
        return;
    }
    
    // Step2 :: initialize the node
    newn->data = iNo; // Assign data to the new node
    newn->next = NULL; // Initialize the next pointer to NULL
    
    // Step3 :: check whether the linked list is empty or not and insert the node
    if(*Head == NULL)
    {
        // LL is empty, so the new node becomes the first node
        *Head = newn;
    } else {
        // LL is not empty, so new node points to the current first node
        newn->next = *Head;
        // And the new node becomes the new first node
        *Head = newn;
    }
}

// Function to display the linked list (added for testing)
void Display(PNODE Head)
{
    printf("Elements of the linked list are:\n");
    while(Head != NULL)
    {
        printf("|%d|-> ", Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node * First = NULL; // Initialize the Head pointer to NULL

    printf("Inserting 10 at the beginning:\n");
    InsertFirst(&First, 10);
    Display(First);

    printf("\nInserting 20 at the beginning:\n");
    InsertFirst(&First, 20);
    Display(First);

    printf("\nInserting 30 at the beginning:\n");
    InsertFirst(&First, 30);
    Display(First);
    
    // In a real application, you'd also free the allocated memory
    // before the program exits to prevent memory leaks.
    // For simplicity, it's omitted here, but crucial for larger programs.

    return 0;
}