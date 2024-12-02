#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    pid_t child_pid;
    child_pid = fork();

    if(child_pid == 0){
        printf("Child Process Created!\n");
        printf("Child Process PID : %d\n", getpid());
        sleep(2);
        printf("My Parent Process PID is %d\n", getppid());
    } else if(child_pid > 0){
        printf("Parent Process\n");
        printf("Parent's PID : %d\n", getpid());
        printf("Terminating...\n");
    } else{
        printf("Fork failed... Returning...");
        return 1;
    }
    return 0;
}