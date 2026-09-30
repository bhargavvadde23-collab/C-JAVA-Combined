#include <unistd.h>
int main() {
char *args[] = {"ls", "-l", NULL};
// Replace the current process with the "ls -l" command
execvp("ls", args);
return 1;
}