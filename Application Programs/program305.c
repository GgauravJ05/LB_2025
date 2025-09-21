#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define BUFFERSIZE 1024
int main()
{
    char filename[30];
    char Arr[BUFFERSIZE] ={'\0'};
    int fd =0,noofbytes =0;
    int iCount =0;


    printf("Enter the file name to open from current diectory \n");
    scanf("%s",filename);

    fd = open(filename,O_RDWR);
    if(fd==-1)
    {
        printf("unable to open the file: %s\n",filename);
    }
    else
    {
        printf("%s successfully opened the file with descriptor %d\n",filename,fd);

        while((noofbytes = read(fd,Arr,sizeof(Arr)))!=0)
        {
            for(int i =0;i<noofbytes;i++)
            {
                // if(!(Arr[i] >= 'A' && Arr[i] <= 'Z'))
                if(Arr[i] >= '0' && Arr[i] <= '9')
                {
                        iCount++;
                }
            }
        }   
        printf("no of digits in the file are: %d\n",iCount)   ;
        close(fd);
    }
    return 0;
}