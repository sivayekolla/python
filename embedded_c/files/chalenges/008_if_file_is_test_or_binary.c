// How would you detect if a file is a text file or a binary file in C? Write a function for this and discuss its limitations.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("file_to_check", "rb");
    if (!fp) return 1;

    size_t cap = 1024;
    unsigned char *buf = malloc(cap);
    if (!buf) { fclose(fp); return 1; }

    size_t n = fread(buf, 1, cap, fp);
    fclose(fp);

    int is_binary = 0;
    for (size_t i = 0; i < n; i++) {
        if (buf[i] == 0) { 
            is_binary = 1;
            break;
        }
        
        if ((buf[i] < 32 || buf[i] > 126) && buf[i] != 9 && buf[i] != 10 && buf[i] != 13) {
            is_binary = 1;
            break;
        }
    }

    free(buf);

    if (is_binary) printf("File is binary\n");
    else printf("File is text\n");

    return 0;
}
