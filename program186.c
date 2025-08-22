#include<stdio.h>
#include<stdlib.h>
//structure declaration
struct node
{
    int data;
    struct node *next;
    struct node *previous; //#

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int iNo){
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data=iNo;
    newn->next = NULL;
    newn->previous =NULL; //#

    if(*Head==NULL) //LL is Empty
    {
        *Head = newn;
    }
    else {
        //LL is not empty
        (*Head)->previous = newn; //#
        newn->next =*Head;
        *Head = newn;
    }



}
void InsertLast(PPNODE Head, int iNo){
    PNODE newn = NULL;
    PNODE Temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data=iNo;
    newn->next = NULL;
    newn->previous =NULL; //#

    if(*Head==NULL) //LL is Empty
    {
        *Head = newn;
    }
    else 
    {
        //LL is not Empty
        while(Temp->next!=NULL)
        {
            Temp = Temp->next;
        }
        newn->previous=Temp; //#
        Temp->next = newn;
    }

}


void DeleteFirst(PPNODE Head){
    if(*Head==NULL) //LL is empty
    {
        return;
    } else if(((*Head)->next==NULL)&&((*Head)->previous==NULL))
    {
        //LL contains only one node
        free(*Head);
        *Head = NULL;
    } else {
        *Head = (*Head)->next;
        free((*Head)->previous);//#
        (*Head)->previous=NULL;//#
    }
}
void DeleteLast(PPNODE Head){
    PNODE Temp = *Head;
    if(*Head==NULL) //LL is empty
    {
        return;
    } else if(((*Head)->next==NULL)&&((*Head)->previous==NULL))
    {
        //LL contains only one node
        free(*Head);
        *Head = NULL;
    } else {
    while (Temp->next->next != NULL)
    {
        Temp = Temp->next;
    }
    free(Temp->next);
    Temp->next = NULL;
    }
}
void DeleteAtLoc(PPNODE Head,int iLoc){}

void display(PNODE Head){
    printf("content of linnkedlist are:\n");
    printf("NULL<=>");
    while(Head!=NULL)
    {
        printf("|%d|<=>",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}
int count (PNODE Head){
    int iCnt = 0;
    while(Head!=NULL)
    {
        Head = Head->next;
        iCnt++;
    }
    return iCnt;
}

void InsertAtLoc(PPNODE Head, int iNo, int iLoc)
{
    int size =0, i=0;
    size =count(*Head);//6

    PNODE newn = NULL;
    PNODE temp = *Head;

    if((iLoc<1)||(iLoc>(size+1))) //-1,8
    {
        printf("Invalid index/position");
        return;
    } 
    
    if(iLoc==1)
    {
        InsertFirst(Head,iNo);
    }
    else if(iLoc==(size+1))//7
    {
        InsertLast(Head,iNo);
    } else { //2,5,4
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data= iNo;
        newn->next =NULL;
        newn->previous =NULL;//#

        for(i=1;i<iLoc-1;i++){
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->previous = newn; //#
        temp->next=newn;
        newn->previous = temp; //#

    }
}
int main()
{
    PNODE First = NULL;
    InsertFirst(&First,60);
    InsertFirst(&First,50);
    InsertLast(&First,40);
    InsertAtLoc(&First,100,1);
    InsertAtLoc(&First,100,5);
    InsertAtLoc(&First,45,3);
    display(First);
    int iRet = count(First);
    printf("LL has %d nodes in it \n",iRet);
    return 0;
}