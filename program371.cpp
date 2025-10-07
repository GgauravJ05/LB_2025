#include<iostream>
using namespace std;
int main()
{
int size=0,icnt=0;
int *ptr=NULL;

//step1
cout<<"Enter number of elements:"<<endl;
cin>>size;

//step2
ptr = new int[size];

// step3
cout<<"Enter data elements:"<<endl;
for (icnt = 0; icnt<size; icnt++)
{
    cin>>ptr[icnt];
}

//step4
cout<<"Elements in the array are:"<<endl;
for (icnt = 0; icnt<size; icnt++)
{
    cout<<ptr[icnt]<<"\t";
}
cout<<endl;

//step5
delete []ptr;
    return 0;
}