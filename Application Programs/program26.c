// largest no from 3 numbers
// no1 =10  if no1>no2 && no1>no3    -- no1
// no2=15       no2>no1 && no2>no3    -- no2
// no3=5      else no1 && no2 both are not bigghest then be default no3 is greate


#include<stdio.h>
int largestNumber(int no1, int no2, int no3)
{
    if(no1>=no2 && no1>=no3)
    {
        return no1;
    } else if(no2>=no1 && no2>=no3)
    {
        return no2;
    } else {
        return no3;
    }
}

int main()
{   
    int iNo1, iNo2, iNo3=0;
    printf("Enter first number \n");
    scanf("%d",&iNo1);
    printf("Enter second number \n");
    scanf("%d",&iNo2);
    printf("Enter third number \n");
    scanf("%d",&iNo3);
    int bigestNumber=largestNumber(iNo1,iNo2,iNo3);
    printf("Largest number is: %d",bigestNumber);
}