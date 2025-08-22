//input 4
// A   B   C   D
#include<stdio.h>
void display(int iNo)
{
    int iCount =0;
    char ch='\0';
    // char ch ="d";
    for(iCount=1,ch='A';iCount<=iNo;iCount++,ch++)
    {
        printf("%c\t",ch);
        // ch--
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the no:\n");
    scanf("%d",&iNo);

    display(iNo);
    return 0;
}