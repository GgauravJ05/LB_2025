// input  - accept the string
// output -lower to upper and vice versa
#include<stdio.h>
void strtoggle(char str[])
{
    while(*str!='\0')
    {
        if((*str>='a') && (*str<='z'))
        {
            *str = *str-32;
        }
        else if((*str>='A') && (*str<='Z'))
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
     strtoggle(Arr);
     printf("toggled string is : %s",Arr);
    return 0;
}