//swapping the variables
#include<iostream>
using namespace std;
void swap(float &no1,float &no2)//call by reference
{
    float Temp;
    Temp = no1;
    no1=no2;
    no2=Temp;
}

int main()
{
    float ivalue1=10.6;
    float ivalue2=20.3;

    cout<<"ivalue1 = "<<ivalue1<<endl;
    cout<<"ivalue2 = "<<ivalue2<<endl;
    cout<<"after swapping:"<<endl;
    swap(ivalue1,ivalue2);
    cout<<"ivalue1 = "<<ivalue1<<endl;
    cout<<"ivalue2 = "<<ivalue2<<endl;
    return 0;
}