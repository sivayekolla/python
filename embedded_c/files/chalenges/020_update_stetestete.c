#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *orig = fopen("data.txt", "rb");
    if (!orig) return 1;

    fseek(orig, 0, SEEK_END);
    long size = ftell(orig);
    fseek(orig, 0, SEEK_SET);

    char *buf = malloc(size);
    if (!buf) { fclose(orig); return 1; }

    fread(buf, 1, size, orig);
    fclose(orig);

    FILE *tmp = fopen("data.txt.tmp", "wb");
    if (!tmp) { free(buf); return 1; }

    
    for (long i = 0; i < size; i++) {
        if (buf[i] == 'x') buf[i] = 'y';
    }

    fwrite(buf, 1, size, tmp);
    fflush(tmp);
    fsync(fileno(tmp));
    fclose(tmp);
    free(buf);

    rename("data.txt.tmp", "data.txt");

    return 0;
}
