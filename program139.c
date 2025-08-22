// input  - accept the string
// output - replace 'a' with '_'
#include<stdio.h>
void replace(char str[])
{
    while(*str!='\0')
    {
        if(*str=='a') {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[20];
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
     replace(Arr);
     printf("replaced string is : %s",Arr);
    return 0;
}