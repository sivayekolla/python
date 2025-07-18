#include <stdio.h>
#include <stdlib.h>

struct buffer {
    char *data;
    long size;
};

int main() {
    FILE *f = fopen("data.txt", "rb+");
    if (f == NULL) {
        printf("file open error\n");
        return 1;
    }

    fseek(f, 0, SEEK_END);
    long s;
    s = ftell(f);
    rewind(f);

    struct buffer *b = (struct buffer *)malloc(sizeof(struct buffer));
    b->size = s;
    b->data = (char *)malloc(b->size);

    fread(b->data, 1, b->size, f);

    char *p = b->data;
    for (long i = 0; i < b->size; i++) {
        if (p[i] >= 'a' && p[i] <= 'z') {
            p[i] = p[i] - 32;
        }
    }

    rewind(f);
    fwrite(b->data, 1, b->size, f);

    free(b->data);
    free(b);
    fclose(f);

    return 0;
}
