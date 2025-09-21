#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int Count;

        SinglyLL()
        {
            first = NULL;
            Count = 0;
        }

        void InsertFirst(int iNO);
        void InsertLast(int iNo);
        void InsertAtLoc(int iNo, int iLoc);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtLoc(int iLoc);
        void Display();
};
int main()
{
    SinglyLL obj;
    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.Display();
    return 0;
}