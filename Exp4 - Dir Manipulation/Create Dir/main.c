#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(){
    const char *dir = "New Directory";
    mkdir(dir, 0777);
    return 0;
}