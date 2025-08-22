#include<iostream>
using namespace std;

// $   *   *   *   *
// *   $   1   1   *
// *   0   $   1   *
// *   0   0   $   *
// *   *   *   *   $
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
        int i,j=0;
        for(i=1;i<=iRow;i++) //Row
        {
            for(j=1;j<=iCol;j++) //Column
            {
                if(i==j){ cout<<"$\t";}
                else if((i==1)||(i==iRow)||(j==1)||(j==iCol)) {cout<<"*\t";}
                else if(i>j){cout<<"0\t";}
                else if(j>i){cout<<"1\t";}
            }
            cout<<endl;
        }
    }
};

int main()
{
    int iValue1,iValue2=0;
    cout<<"Enter no of Rows:"<<endl;
    cin>>iValue1;
    cout<<"Enter no of columns:"<<endl;
    cin>>iValue2;

    Pattern *pobj = new Pattern(iValue1,iValue2);
    pobj->display();

    return 0;
}