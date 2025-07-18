#include <stdio.h>
#include <stdlib.h>
 
int main() {
    FILE *fp;
    char command[256];
 
    const char *directory = ".";
 
    snprintf(command, sizeof(command), "dir %s", directory); // Use "ls -l" for Linux or "dir" for Windows
 
    fp = _popen(command, "r");   //popen() is used for Linux, _popen() is used for Windows
    if (fp == NULL) {
        perror("Error opening pipe");
        return EXIT_FAILURE;
    }
 
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
 
    _pclose(fp);   // pclose() is used for Linux, _pclose() is used for Windows
 
    return 0;
}