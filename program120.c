#include<stdio.h>
#include<stdbool.h>
bool checkSmall(char chValue)
{
    if((chValue>='a') && (chValue<='z'))
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
    bool bRet = checkSmall(ch);
     if(bRet==true)
     {
        printf("Its Small\n");
     }else{
        printf("Its not Small\n");
     }
    return 0;
}