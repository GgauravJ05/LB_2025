// accept string and return the count of 'a'
#include<stdio.h>
int counta(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        if(*str=='a')
        {
            iCounta++;
        }
        str++;
    }
    return iCounta;
}

int main()
{
    char Arr[20];
    int countofa =0;
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
     countofa = counta(Arr);
     printf("count of a in string is : %d",countofa);
    return 0;
}