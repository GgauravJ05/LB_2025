#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node  *next;
} NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,PPNODE Tail,int iNo){
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
void InsertLast(PPNODE Head,PPNODE Tail,int iNo){
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
        (*Tail)->next = newn;
        *Tail = newn;   
        (*Tail)->next = *Head;// compulsory add this statement
    }
}


void DeleteFirst(PPNODE Head,PPNODE Tail) { 
    if((*Head ==NULL && *Tail==NULL)) // LL Empty
    {
        return;
    } else if (*Head==*Tail) //LL with single node
    {
        free(*Head);
        *Head =NULL;
        *Tail=NULL;
    } else { //LL with multipe nodes
        *Head = (*Head)->next;
        free ((*Tail)->next);
        (*Tail)->next =*Head;
    }
}
void DeleteLast(PPNODE Head,PPNODE Tail) {
    PNODE Temp = *Head;
  if((*Head ==NULL && *Tail==NULL)) // LL Empty
    {
        return;
    } else if (*Head==*Tail) //LL with single node
    {
        free(*Head);
        *Head =NULL;
        *Tail=NULL;
    } else 
    { //LL with multipe nodes
        while(Temp->next!=*Tail)
            {
                Temp =Temp->next;
            }
            free(*Tail);
            *Tail = Temp;
            (*Tail)->next = *Head;
    }
}
void DeleteAtLoc(PPNODE Head,PPNODE Tail,int iLoc){}

void display(PNODE Head,PNODE Tail) {
printf("Elements in the linkedlist are :\n");
if((Head!=NULL) && (Tail!=NULL))
{
    do
    {
        printf("| %d | ->",Head->data);
        Head = Head->next;
    } while (Head!=Tail->next);
    printf("First Node Address\n");
}
}

int count (PNODE Head,PNODE Tail)
{
    int iCnt =0;
    if((Head!=NULL) && (Tail!=NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        } while (Head!=Tail->next);
    }   
    return iCnt;
}
void InsertAtLoc(PPNODE Head,PPNODE Tail, int iNo, int iLoc) { 
    int size, i =0;
    size = count(*Head, *Tail);//6
    PNODE newn = NULL;
    PNODE Temp =*Head;

    if((iLoc<1) && (iLoc>(size+1)))// -1,8,11,0
    {
        printf("Invalid location \n");
        return;
    } 

    if(iLoc ==1)
    {
        InsertFirst(Head, Tail,iNo);
    } else if (iLoc == (size+1)) //7
    {
        InsertLast(Head, Tail, iNo);
    } else { //2,3,4,5
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = iNo;
        newn->next =NULL;

        for(i=1;i<iLoc-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next =newn;
    }

}
int main()
{
    PNODE First = NULL;
    PNODE Last = NULL; // #
    InsertFirst(&First,&Last,30);
    InsertFirst(&First,&Last,20);
    InsertFirst(&First,&Last,10);
    InsertLast(&First,&Last,40);
    InsertLast(&First,&Last,50);
    InsertLast(&First,&Last,60);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    DeleteFirst(&First,&Last);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    DeleteLast(&First,&Last);
    InsertAtLoc(&First,&Last,100,3);
    display(First,Last);
    printf("Total nodes in LL are : %d \n",count(First,Last));
    return 0;
}