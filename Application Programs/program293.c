#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    char filename[30];
    int fd =0;
    printf("Enter the file name to create into current diectory \n");
    scanf("%s",filename);

    fd = creat(filename,0777);

    if(fd==-1)
    {
        printf("unable to open the file: %s \n",filename);
    }
    else {
        printf("%s created successsfully with file descriptor %d \n",filename,fd);
    }
    return 0;
}