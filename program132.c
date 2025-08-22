// input any String
//output - count of small characters
#include<stdio.h>
int countSmall(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        // if((*str>=97) && (*str<=122))
        if((*str>='a') && (*str<='z'))
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
     countofa = countSmall(Arr);
     printf("count of small characters is string is : %d",countofa);
    return 0;
}