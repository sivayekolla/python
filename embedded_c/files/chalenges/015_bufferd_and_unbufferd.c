#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("file.txt", "w");
    if (!fp) return 1;

    char *buf = malloc(BUFSIZ);
    if (!buf) { fclose(fp); return 1; }

    setvbuf(fp, buf, _IOFBF, BUFSIZ);

    fputs("This is buffered output.\n", fp);
    fflush(fp);

    setvbuf(fp, NULL, _IONBF, 0);

    fputs("This is unbuffered output.\n", fp);

    free(buf);
    fclose(fp);
    return 0;
}
