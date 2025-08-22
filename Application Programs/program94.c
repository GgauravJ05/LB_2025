//input 4
// a   b   c   d
#include<stdio.h>
void display(int iNo)
{
    int iCount =0;
    char ch='\0';
    // char ch ="d";
    for(iCount=1,ch='a';iCount<=iNo;iCount++,ch++)
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