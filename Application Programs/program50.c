#include<stdio.h>
#include<stdbool.h>
bool checkPerfect(int iNo)
{
    int iSum =0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(int iCnt = 1;iCnt<=(iNo/2); iCnt++)
    {
        if(iNo%iCnt==0){
            iSum=iSum+iCnt;
        }
    }

    if(iSum==iNo)
    {
        return true;
    } else {
        return false;
    }
   
}

int main()
{
    int iNo1= 0;
    printf("Enter number: \n");
    scanf("%d",&iNo1);
    
    bool isPerfect = checkPerfect(iNo1);
    if(isPerfect){
        printf("%d is a perfect no",iNo1);
    } else
    {
        printf("%d is not a perfect no",iNo1);
    }
    return 0;
}