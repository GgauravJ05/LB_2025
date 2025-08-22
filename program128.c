#include<stdio.h>
int calculateLength(char str[])
{
    int iCount = 0;
    while(*str!='\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iLength =0;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
     iLength = calculateLength(Arr);
     printf("the length of string is : %d",iLength);
    return 0;
}