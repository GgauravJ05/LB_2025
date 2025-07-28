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
        First = NULL;
        Count = 0;
    }

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtLoc(int iNo, int iLoc);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtLoc(int iLoc);

    void Display();
};

int main()
{
    SinglyLL obj1;
    obj1.InsertFirst(10);
    return 0;
}