#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(){
    char *oldname = "oldname.txt";
    char *newname = "newname.txt";

    if(rename(oldname, newname) != 0){
        printf("Error deleting.\n");
        return -1;
    }

    printf("%s file successfully renamed to %s", oldname, newname);
    return 0;
}