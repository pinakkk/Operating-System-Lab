#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

int main(){
    int fileDes;
    char buffer[BUFFER_SIZE];

    fileDes = open("input.txt", O_RDONLY);

    // starting from 0, pointer at 10th Position
    lseek(fileDes, 10, SEEK_SET);
    read(fileDes, buffer, BUFFER_SIZE -1);

    buffer[BUFFER_SIZE - 1] = '\0'; // Null terminatior

    printf("Characters from 11th to 20th are : %s\n", buffer);
    close(fileDes);

    return 0;
}