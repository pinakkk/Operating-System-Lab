#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
    int fileDes; 

    char data[] = "This data will be appended.";
    fileDes = open("appendfile.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    write(fileDes, data, strlen(data));
    
    return 0;
}