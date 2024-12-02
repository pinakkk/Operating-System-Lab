#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int fileDes;

    // Open with readonly and permissions as Others, Group, All : 4+2(write), 4(read), 4(read)
    fileDes = open("file.txt", O_CREAT || O_RDONLY, 0644);
    clode(fileDes);

    return 0;
}