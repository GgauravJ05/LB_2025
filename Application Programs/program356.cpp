#include<iostream>
using namespace std;

int Add(int no1, int no2)
{
    int ans = 0;
    ans = no1+no2;
    return ans;
}

int main()
{
    int val1 =10, val2=20,ians=0;
    ians = Add(val1,val2);
    cout<<"Additiuon is : "<<ians<<endl;
    return 0;
}