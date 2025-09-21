#include<iostream>
using namespace std;

template<class T>
T Addition(T Arr[], int length)
{
   T sum=0; 

    for(int iCnt=0;iCnt<length;iCnt++)
    {
        sum = sum+Arr[iCnt];
    }
    return sum;
}

int main()
{
int size=0,icnt=0;
float *ptr=NULL;

//step1
cout<<"Enter number of elements:"<<endl;
cin>>size;

//step2
ptr = new float[size];

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
float ans = Addition(ptr,size);
cout<<"Addition is:"<<ans<<endl;

//step6
delete []ptr;
    return 0;
}