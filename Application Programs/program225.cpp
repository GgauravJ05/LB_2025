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

    void InsertAtLoc(int iNo, int iLoc);

    void DeleteAtLoc(int iLoc);
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

    void SinglyLL :: InsertAtLoc(int iNo, int iLoc)
    {
        if((iLoc<1) || (iLoc>Count+1))
        {
            return;
        } else if(iLoc == Count+1) {
            InsertLast(iNo);
        } else {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iNo;
            newn->next = NULL;

            PNODE temp = First;
            int i = 0;
            for(i = 1; i<iLoc-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next = newn;
            Count++;
        }
    }

    void SinglyLL :: DeleteAtLoc(int iLoc)
    {
        if((iLoc<1) || (iLoc>Count))
        {
            return;
        } 
        if(iLoc == 1)
        {
            DeleteFirst();
        } else if(iLoc == Count){
            DeleteLast();
        } else {
            PNODE temp = First;
            int i = 0;
            for(i = 1; i<iLoc-1; i++)
            {
                temp = temp->next;
            }
            PNODE targetdNode = temp->next;
            temp->next = temp->next->next;
            delete targetdNode;
            Count--;
        }
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
    
    obj.InsertAtLoc(100,5);
    obj.InsertAtLoc(90,5);
    obj.DeleteAtLoc(5);
    obj.Display();
    cout<<"Number of node in the Linked List are :: "<<obj.GetCount()<<endl;
    
    return 0;
}
