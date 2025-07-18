#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *src = fopen("source.txt", "r");
    if (!src) return 1;
    FILE *dest = fopen("dest.txt", "w");
    if (!dest) { fclose(src); return 1; }

    char **lines = NULL;
    size_t count = 0, cap = 10;
    lines = malloc(cap * sizeof(char *));
    if (!lines) { fclose(src); fclose(dest); return 1; }

    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    while ((read = getline(&line, &len, src)) != -1) {
        int found = 0;
        for (size_t i = 0; i < count; i++) {
            if (strcmp(lines[i], line) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            if (count >= cap) {
                cap *= 2;
                char **temp = realloc(lines, cap * sizeof(char *));
                if (!temp) break;
                lines = temp;
            }
            lines[count] = strdup(line);
            if (!lines[count]) break;
            fputs(line, dest);
            count++;
        }
    }

    for (size_t i = 0; i < count; i++) free(lines[i]);
    free(lines);
    free(line);
    fclose(src);
    fclose(dest);
    return 0;
}
