// Problem tarement: accept the percentages obtaines fro student and display its pass/fail class
// 0 to 35 -- fail
// 35 to 50 -- pass 
// 50 t0 60 -- second class
// 60 to 75 -- first class
// 75 to 100 -- first class with distinction

// multiple options with range - if-else-if ladder
// multiple options but no range - switch case

// TRUR && TRUE = True
// TRUE || FALSE = True


#include<stdio.h>
void displayClass(float percentages)
{
    if(percentages<0.0 || percentages>100.00){
        printf("Invalid marks \n");
    }
    
if ((percentages >=0.0) && (percentages<35.00))
    {
       printf(" You are failed ...\n");
    } else if ((percentages >=35.00) && (percentages<50.00))
    {
        printf(" You are passed ...\n");
    }else if ((percentages >=50.00) && (percentages<60.00)){
        printf(" You are pass with second class ...\n");
    }
    else if ((percentages >=60.00) && (percentages<75.00)){
        printf(" You are pass with first class ...\n");
    }
    else if ((percentages >=75.00) && (percentages<=100.00)){
        printf(" You are pass with Distinction ...\n");
    } else{
        printf("Wrong input \n");
    }
}

int main()
{
    float fPercentages = 0.0f;
    printf("Enter the obtained percentages \n");
    scanf("%f",&fPercentages);
    displayClass(fPercentages);
    return 0;
}