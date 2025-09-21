/*
4. To write data into the file
int write(int fd,char *Buffer, int size)
Buffer: its a base address of character array which contains the data that we want to write into file
size: number of bytes that we want to write into the file
reture value is the number of bytes successfully written into the file

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;
    int inoOfBytes  =0;
    char Arr[] = "fullstack developement";

    fd = open("fabulous.txt",O_RDWR | O_APPEND);

    if(fd ==-1)
    {
        printf("unable to open the file \n");
    }
    else {
       inoOfBytes = write(fd,Arr,22);
       printf("%d bytes gets successfully written into file \n",inoOfBytes);
    close(fd);
    }
    return 0;

}