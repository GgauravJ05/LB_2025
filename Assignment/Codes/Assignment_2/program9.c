// PS - Accept two number from user and display first number as second number of times.
#include <stdio.h>
void display(int iNo, int iFrequency)
{
    int i = 0;
    for(i = 0; i < iFrequency; i++)
    {
        printf("%d \t", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    printf("Enter the number: \n");
    scanf("%d", &iValue);
    printf("Enter the frequency: \n");  
    scanf("%d", &iCnt);

    display(iValue, iCnt);
    return 0;
}