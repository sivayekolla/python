#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = fopen("corrupted.bin", "rb");
    if (!fp) return 1;

    FILE *out = fopen("recovered.bin", "wb");
    if (!out) { fclose(fp); return 1; }

    size_t block_size = 4096;
    unsigned char *buf = malloc(block_size);
    if (!buf) { fclose(fp); fclose(out); return 1; }

    size_t read_bytes;
    while ((read_bytes = fread(buf, 1, block_size, fp)) > 0) {
        int all_zero = 1;
        for (size_t i = 0; i < read_bytes; i++) {
            if (buf[i] != 0) {
                all_zero = 0;
                break;
            }
        }
        if (!all_zero) {
            fwrite(buf, 1, read_bytes, out);
        }
       
    }

    free(buf);
    fclose(fp);
    fclose(out);
    return 0;
}
