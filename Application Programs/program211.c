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

void DeleteFirst(PPNODE Head,PPNODE Tail) {
    if ((*Head ==NULL) && (*Tail =NULL)) //LL is Empty
    {
        return;
    } else if (*Head ==*Tail)//LL with single node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    } else //LL with miltiple nodes
    {
        *Head =(*Head)->next;
        free((*Head)->prev); // free((*Tail)->next)
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
    
}
void DeleteLast(PPNODE Head,PPNODE Tail){
     if ((*Head ==NULL) && (*Tail =NULL)) //LL is Empty
    {
        return;
    } else if (*Head ==*Tail)//LL with single node
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    } else //LL with miltiple nodes
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);// free((*Head)->prev)
        (*Head)->prev = *Tail;
        (*Tail)->next = *Head;
    }
}

//call by value
void display(PNODE Head,PNODE Tail) {
    if(Head!=NULL && Tail!=NULL)
    {
        do
        {
            printf("| %d | <=>",Head->data);
            Head=Head->next;
        } while(Head!=Tail->next);
        printf("First Node address.\n");
        
    }
}
int count(PNODE Head,PNODE Tail) {
    int iCnt =0;
    if(Head!=NULL && Tail!=NULL)
    {
        do
        {
            iCnt++;
            Head=Head->next;
        } while(Head!=Tail->next);
    }
    return iCnt;
}

void InsertAtLoc(PPNODE Head, PPNODE Tail, int iNo,int iLoc) {
int size =0 , i=0;
PNODE newn = NULL;
PNODE temp = *Head;

size = count(*Head,*Tail);//6
if((iLoc<1) || (iLoc>size+1))//-1,0,8,9
{
    printf("Invalid Position\n");
    return;
}

if(iLoc==1)
{
    InsertFirst(Head,Tail,iNo);
} else if(iLoc==size+1)//7
{
    InsertLast(Head,Tail,iNo);
} else { //2,3,4,5
    newn = (PNODE) malloc(sizeof(NODE));
    newn->data =iNo;
    newn->next = NULL;
    newn->prev = NULL;

    for (i=1;i<iLoc-1;i++)
    {
        temp = temp->next;
    }
    newn->next=temp->next;
    temp->next->prev = newn;
    temp->next = newn;
    newn->prev = temp;
}
}
void DeleteAtLoc(PPNODE Head,PPNODE Tail, int iLoc) {
    int size =0 , i=0;
    PNODE temp = *Head;
    size = count(*Head,*Tail);//6

    if((iLoc<1)||(iLoc>size))//7
    {
        printf("Invalid Location\n");
        return;
    }

    if(iLoc==1)
    {
        DeleteFirst(Head,Tail);
    } else if(iLoc==size)//6
    {
        DeleteLast(Head,Tail);
    }
    else { //2,3,4,5
        for(i=1;i<iLoc-1;i++)
        {
            temp=temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev= temp;
    }
}
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
    DeleteFirst(&First,&Last);
    display(First,Last);
    DeleteLast(&First,&Last);

    InsertAtLoc(&First,&Last,45,5);
    display(First,Last);
    DeleteAtLoc(&First,&Last,5);
     display(First,Last);
    int iRet = count(First,Last);
    printf("\nLL contains %d nodes\n", iRet);
    return 0;
}
