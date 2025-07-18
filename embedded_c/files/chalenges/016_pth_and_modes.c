#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define PATH_SEP '\\'
#define OPEN_MODE "rb"
#else
#define PATH_SEP '/'
#define OPEN_MODE "r"
#endif

int main() {
    char filepath[256];
    char filename[] = "testfile.txt";

    snprintf(filepath, sizeof(filepath), "folder%c%s", PATH_SEP, filename);

    FILE *fp = fopen(filepath, OPEN_MODE);
    if (!fp) return 1;

    char *line = NULL;
    size_t len = 0;

    while (getline(&line, &len, fp) != -1) {
        printf("%s", line);
    }

    free(line);
    fclose(fp);

    return 0;
}
