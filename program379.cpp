#include<iostream>
using namespace std;
template<class T>
typedef struct node // while using generic templates we cannot use typedef
{
    T data;
    struct node * next;
} NODE,*PNODE,**PPNODE;

template<class T>
class SinglyLL
{
    private:
        PNODE first;
        int Count;
    public:
        SinglyLL();
        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void Display();
        int getCount();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtLoc(T iNo, int iLoc);
        void DeleteAtLoc(int iLoc);

};
/*
ReturnValue ClassName :: FunctionName()
{ ------ }
 :: Socpe Resolution Operator
*/
template<class T>
SinglyLL<T> :: SinglyLL()
{
    cout<<"Inside Constructor"<<endl;
    first = NULL;
    Count = 0;
}

template<class T>
void SinglyLL<T> :: InsertFirst(T iNo)
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

template<class T>
void SinglyLL<T> :: InsertLast(T iNo){
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

template<class T>
void SinglyLL<T> :: Display() {
    PNODE temp = first;
    cout<<"Elements in the Linked List are :"<<endl;
    while(temp!=NULL)//type1
    {
        cout<<"|"<<temp->data<<"| ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

template<class T>
int SinglyLL<T> :: getCount()
        {
            return Count;
        }


template<class T>
void SinglyLL<T> :: DeleteFirst(){
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

template<class T>
void SinglyLL<T> :: DeleteLast(){
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

template<class T>
void SinglyLL<T> :: InsertAtLoc(T iNo, int iLoc){
    //count =5 considered
    if((iLoc<1) ||(iLoc>Count+1) ) //iLoc =7
    {
        return;
    }
    if(iLoc==1)
    {
        InsertFirst(iNo);
    } else if (iLoc==Count+1)//iloc=6
    {
        InsertLast(iNo);
    } else { //iLoc = 2,3,4,5
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;

        PNODE temp = first;
        int i=0;
        for(i=1;i<iLoc-1;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        Count++;
   }
}

template<class T>
void SinglyLL<T> :: DeleteAtLoc(int iLoc) {
    //Count = 5
    if((iLoc<1)||(iLoc>Count))//iLoc=-1,0,6,7
    {
        return;
    }

    if(iLoc==1)
    {
        DeleteFirst();
    } else if (iLoc==Count)//iLoc=5
    {
        DeleteLast();
    } else {//iLoc = 2,3,4
        PNODE temp = first;
        int i=0;
        for(i=1;i<iLoc-1;i++)
        {
            temp = temp->next;
        }

        PNODE targatedNode = temp->next;
        temp->next = temp->next->next;
        delete targatedNode;
        Count--;
    }
}
int main()
{
    return 0;
}