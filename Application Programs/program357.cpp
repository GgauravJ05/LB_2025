#include<iostream>
using namespace std;

float Add(float no1, float no2)
{
    float ans = 0;
    ans = no1+no2;
    return ans;
}

int main()
{
    float val1 =10.9, val2=20.5,ians=0.0;
    ians = Add(val1,val2);
    cout<<"Additiuon is : "<<ians<<endl;
    return 0;
}