//swapping the variables
#include<iostream>
using namespace std;
void swap(double &no1,double &no2)//call by reference
{
    double Temp;
    Temp = no1;
    no1=no2;
    no2=Temp;
}

int main()
{
    double ivalue1=10.6;
    double ivalue2=20.3;

    cout<<"ivalue1 = "<<ivalue1<<endl;
    cout<<"ivalue2 = "<<ivalue2<<endl;
    cout<<"after swapping:"<<endl;
    swap(ivalue1,ivalue2);
    cout<<"ivalue1 = "<<ivalue1<<endl;
    cout<<"ivalue2 = "<<ivalue2<<endl;
    return 0;
}