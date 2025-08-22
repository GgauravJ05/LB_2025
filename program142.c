// input  - accept the string
// output - convert lo characters to lowercase
#include<stdio.h>
void touppercase(char str[])
{
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            *str = *str-32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
     touppercase(Arr);
     printf("converted string is : %s",Arr);
    return 0;
}