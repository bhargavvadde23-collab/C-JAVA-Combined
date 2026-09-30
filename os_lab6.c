
//fork 

#include <stdio.h>
#include<fcntl.h>
#include<sys/types.h>
int main() {
int pid=fork();
printf("Process id: %d\n",pid);
return 0;
}