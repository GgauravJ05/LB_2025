// accept string and return the count of used defined character
#include<stdio.h>
int countch(char str[],char chValue)
{
    int iCount = 0;
    while(*str!='\0')
    {
        if(*str==chValue)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int count =0;
    char ch ='\0';
    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);
    
    printf("Enter the character for frequency count\n");
    scanf(" %c",&ch);

    count = countch(Arr,ch);
     printf("count of  in string is : %d",count);
    return 0;
}