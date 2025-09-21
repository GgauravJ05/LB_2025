//Singly Circulat LL template
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node * next;
}NODE,*PNODE;

class SinglyCL
{
    public:
        PNODE first;
        PNODE last;
        int Count;

        SinglyCL();
        void InsertFirst(int iNO);
        void InsertLast(int iNo);
        void InsertAtLoc(int iNo, int iLoc);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtLoc(int iLoc);
        void Display();
        int getCount();
};
 SinglyCL:: SinglyCL()
        {
            first = NULL;
            last=NULL;
            Count = 0;
        }
void SinglyCL:: InsertFirst(int iNO){}
void SinglyCL:: InsertLast(int iNo){}
void SinglyCL:: InsertAtLoc(int iNo, int iLoc){}
void SinglyCL:: DeleteFirst(){}
void SinglyCL:: DeleteLast(){}
void SinglyCL:: DeleteAtLoc(int iLoc){}
void SinglyCL:: Display(){}
int SinglyCL:: getCount(){
    return Count;
}
int main()
{
    SinglyCL obj;
    return 0;
}