#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define BUFFERSIZE 1024
int main()
{
    int fdread =0,fdwrite=0,noofbytes=0;
    char Buffer[BUFFERSIZE]={'\0'};
    char fnamesrc[30];
    char fnamedest[30];

    printf("Enter the name of existing file to copy from\n");
    scanf("%s",fnamesrc);

    printf("Enter the name of new file to paste/write data into it\n");
    scanf("%s",fnamedest);

    fdread = open(fnamesrc,O_RDONLY);
    if(fdread ==-1)
    {
        printf("Failure in opening existing file\n");
        return -1;
    }

    fdwrite = creat(fnamedest,0777);
    if(fdwrite ==-1)
    {
        printf("Failure in creating new file\n");
        return -1;
    }

    while((noofbytes=read(fdread,Buffer,sizeof(Buffer)))!=0)
    {
        write(fdwrite,Buffer,noofbytes);
    }
    close(fdread);
    close(fdwrite);
    printf("File Copied successfully.....\n");

    return 0;
    
}