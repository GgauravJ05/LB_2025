/*
6. to delte the file
void unlink(char *file_name)
file_name : name of file that we want to delete permanantly

*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    unlink("fabulous.txt");
    return 0;
}