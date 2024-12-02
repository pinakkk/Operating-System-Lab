#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

int main(){
    char buffer[BUFFER_SIZE];
    int readFd, writeFd;

    readFd = open("source.txt", O_RDONLY, 0644);
    writeFd = open("destination.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);

    ssize_t bytesRead;;

    while((bytesRead = read(readFd, buffer, BUFFER_SIZE)) > 0){
        write(writeFd, buffer, bytesRead);
    }

    close(readFd);
    close(writeFd);

    return 0;
}