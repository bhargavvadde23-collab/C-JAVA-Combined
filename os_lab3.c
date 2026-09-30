
//writing to a file

#include<stdio.h>
#include<fcntl.h>
int main(){
int fd=open("/home/bhargav/1.txt",O_WRONLY|O_CREAT);
printf("Open fd: %d",fd);
char buff[]="Hello OS.";
int fd1=write(fd,buff,sizeof(buff));
printf("\nwritten descriptor: %d",fd1);
close(fd);
return 0;
}