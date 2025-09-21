#include<iostream>
using namespace std;

double Add(double no1, double no2)
{
    double ans = 0;
    ans = no1+no2;
    return ans;
}

int main()
{
    double val1 =10.9, val2=20.5,ians=0.0;
    ians = Add(val1,val2);
    cout<<"Additiuon is : "<<ians<<endl;
    return 0;
}