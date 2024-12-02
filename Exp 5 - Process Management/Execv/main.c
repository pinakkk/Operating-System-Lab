#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){
    pid_t pid; // to hold the PID
    char *args[] = {"ls", "-l", NULL}; // Commands to hold

    pid = fork();

    if(pid < 0){
        printf("Fork Failed!\n");
        return -1;
    }
    else if(pid == 0){
        printf("Child Created With PID : %d\n, now running 'ls -l' command...",getpid());

        execv("/bin/ls", args);

        printf("ExecV Failed!\n");
        exit(-1);
    } else{
        wait(NULL);
        printf("Parent Process PID : %d, Child Process Has Finished", getpid());
    }

    return 0;
}