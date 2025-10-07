#include<stdio.h>
void displayI()
{
    int iCnt=1;
    while(iCnt<=4)
    {
        printf("Jay Shriram.....\n");
        iCnt++;
    }
}

void displayR()
{
    int iCnt=1; //1 // not static will run the program infite way
    if(iCnt<=4) //2
    {
        printf("Jay Shriram.....\n");
        iCnt++;
        displayR();//3 //tail recursion
    }
}
int main()
{
    // displayI();
    displayR();
    return 0;
}