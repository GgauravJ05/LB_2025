// input  - accept the string
// output - count of vowels (a,e,i,o,u)
#include<stdio.h>
int countVowels(char str[])
{
    int iCounta = 0;
    while(*str!='\0')
    {
        char ch = *str;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'|| ch=='u') {
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
     countofa = countVowels(Arr);
     printf("count of vowels in string is : %d",countofa);
    return 0;
}