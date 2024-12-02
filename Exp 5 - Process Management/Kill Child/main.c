#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    pid_t pid;

    pid = fork();

    if(pid < 0){
        printf("Fork Failed!\n");
        return -1;
    } else if (pid == 0){
        printf("Child Created with PID : %d\n, Now Running...", getpid());
        
        while(1){
            pause(); //Pause
        }
        
    } else {
        printf("Parent Craeted With PID : %d, Now Sending Signal To Child %d\n", getpid(), pid);
        kill(pid, SIGTERM);
        wait(NULL); // wait for child process to terminate
        printf("Child Process Terminated");
    }
    return 0;
}
