#include<stdio.h>
#include<stdbool.h>
bool checkFactor(int iNo1, int iNo2)
{
    if(iNo1%iNo2==0){
        return true;
    } else {
        return false;
    }
}

int main()
{
    int iNo1, iNo2 = 0;
    printf("Enter first number: \n");
    scanf("%d",&iNo1);
    printf("Enter second number: \n");
    scanf("%d",&iNo2);

    bool bRes = checkFactor(iNo1, iNo2);
    if(bRes==true){
        printf("%d is factor of %d \n",iNo2, iNo1);
    } else{
        printf("%d is not a factor of %d \n",iNo2, iNo1);
    }
    return 0;
}