#include<iostream>
using namespace std;

typedef struct node 
{
    int data;
    struct node * next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
    PNODE First;
    int Count;

    public:
    SinglyLL();

    void InsertFirst(int iNo);

    void InsertLast(int iNo);

    void Display();

    int GetCount(); // 👈 Public getter for private Count

    void DeleteFirst();
    void DeleteLast();
};

/* 
    ReturnValue ClassName :: FunctionName()
    {
        ---------
        :: Scope Resolution Operator
    }
*/

SinglyLL::SinglyLL()
    {
        cout<<"Inside Constructor"<<endl;
        First = NULL;
        Count = 0;
    }

    void SinglyLL :: InsertFirst(int iNo)
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

    void SinglyLL :: InsertLast(int iNo)
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


    void SinglyLL :: Display()
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

    int SinglyLL :: GetCount() // 👈 Public getter for private Count
    {
        return Count;
    }

    void SinglyLL :: DeleteFirst()
    {
        if(First == NULL) // LL is empty
        {
            return;
        } else if(First->next == NULL) { // LL with single node
            delete First;
            First = NULL;
        } else { // LL with multiple nodes
            PNODE temp = First;
            First = First->next;
            delete temp;
        }
        Count--;
    }

    void SinglyLL :: DeleteLast()
    {
        if(First == NULL) // LL is empty
        {
            return;
        } else if(First->next == NULL) { // LL with single node
            delete First;
            First = NULL;
        } else { // LL with multiple nodes
            PNODE temp = First;
            while(temp->next->next != NULL)
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
    cout<<"Number of node in the Linked List are :: "<<obj.GetCount()<<endl;

    obj.InsertLast(40);
    obj.InsertLast(50);
    obj.InsertLast(60);
    obj.Display();
    cout<<"Number of node in the Linked List are :: "<<obj.GetCount()<<endl;
    
    obj.DeleteFirst();
    obj.DeleteLast();
    obj.Display();
    cout<<"Number of node in the Linked List are :: "<<obj.GetCount()<<endl;
    
    return 0;
}
