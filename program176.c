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
    //Step1: allocate memory dynamically for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(struct node));

    //Step2: initiale the node
    newn->data=iNo;
    newn->next=NULL;

    //Step3: check whether LL is empty or not
    if(*Head==NULL) 
    {
    //LL is empty
    *Head=newn;
    } else {
        //LL is having at least one node in it
        newn->next =*Head;
        *Head = newn;
    }

}

void display(PNODE Head)
{
    printf("Linkedlist data elements are:\n");
    while(Head!=NULL)
    {
        printf("| %d |->",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}
int count(PNODE Head)
{   int iCnt =0;
    while(Head!=NULL)
    {
       Head = Head->next;
       iCnt++;
    }
    return iCnt;
}

void InsertLast(PPNODE Head, int iNo)
{
    
    //temporary pointer for LL travelling
    PNODE Temp = *Head;
    PNODE newn = (PNODE)malloc(sizeof(NODE));//memory allocation

    //node initialization
    newn->data=iNo;
    newn->next = NULL;
     
    //Step3: check whether LL is empty or not
    if(*Head==NULL) 
    {
    //LL is empty
    *Head=newn;
    }
    else {
        //if ll is not empty, 
        while(Temp->next !=NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }

}
void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head ==NULL) // Case 1: LL is empty
    {
        return;
    } else if((*Head)->next==NULL)//Case 2: LL contains at least single node in it.
    {
        free(*Head);
        *Head = NULL;
    } else { 
        //Case 3: LL contains more than one nodes in it.
        *Head = (*Head)->next;
        free(Temp);
    }
}
void DeleteLast(PPNODE Head)
{
     PNODE Temp = *Head;
    if(*Head ==NULL) // Case 1: LL is empty
    {
        return;
    } else if((*Head)->next==NULL)//Case 2: LL contains at least single node in it.
    {
        free(*Head);
        *Head = NULL;
    } else { 
        //Case 3: LL contains more than one nodes in it.
        while(Temp->next->next!=NULL) //check if second last nodes next has NULL value
        {
            Temp = Temp->next;
        }
        free(Temp->next);//deallocate the memory of last node
        Temp->next=NULL;
    }
}
int main()
{
    struct node * First = NULL;
    InsertFirst(&First,10);
    InsertFirst(&First,20);
    InsertFirst(&First,30);
    InsertFirst(&First,40);
    InsertFirst(&First,50);
    InsertLast(&First,100);

    display(First);
    int iRet = count(First);
    printf("Linkedlist has %d nodes\n",iRet);
    
    DeleteFirst(&First);
    DeleteLast(&First);
    
    display(First);
    iRet = count(First);
    printf("Linkedlist has %d nodes\n",iRet);
    return 0;
}