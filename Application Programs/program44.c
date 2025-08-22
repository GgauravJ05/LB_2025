#include<stdio.h>
#include<stdbool.h>
void displayFactors(int iNo)
{
    if(iNo%1==0){
        printf("1 \n");
    } if(iNo%2==0){
        printf("2 \n");
    } if(iNo%3==0){
        printf("3 \n");
    } if(iNo%4==0){
        printf("4 \n");
    } if(iNo%5==0){
        printf("5\n");
    } if(iNo%6==0){
        printf("6\n");
    } if(iNo%7==0){
        printf("7\n");
    } if(iNo%8==0){
        printf("8\n");
    } if(iNo%9==0){
        printf("9\n");
    } if(iNo%10==0){
        printf("10\n");
    }
}

int main()
{
    int iNo1= 0;
    printf("Enter first number: \n");
    scanf("%d",&iNo1);
    displayFactors(iNo1);
    return 0;
}