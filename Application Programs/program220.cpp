#include<iostream>
using namespace std;

typedef struct node 
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    public:
    PNODE First;
    int Count;

    SinglyLL()
    {
        cout<<"Inside Constructor"<<endl;
        First = NULL;
        Count = 0;
    }

    void InsertFirst(int iNo)
    {
        PNODE newn = NULL;
        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;

        if(First == NULL) // LL is empty --> count = 0
        {
            First = newn;
        } else {
            newn->next = First;
            First = newn;
        }
        Count++;
    }

    void InsertLast(int iNo)
    {
        PNODE newn = NULL;
        PNODE temp = First;

        newn = new NODE;
        newn->data = iNo;
        newn->next = NULL;

        if(First == NULL) // LL is empty --> count = 0
        {
            First = newn;
        } else {
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newn;
        }
        Count++;
    }

    void Display()
    {
        PNODE temp = First;
        cout<<"Elements in the LINKED LIST are :: "<<endl;
        while(temp != NULL)
        {
            cout<<"|"<<temp->data<<"| -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    SinglyLL obj;
    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.Display();
    cout<<"Number of node in the Linked List are :: "<<obj.Count<<endl;

    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);
    obj.Display();
    cout<<"Number of node in the Linked List are :: "<<obj.Count<<endl;
    return 0;
}