#include<stdio.h>
int sumFactors(int iNo)
{
    int iSum =0;
for(int iCnt = 1;iCnt<=(iNo/2); iCnt++)
{
    if(iNo%iCnt==0){
        iSum=iSum+iCnt;
    }
}
return iSum;
}

int main()
{
    int iNo1= 0;
    printf("Enter number: \n");
    scanf("%d",&iNo1);
    
    int iSum = sumFactors(iNo1);
    printf("sum of Factors of %d is %d:\n",iNo1,iSum);
    return 0;
}