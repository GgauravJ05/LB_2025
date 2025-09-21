#include<iostream>
using namespace std;

//generic function
template<class T>
T Add(T no1, T no2)
{
    T ans = 0;
    ans = no1+no2;
    return ans;
}

int main()
{
    double dval1 =10.9, dval2=20.5,dans=0.0;
    float fval1 =10.9, fval2=20.5,fans=0.0;
    int ival1 =10, ival2=20,ians=0;

    ians = Add(ival1,ival2);
    cout<<"Additiuon is : "<<ians<<endl;

    fans =Add(fval1,fval2);
    cout<<"Additiuon is : "<<fans<<endl;

    dans =Add(dval1,dval2);
    cout<<"Additiuon is : "<<dans<<endl;

    return 0;
}