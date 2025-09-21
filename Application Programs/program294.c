#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    char filename[30];
    int fd =0;
    printf("Enter the file name to delete from curent diectory \n");
    scanf("%s",filename);
    unlink(filename);
    printf("%s deleted successfully\n",filename);
    return 0;
}