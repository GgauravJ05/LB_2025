#include<iostream>
using namespace std;
int Factorial(int iNo)
{
    int iFact=1,iCnt = 0;
    for (iCnt=1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact * iCnt; //6
    }

    return iFact;
}
int main()
{
    int iNo = 0; 
    int iRet = 0;
    cout<<"Enter the number:"<<endl;
    cin>>iNo;
    iRet = Factorial(iNo);
    cout<<"Factorial is: "<<iRet<<endl;
    return 0;
}