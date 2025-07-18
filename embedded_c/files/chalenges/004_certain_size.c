#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *log = fopen("log.txt", "a+");
    if (!log) return 1;

    fseek(log, 0, SEEK_END);
    long size = ftell(log);
    long max_size = 1024 * 1024;

    if (size >= max_size) {
        freopen("log.txt", "w", log);
    }

    char *msg = NULL;
    size_t len = 0;
    printf("Enter log message:\n");
    getline(&msg, &len, stdin);

    fputs(msg, log);

    free(msg);
    fclose(log);
    return 0;
}
