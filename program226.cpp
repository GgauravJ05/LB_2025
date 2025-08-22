// Singly Circular LL template

#include<iostream>
using namespace std;

typedef struct node 
{
    int data;
    struct node * next;
}NODE, *PNODE;

class SinglyCL
{
    public:
    PNODE First;
    PNODE Last;
    int Count;

    SinglyCL();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtLoc(int iNo, int iLoc);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtLoc(int iLoc);

    void Display();
    int getCount();
};

    SinglyCL :: SinglyCL()
    {
        First = NULL;
        Last = NULL;
        Count = 0;
    }

    void SinglyCL :: InsertFirst(int iNo){};
    void SinglyCL :: InsertLast(int iNo){};
    void SinglyCL :: InsertAtLoc(int iNo, int iLoc){};

    void SinglyCL :: DeleteFirst(){};
    void SinglyCL :: DeleteLast(){};
    void SinglyCL :: DeleteAtLoc(int iLoc){};

    void SinglyCL :: Display(){};
    int  SinglyCL :: getCount(){
        return Count;
    };


int main()
{
    SinglyCL obj1;
    return 0;
}