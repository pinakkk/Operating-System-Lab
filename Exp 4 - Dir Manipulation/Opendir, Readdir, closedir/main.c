#include <stdio.h>
#include <dirent.h>

int main(){
    DIR *dir;
    struct dirent *entry;

    dir = opendir(".");

    if(dir){
        printf("Content of the directory :\n");

        while((entry = readdir(dir)) != NULL){
            printf("Directory: %s\n", entry->d_name);
        }
        closedir(dir);
    }

    return 0;
}