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

    }

    void InsertLast(int iNo)
    {

    }

    void Display()
    {

    }
};

int main()
{
    SinglyLL obj;
    obj.InsertFirst(10);
    obj.Display();

    cout<<"Number of node in the Linked List are :: "<<obj.Count<<endl;
    return 0;
}