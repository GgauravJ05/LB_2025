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
        int Addition();

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
int Array :: Addition()
{
   int sum=0; 
    for(int iCnt=0;iCnt<size;iCnt++)
    {
        sum = sum+Arr[iCnt];
    }
    return sum;
}    

int main()
{
    Array obj(5);
    obj.Accept();
    obj.Display();
    int add = obj.Addition();
    cout<<"Addition is:"<<add<<endl;
    return 0;
}