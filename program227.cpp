// Doubly Linear LL template

#include<iostream>
using namespace std;

typedef struct node 
{
    int data;
    struct node * next;
    struct node * prev;
}NODE, *PNODE;

class DoublyLL
{
    public:
    PNODE First;
    int Count;

    DoublyLL();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtLoc(int iNo, int iLoc);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtLoc(int iLoc);

    void Display();
    int getCount();
};

    DoublyLL :: DoublyLL()
    {
        First = NULL;
        Count = 0;
    }

    void DoublyLL :: InsertFirst(int iNo){};
    void DoublyLL :: InsertLast(int iNo){};
    void DoublyLL :: InsertAtLoc(int iNo, int iLoc){};

    void DoublyLL :: DeleteFirst(){};
    void DoublyLL :: DeleteLast(){};
    void DoublyLL :: DeleteAtLoc(int iLoc){};

    void DoublyLL :: Display(){};
    int  DoublyLL :: getCount(){
        return Count;
    };


int main()
{
    DoublyLL obj1;
    return 0;
}