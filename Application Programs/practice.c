#include<stdio.h>
#include<stdbool.h>

bool checkEven(int iNo)
{
    if(iNo % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int iNo;
    printf("Enter the number :: \n");
    scanf("%d", &iNo);
    checkEven(iNo);
    if(iNo % 2 == 0)
    {
        printf("EVEN \n");
    }
    else{
        printf("ODD");
    }
    return 0;
}