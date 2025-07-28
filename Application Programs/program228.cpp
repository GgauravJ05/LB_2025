// Doubly Circular LL template

#include<iostream>
using namespace std;

typedef struct node 
{
    int data;
    struct node * next;
    struct node * prev;
}NODE, *PNODE;

class DoublyCL
{
    public:
    PNODE First;
    PNODE Last;
    int Count;

    DoublyCL();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtLoc(int iNo, int iLoc);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtLoc(int iLoc);

    void Display();
    int getCount();
};

    DoublyCL :: DoublyCL()
    {
        First = NULL;
        Last = NULL;
        Count = 0;
    }

    void DoublyCL :: InsertFirst(int iNo){};
    void DoublyCL :: InsertLast(int iNo){};
    void DoublyCL :: InsertAtLoc(int iNo, int iLoc){};

    void DoublyCL :: DeleteFirst(){};
    void DoublyCL :: DeleteLast(){};
    void DoublyCL :: DeleteAtLoc(int iLoc){};

    void DoublyCL :: Display(){};
    int  DoublyCL :: getCount(){
        return Count;
    };


int main()
{
    DoublyCL obj1;
    return 0;
}