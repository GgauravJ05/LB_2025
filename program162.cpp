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
        int countCapital()
        {
            int iCnt =0;
            char *temp = str;
            while(*temp!='\0')
            {
                if((*temp>='A') && (*temp<='Z'))
                {
                    iCnt++;
                }
               temp++; 
            }
            return iCnt;
        }
    };

int main()
{
    String *sobj1 = new String(30);
    int count = 0;
    sobj1->accept();
    sobj1->display();
    count = sobj1->countCapital();
    cout<<"count of capital letters is:"<<count<<endl;
    sobj1->display();
    delete sobj1;
    return 0;
}