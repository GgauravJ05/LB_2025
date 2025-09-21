//Doubly Circular LL
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
    struct node * prev;
}NODE,*PNODE;

class DoublyCL
{
    public:
        PNODE first;
        PNODE last;
        int Count;

        DoublyCL();
        void InsertFirst(int iNO);
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
            first = NULL;
            last =NULL;
            Count = 0;
        }
void DoublyCL:: InsertFirst(int iNO){}
void DoublyCL:: InsertLast(int iNo){}
void DoublyCL:: InsertAtLoc(int iNo, int iLoc){}
void DoublyCL:: DeleteFirst(){}
void DoublyCL:: DeleteLast(){}
void DoublyCL:: DeleteAtLoc(int iLoc){}
void DoublyCL:: Display(){}
int DoublyCL:: getCount(){
    return Count;
}
int main()
{
    DoublyCL obj;
    return 0;
}