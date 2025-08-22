#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;//4 bytes
    public:
        Number(int x)
        {
            iNo = x;
        }

        //logics
        int Factorial()
        {
            int iFact=1,iCnt = 0;
            for (iCnt=1;iCnt<=iNo;iCnt++)
            {
                iFact = iFact * iCnt; //6
            }

            return iFact;
        }
};


int main()
{
    int iNo = 0; 
    int iRet = 0;
    cout<<"Enter the number:"<<endl;
    cin>>iNo;
    Number *nobj = new Number(iNo);
   iRet = nobj->Factorial();
   cout<<"Factorial is : "<<iRet<<endl;
   delete nobj;
    return 0;
}