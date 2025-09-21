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

    fd = open(filename,O_RDWR | O_APPEND);
    if(fd==-1)
    {
        printf("unable to open the file: %s\n",filename);
    }
    else
    {
        printf("%s successfully opened the file with descriptor %d\n",filename,fd);

        printf("Enter the data that you want to write into the file :\n");
        scanf(" %[^'\n']s",Arr);
        noofbytes = write(fd,Arr,strlen(Arr));
        printf("%d bytes successfully written into the file\n",noofbytes);
        close(fd);
    }
    return 0;
}