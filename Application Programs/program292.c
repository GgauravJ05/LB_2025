#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    char filename[30];
    int fd =0;
    printf("Enter the file name to open from current diectory \n");
    scanf("%s",filename);

    fd = open(filename,O_RDWR);

    if(fd==-1)
    {
        printf("unable to open the file: %s \n",filename);
    }
    else {
        printf("%s opened successsfully with file descriptor %d \n",filename,fd);
        close(fd);
    }
    return 0;
}