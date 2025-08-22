// problem sttement: calculate the percentage of student marks
/*
step 1: obtainedmarks, totalmarks  --- float
step 2: algorithm
        START
            accept obtained marks and store in variable obtainedmarks
            accept total marks  tand store in variable totalmarks
            calculate percentage using formulae:
                percentage = (obtainedmarks/totalmarks)*100
            display the percentage
        STOP
step 3 draw flowchart
step4 write pseudocode
step 5 : C program
step 6 : write program
*/

#include<stdio.h>
float calculatePercentage(int iMarks, int iTotal)
{
    float fPercentage=0.0f;
    fPercentage = ((float)iMarks/(float)iTotal)*100;
    return fPercentage;
}

int main()
{
    int iMarks=0;
    int iTotal =0;
    float fAns =0.0f;
    printf("Enter the Obtained marks\n");
    scanf("%d",&iMarks);
    printf("Enetr the out of marks \n");
    scanf("%d",&iTotal);

    fAns=calculatePercentage(iMarks,iTotal);
    printf("Your percentage is : %f",fAns);
}

