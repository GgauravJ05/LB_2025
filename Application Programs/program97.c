// *   *   *   *
// *   *   *   *
// *   *   *   *
// *   *   *   *
#include<stdio.h>
void display()
{
    for(int i=1;i<=3;i++) //outer //row
    {
        for(int j=1;j<=10;j++)  //inner //column
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    display();
    return 0;
}