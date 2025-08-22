#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
    public:
        String()
        {
            str = new char[20];
        }

        String(int isize)
        {
            str = new char[isize];
        }

        ~String()
        {
            delete []str;
        }

        void accept()
        {
            cout<<"Enter the string:"<<endl;
            cin>>str;
        }

        void display()
        {
            cout<<"String is :"<<str<<endl;
        }
};




int main()
{
    String str1(30);
    str1.accept();
    str1.display();
    return 0;
}