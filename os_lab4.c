
//reading a file

#include<stdio.h>
#include<fcntl.h>
int main(){
int fd=open("/home/bhargav/2.txt",O_RDONLY);
char buf[100];
int fd1=read(fd,buf,100);
printf("Contents of the file: %s",buf);
close(fd1);
close(fd);
return 0;
}