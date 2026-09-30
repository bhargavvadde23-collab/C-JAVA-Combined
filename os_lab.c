

//opening a file

#include<stdio.h>
#include<fcntl.h>
int main(){
int fd=open("/home/bhargav/1.txt",O_RDWR);
printf("Open file Descriptor: %d",fd);
close(fd);
return 0;
}






