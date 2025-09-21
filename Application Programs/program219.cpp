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

        void InsertFirst(int iNo)
        {
            PNODE newn = NULL;
            newn = new NODE;
            newn->data = iNo;
            newn->next = NULL;

            if(first==NULL) //LL is Empty // count==0
            {
                first = newn;
            } else {
                newn->next=first;
                first = newn;
            }
            Count++;
        }
        void InsertLast(int iNo){}
        void Display() {
            PNODE temp = first;
            cout<<"Elements in the Linked List are :"<<endl;
            while(temp!=NULL)//type1
            {
                cout<<"|"<<temp->data<<"| ->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
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