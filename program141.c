// input  - accept the string
// output - convert Uppercase characters to lowercase
#include<stdio.h>
void tolowercase(char str[])
{
    while(*str!='\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            *str = *str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
     tolowercase(Arr);
     printf("converted string is : %s",Arr);
    return 0;
}