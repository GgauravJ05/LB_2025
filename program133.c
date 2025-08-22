// input any String
//output - count of capital characters
#include<stdio.h>
int countCap(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        // if((*str>=65) && (*str<=90))
        if((*str>='A') && (*str<='Z'))
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
     countofa = countCap(Arr);
     printf("count of capital characters in string is : %d",countofa);
    return 0;
}