#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int size;
    Array(int length)
    {
        size=length;
        Arr = new int[size];
    }

    ~Array()
    {
        delete []Arr;
    }

    void accept()
    {
        cout<<"Enter data elements:"<<endl;
        for (int icnt = 0; icnt<size; icnt++)
        {
            cin>>Arr[icnt];
        }
    }

    void display()
    {
        cout<<"Elements in the array are:"<<endl;
        for (int icnt = 0; icnt<size; icnt++)
        {
            cout<<Arr[icnt]<<"\t";
        }
        cout<<endl;
    }
};

int main()
{
    Array obj(5);
    obj.accept();
    obj.display();
    return 0;
}