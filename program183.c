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
void InsertAtLoc(PPNODE Head, int iNo, int iLoc){}

void DeleteFirst(PPNODE Head){}
void DeleteLast(PPNODE Head){}
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


int main()
{
    PNODE First = NULL;
    InsertFirst(&First,60);
    InsertFirst(&First,50);
    display(First);
    InsertLast(&First,70);
    display(First);
    int iRet = count(First);
    printf("LL has %d nodes in it \n",iRet);
    return 0;
}