//input 4
// a   b   c   d
#include<stdio.h>
void display(int iNo)
{
    int iCount =0;
    char ch='a';
    // char ch ="d";
    for(iCount=1;iCount<=iNo;iCount++)
    {
        printf("%c\t",ch);
        ch++;
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