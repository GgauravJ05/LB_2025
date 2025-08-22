#include<iostream>
using namespace std;

class String
{
    private:
        char *str;
        int iSize;
    public:
        String()
        {
            iSize = 20;
            str = new char[20];
        }

        String(int x)
        {
            iSize = x;
            str = new char[iSize];
        }

        ~String()
        {
            delete []str;
        }

        void accept()
        {
            cout<<"Enter the string:"<<endl;
            // gets(str);
            cin.getline(str,iSize);
        }

        void display()
        {
            cout<<"String is :"<<str<<endl;
        }
};

int main()
{
    String *str2 = new String(25);
    str2->accept();
    str2->display();

    String *str =new String();
    str->accept();
    str->display();

    delete str2;
    delete str;
    return 0;
}