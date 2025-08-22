// input  - accept the string
// output - count of white space
#include<stdio.h>
int countSpace(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        char ch = *str;
        if(ch==' ') {
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
     countofa = countSpace(Arr);
     printf("count of white space in string is : %d",countofa);
    return 0;
}