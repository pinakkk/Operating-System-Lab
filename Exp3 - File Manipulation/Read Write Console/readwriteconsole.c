#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(){
    char buffer[BUFFER_SIZE];

    ssize_t bytesRead = read(0, buffer, BUFFER_SIZE);
    write(1, buffer, bytesRead);

    return 0;
}