//no is prime or not - (no%no ==0 && no%1==0)// 2,3,5,7,11,13
#include<stdio.h>
#include<stdbool.h>
bool checkPrime(int iNo)
{
    bool isPrimeFlag = true;
    if(iNo<0) //updator
    {
        iNo=-iNo;
    }

    for(int iCnt = 2;iCnt<=(iNo/2); iCnt++)
    {
        if(iNo%iCnt==0){
            isPrimeFlag = false;
            break;
        }
    }
   return isPrimeFlag;
}

int main()
{
    int iNo1= 0;
    printf("Enter number: \n");
    scanf("%d",&iNo1);
    
    bool isPrime = checkPrime(iNo1);
    if(isPrime){
        printf("%d is a prime no",iNo1);
    } else
    {
        printf("%d is not a prime no",iNo1);
    }
    return 0;
}