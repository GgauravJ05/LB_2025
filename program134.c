// input  - accept the string
// output - count of digits (0-9)
#include<stdio.h>
int countdigits(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        if((*str>='0') && (*str<='9'))
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
     countofa = countdigits(Arr);
     printf("count of digits in string is : %d",countofa);
    return 0;
}