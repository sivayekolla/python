#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *in = fopen("input.bin", "rb");
    if (!in) return 1;
    FILE *out = fopen("output.txt", "w");
    if (!out) { fclose(in); return 1; }
    size_t cap = 256, len = 0;
    unsigned char *buf = malloc(cap);
    if (!buf) { 
     fclose(in); fclose(out); 
    return 1;
     }
    int ch;
    while ((ch = fgetc(in)) != EOF) {
        if (len >= cap) {
            cap *= 2;
            unsigned char *tmp = realloc(buf, cap);
            if (!tmp) break;
            buf = tmp;
        }
        buf[len++] = ch;
        if (ch == '\n') {
            fwrite(buf, 1, len, out);
            len = 0;
        }
    }
    if (len) fwrite(buf, 1, len, out);
    free(buf);
    fclose(in);
    fclose(out);
    return 0;
}
