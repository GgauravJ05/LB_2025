//swapping the variables
#include<iostream>
using namespace std;
void swap(int no1,int no2)//call by value
{
    int Temp;
    Temp = no1;
    no1=no2;
    no2=Temp;
}

int main()
{
    int ivalue1=10;
    int ivalue2=20;

    cout<<"ivalue1 = "<<ivalue1<<endl;
    cout<<"ivalue2 = "<<ivalue2<<endl;
    cout<<"after swapping:"<<endl;
    swap(ivalue1,ivalue2);
    cout<<"ivalue1 = "<<ivalue1<<endl;
    cout<<"ivalue2 = "<<ivalue2<<endl;
    return 0;
}