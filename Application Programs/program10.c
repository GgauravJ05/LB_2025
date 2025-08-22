#include<stdio.h>
long int calculateCube(long int iValue)
{
    long int iCube =0;
    iCube = iValue*iValue*iValue;
    return iCube;
    // return iValue*iValue*iValue;
}

int main()
{
    long int iValue =0;
    long int iAns =0;
    printf("Enter the value\n");
    scanf("%d",&iValue);

    iAns = calculateCube(iValue);
    printf("Cube of %d is %d",iValue,iAns);
    return 0;
}
