/*
3. To create the new regular file
int creat(char *file_name,int permissions)
file_name : filename with extension to create new file
permissions: file permissions (i.e 0777)(owner group others)
Read:4
Write: 2
Execute:1

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd = 0;
    //file open using relative path
    fd = creat("fabulous.txt",0777);
    if(fd==-1)
    {
        printf("unable to create the file \n");
    }
    else {
        printf("File created successfully with fd : %d\n",fd);
    }
    
    return 0;
}