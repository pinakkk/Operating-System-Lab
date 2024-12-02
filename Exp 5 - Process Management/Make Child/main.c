#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    pid_t child_pid;
    child_pid = fork();

    if(child_pid == 0){
        printf("Child Created Successfully!\n");
        printf("Child Process ID : %d\n",getpid());
    } else if(child_pid > 0){
        printf("Parent Process : Child Process PID : %d\n", child_pid);
    } else{
        printf("Fork failed\n");
        return 1;
    }
    
    return 0;
}