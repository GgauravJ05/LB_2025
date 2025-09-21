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
            cout<<"Inside Constructor"<<endl;
            first = NULL;
            Count = 0;
        }

        void InsertFirst(int iNO){}
        void InsertLast(int iNo){}
        void Display(){}
};
int main()
{
    SinglyLL obj;
    obj.InsertFirst(10);
    obj.InsertFirst(20);
    obj.InsertFirst(30);
    obj.Display();
    cout<<"Number of nodes in the Linked List are :"<<obj.Count<<endl;
    return 0;
}