#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp = fopen("bigfile.txt", "r");
    if (!fp) return 1;
    size_t cap = 128, len = 0;
    char *buf = malloc(cap);
    if (!buf) return 1;
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (len + 1 >= cap) {
            size_t newcap = cap * 2;
            char *tmp = realloc(buf, newcap);
            if (!tmp) break;
            buf = tmp;
            cap = newcap;
        }
        buf[len++] = ch;
        if (ch == '\n') {
            buf[len] = '\0';
           
            len = 0;
        }
    }
    if (len > 0) {
        buf[len] = '\0';
       
    }
    free(buf);
    fclose(fp);
    return 0;
}
