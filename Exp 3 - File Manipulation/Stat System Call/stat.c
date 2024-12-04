#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

int main(){
    const char *filename = "sample.txt";
    struct stat fileStat;

    if(stat(filename, &fileStat) != 0){
        printf("Error retrieving info.\n"); 
        return -1;
    }
    printf("Retriving File Info of File: %s\n");
    printf("File Size : %ld\n",fileStat.st_size);
    printf("Total File Links : %ld\n", fileStat.st_nlink);

    return 0;
}