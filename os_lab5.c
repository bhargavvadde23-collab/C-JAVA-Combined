
//Iseek()


#include<stdio.h>
#include<fcntl.h>
int main(){
int fd=open("/home/bhargav/1.txt",O_RDONLY);
printf("Returned value of openfile: %d",fd);
int fd1=lseek(fd,3,SEEK_SET);
printf("\nReturned value of lseek: %d",fd1);
char buf[100];
int fd2=read(fd,buf,100);
printf("\nRead File descriptor:%d",fd2);
printf("\n%s",buf);
return 0;
}