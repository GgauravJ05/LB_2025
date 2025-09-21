#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main()
{
    char filename[30];
    char Arr[100] ={'\0'};
    int fd =0,noofbytes =0;

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
        noofbytes = read(fd,Arr,10);
        printf("%d bytes successfully read from the file\n",noofbytes);
        printf("Data from file: %s\n",Arr);
        close(fd);
    }
    return 0;
}