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
    int iSize =0;

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
            printf("%d bytes gets read from file\n",noofbytes);
            iSize = iSize + noofbytes;
        }      
        printf("File contains %d bytes in it \n",iSize);
        close(fd);
    }
    return 0;
}