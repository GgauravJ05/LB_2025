#include<iostream>
using namespace std;

class Arithmatic
{
    public:
        int no1;
        int no2;

        Arithmatic(int A, int B)
        {
            this->no1=A;
            this->no2=B;
        }

        int Addition()
        {
            int ans =0;
            ans = no1+no2;
            return ans;
        }
};

int main()
{
    Arithmatic obj1(10,20);
    int ans= obj1.Addition();
    cout<<"Addition is :"<<ans<<endl;
    return 0;
}