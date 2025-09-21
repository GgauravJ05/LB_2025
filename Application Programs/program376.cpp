#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int size;
        Array(int length);
        ~Array();
        void Accept();
        void Display();
};

Array :: Array(int length)
{
    size=length;
    Arr = new int[size];
}

Array :: ~Array()
{
    delete []Arr;
}

void Array :: Accept()
{
    cout<<"Enter data elements:"<<endl;
    for (int icnt = 0; icnt<size; icnt++)
    {
        cin>>Arr[icnt];
    }
}

void Array :: Display()
    {
        cout<<"Elements in the array are:"<<endl;
        for (int icnt = 0; icnt<size; icnt++)
        {
            cout<<Arr[icnt]<<"\t";
        }
        cout<<endl;
    }

int main()
{
    Array obj(5);
    obj.Accept();
    obj.Display();
    return 0;
}