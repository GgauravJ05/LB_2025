#include<stdio.h>

void displayR()
{
    static int iCnt=1; //1 
    if(iCnt<=4) //2
    {
        printf("Jay Shriram.....\n");
        iCnt++;
        displayR();//3 //tail recursion
    }
}
int main()
{
    displayR();
    return 0;
}