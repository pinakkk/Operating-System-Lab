#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    pid_t child_pid;
    child_pid = fork();

    if(child_pid == 0){
        printf("Child Process Created With PID : %d\n", getpid());
        exit(0); //Exits Immediately
    } else if(child_pid > 0){
        printf("Parent Process Created With PID : %d\n", getpid());
        sleep(10); // Sleep to allow child to become zombie
    } else{
        printf("Fork Failed!\n");
        return 1;
    }

    return 0;
}