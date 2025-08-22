#include<iostream>
using namespace std;
class Pattern
{
    private:
        int iRow;
        int iCol;
    public:
        Pattern(int x,int y)
        {
         iRow =x;
         iCol =y;   
        }

    void display()
    {
        // pattern logic
    }
};

int main()
{
    int iValue1,iValue2=0;
    cout<<"Enter no of Rows:"<<endl;
    cin>>iValue1;
    cout<<"Enter no of columns:"<<endl;
    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);
    pobj.display();

    return 0;
}