#include<iostream>
using namespace std;

template<class T>
class Arithmatic
{
    public:
        T no1;
        T no2;

        Arithmatic(T A, T B);
        T Addition();
        T Substract();
};

/*
returntype classname :: functionname(parameters){body}
*/
template<class T>
Arithmatic<T> :: Arithmatic(T A, T B)
{
    this->no1=A;
    this->no2=B;
}

template<class T>
T Arithmatic<T> :: Addition()
{
    T ans =0;
    ans = no1+no2;
    return ans;
}

template<class T>
T Arithmatic<T> :: Substract()
{
    T ans =0;
    ans = no1-no2;
    return ans;

}

int main()
{
    Arithmatic<int> obj1(10,20);//int
    
    int ans= obj1.Addition();
    cout<<"Addition is :"<<ans<<endl;

    ans = obj1.Substract();
    cout<<"Substraction is :"<<ans<<endl;

    Arithmatic<float> fobj(10.5,5.5);//float
    ans= fobj.Addition();
    cout<<"Addition is :"<<ans<<endl;

    ans = fobj.Substract();
    cout<<"Substraction is :"<<ans<<endl;
    return 0;
}