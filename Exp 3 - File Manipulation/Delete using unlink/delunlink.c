#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){
    const char *filename = "delete_it.txt";

    if(unlink(filename) == - 1){
        printf("Error deleting");
        return 1;
    }

    printf("%s file successfully deleted.\n", filename);
    return 0;
}