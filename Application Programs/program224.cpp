#include<iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node * next;
} NODE,*PNODE,**PPNODE;
class SinglyLL
{
    private:
        PNODE first;
        int Count;
    public:
        SinglyLL();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void Display();
        int getCount();
        void DeleteFirst();
        void DeleteLast();
};
/*
ReturnValue ClassName :: FunctionName()
{ ------ }
 :: Socpe Resolution Operator
*/
SinglyLL :: SinglyLL()
{
    cout<<"Inside Constructor"<<endl;
    first = NULL;
    Count = 0;
}
void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    if(first==NULL) //LL is Empty // count==0
    {
        first = newn;
    } else {
        newn->next=first;
        first = newn;
    }
    Count++;
}
void SinglyLL :: InsertLast(int iNo){
    PNODE newn = NULL;
    PNODE temp = first;

    newn = new NODE;
    newn->data=iNo;
    newn->next=NULL;

    if(first==NULL) //LL is Empty // count==0
    {
        first = newn;
    } else {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    Count++;
}
void SinglyLL :: Display() {
    PNODE temp = first;
    cout<<"Elements in the Linked List are :"<<endl;
    while(temp!=NULL)//type1
    {
        cout<<"|"<<temp->data<<"| ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int SinglyLL :: getCount()
        {
            return Count;
        }


void SinglyLL :: DeleteFirst(){
    if(first==NULL)//LL is Empty
    {
        return;
    } else if(first->next==NULL)//LL with single node
    {
     delete first;
     first = NULL;   
    } else { //LL with multiple nodes
        PNODE temp = first;
        first = first->next;
        delete temp;
    }
    Count--;
}
void SinglyLL :: DeleteLast(){
     if(first==NULL)//LL is Empty
    {
        return;
    } else if(first->next==NULL)//LL with single node
    {
        delete first;
        first = NULL;
    } else { //LL with multiple nodes
        PNODE temp = first;
        while(temp->next->next)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    Count--;
}       

int main()
{
    SinglyLL obj;
    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.Display();
    cout<<"Number of nodes in the Linked List are :"<<obj.getCount()<<endl;
    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);
    obj.Display();
    cout<<"Number of nodes in the Linked List are :"<<obj.getCount()<<endl;
    obj.DeleteFirst();
    obj.DeleteLast();
    obj.Display();
    cout<<"Number of nodes in the Linked List are :"<<obj.getCount()<<endl;
    return 0;
}