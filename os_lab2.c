
//closing a file

#include<stdio.h>
#include<fcntl.h>
int main(){
int fd=open("/home/bhargav/1.txt",O_RDONLY);
printf("Open file descriptor: %d", fd);
//Closing the opened file
int fd1=close(fd);
printf("\nClose file returned value: %d",fd1);
return 0;
}