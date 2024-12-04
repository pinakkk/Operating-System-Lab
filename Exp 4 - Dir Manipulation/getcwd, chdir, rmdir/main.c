#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>

int main() {
    const char *dir = "NewDirectory";  // Name of the directory to create
    char cwd[1024];

    // Get the current working directory
    if (getcwd(cwd, sizeof(cwd)) == NULL) {
        perror("Error getting current working directory");
        return -1;
    }

    printf("Current Working Directory: %s\n", cwd);

    // Create a new directory
    if (mkdir(dir, 0755) != 0) {
        perror("Error creating directory");
        return -1;
    }

    printf("Directory '%s' created successfully\n", dir);

    // Change into the new directory
    if (chdir(dir) != 0) {
        perror("Error changing directory");
        return -1;
    }

    // Get the new current working directory
    if (getcwd(cwd, sizeof(cwd)) == NULL) {
        perror("Error getting current working directory");
        return -1;
    }

    printf("New Working Directory: %s\n", cwd);

    // Change back to the parent directory
    if (chdir("..") != 0) {
        perror("Error changing back to parent directory");
        return -1;
    }

    // Remove the created directory
    if (rmdir(dir) != 0) {
        perror("Error removing directory");
        return -1;
    }

    printf("Removed directory '%s' and changed back to original directory: %s\n", dir, cwd);

    return 0; // Indicate success
}
