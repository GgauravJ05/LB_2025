// input  - accept the string
// output - replace a,e,i,o,u,A,E,I,O,U  with '_'
#include<stdio.h>
void replace(char str[])
{
    while(*str!='\0')
    {
        char ch = *str;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'|| ch=='U') {
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