/*
1. To open existing file
int open(char *file_name,int mode)
file_name: name of the file which we want to open
Mode: mode in which we want to open the file
    O_RDONLY    :   Read mode
    O_WRONLY    :   Write mode
    O_RDWR      : Read + Write

    on success: the function will return the inreger as File descriptor
    on failure : it will return -1
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;
    fd = open("demo.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file \n");
    }
    else {
        printf("File opened successfully with fd : %d\n",fd);
    }
    
    return 0;
}