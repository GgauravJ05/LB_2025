#include<stdio.h>
void displayFactors(int iNo)
{
    
for(int iCnt = 1;iCnt<=(iNo/2); iCnt++)
{
    if(iNo%iCnt==0){
        printf("%d\n",iCnt);
    }
}
}

int main()
{
    int iNo1= 0;
    printf("Enter number: \n");
    scanf("%d",&iNo1);
    printf("Factors of %d are:\n",iNo1);
    displayFactors(iNo1);
    return 0;
}