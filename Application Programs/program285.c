/*
2. To close the file
void close(int fd)
fd: File descriptor which was returned by open() or create() system call
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;
    //file open using relative path
    fd = open("demo.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("unable to open the file \n");
    }
    else {
        printf("File opened successfully with fd : %d\n",fd);
        close(fd);
        printf("File successfully closed\n");
    }
    
    return 0;
}