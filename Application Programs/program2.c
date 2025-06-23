//Problem statement: Accept twp intgers and perform the addition
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter first number\n");
    scanf("%d",&i);
    printf("Enter second number\n");
    scanf("%d",&j);

    k=i+j;
    printf("Additio is: %d",k);
    return 0;

}

// step 1: understand the problem statement
//         conclusion: perform the addition of two integers
// step 2: write an algorithm:
//         START
//             Accept first no from user and strore it into variable no1        
//             Accept second no from user and strore it into variable no2
//             Create a variable tp store the result, names as Ans
//             perform the addition of no1 & no2,  store the result into Ans
//             display the value from Ans
//         STOP
// step 3: draw flowchart
// step 4: write pseudo code
//         START
//             Input no1
//             Input no2
//             Ans=no1+no2
//             Output Ans
//         STOP/END
