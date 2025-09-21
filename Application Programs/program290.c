/*
5. to read the data from the file
int read(int fd,char *Buffer, int size)

Buffer : its a base address of character array(empty array) in which we want to read/store the datafrom the file
size :mnumber of bytes that we ants to read

return value: it is the number of bytes successfully read from the file
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;
    int inoOfBytes  =0;
    char Arr[50] = {'\0'};

    fd = open("fabulous.txt",O_RDWR);

    if(fd ==-1)
    {
        printf("unable to open the file \n");
    }
    else {
       inoOfBytes = read(fd,Arr,22);
       printf("%d bytes gets successfully read frm file \n",inoOfBytes);
       printf("%s\n",Arr);
    close(fd);
    }
    return 0;

}