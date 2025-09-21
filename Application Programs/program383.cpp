#include<iostream>
using namespace std;
template<class T>
struct node
{
    T data;
    struct node * next;
};

template<class T>
class SinglyLL
{
    private:
        struct node<T> * first;
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
    struct node<T> * newn = NULL;
    newn = new struct node<T>;
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
    struct node<T> * newn = NULL;
    struct node<T> * temp = first;

    newn = new struct node<T>;
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
    struct node<T> * temp = first;
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
        struct node<T> * temp = first;
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
        struct node<T> * temp = first;
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
        struct node<T> * newn = NULL;
        newn = new struct node<T>;
        newn->data = iNo;
        newn->next = NULL;

        struct node<T> * temp = first;
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
        struct node<T> * temp = first;
        int i=0;
        for(i=1;i<iLoc-1;i++)
        {
            temp = temp->next;
        }

        struct node<T> * targatedNode = temp->next;
        temp->next = temp->next->next;
        delete targatedNode;
        Count--;
    }
}

int main()
{
    
    cout<<"Integer linkedlist"<<endl;
    SinglyLL<int> obj;
    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.Display();
    cout<<"Number of nodes in the Linked List are :"<<obj.getCount()<<endl;

    cout<<"float linkedlist"<<endl;
    SinglyLL<float> fobj;
    fobj.InsertLast(40.5);
    fobj.InsertLast(50.5);
    fobj.InsertLast(60.5);
    fobj.Display();
    cout<<"Number of nodes in the Linked List are :"<<obj.getCount()<<endl;

    cout<<"character linkedlist"<<endl;
    SinglyLL<char> cobj;
    cobj.InsertLast('A');
    cobj.InsertLast('B');
    cobj.InsertLast('C');
    cobj.Display();
    cout<<"Number of nodes in the Linked List are :"<<obj.getCount()<<endl;
  
}