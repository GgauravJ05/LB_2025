#include<iostream>
using namespace std;

template<class T>
class Array
{
    public:
        T *Arr;
        int size;
        Array(int length);
        ~Array();
        void Accept();
        void Display();
        T Addition();

};

template<class T>
Array<T> :: Array(int length)
{
    size=length;
    Arr = new T[size];
}

template<class T>
Array<T> :: ~Array()
{
    delete []Arr;
}

template<class T>
void Array<T> :: Accept()
{
    cout<<"Enter data elements:"<<endl;
    for (int icnt = 0; icnt<size; icnt++)
    {
        cin>>Arr[icnt];
    }
}

template<class T>
void Array<T> :: Display()
    {
        cout<<"Elements in the array are:"<<endl;
        for (int icnt = 0; icnt<size; icnt++)
        {
            cout<<Arr[icnt]<<"\t";
        }
        cout<<endl;
    }

template<class T>
T Array<T> :: Addition()
{
   T sum=0; 
    for(int iCnt=0;iCnt<size;iCnt++)
    {
        sum = sum+Arr[iCnt];
    }
    return sum;
}    

int main()
{
    Array<int> obj(5);
    obj.Accept();
    obj.Display();
    int add = obj.Addition();
    cout<<"Addition is:"<<add<<endl;
    return 0;
}