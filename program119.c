#include<stdio.h>
#include<stdbool.h>
bool checkCapital(char chValue)
{
    if((chValue>='A') && (chValue<='Z'))
    {
        return true;
    } else{
    return false;
    }
    
}

int main()
{
    char ch ='\0';
    
    printf("Enter the character: \n");
    scanf("%c",&ch);
    bool bRet = checkCapital(ch);
     if(bRet==true)
     {
        printf("Its Capital\n");
     }else{
        printf("Its not capital\n");
     }
    return 0;
}