#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 3) return 1;

    int n = argc - 2;
    FILE **fps = malloc(n * sizeof(FILE *));
    if (!fps) return 1;

    char **lines = malloc(n * sizeof(char *));
    size_t *lens = calloc(n, sizeof(size_t));
    if (!lines || !lens) {
        free(fps);
        free(lines);
        free(lens);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        fps[i] = fopen(argv[i + 1], "r");
        if (!fps[i]) {
            for (int j = 0; j < i; j++) fclose(fps[j]);
            free(fps);
            free(lines);
            free(lens);
            free(lens);
            return 1;
        }
        lines[i] = NULL;
        lens[i] = 0;
        if (getline(&lines[i], &lens[i], fps[i]) == -1) {
            free(lines[i]);
            lines[i] = NULL;
        }
    }

    FILE *out = fopen(argv[argc - 1], "w");
    if (!out) {
        for (int i = 0; i < n; i++) {
            if (fps[i]) fclose(fps[i]);
            if (lines[i]) free(lines[i]);
        }
        free(fps);
        free(lines);
        free(lens);
        return 1;
    }

    while (1) {
        int min_idx = -1;
        for (int i = 0; i < n; i++) {
            if (lines[i]) {
                if (min_idx == -1 || strcmp(lines[i], lines[min_idx]) < 0) {
                    min_idx = i;
                }
            }
        }
        if (min_idx == -1) break;

        fputs(lines[min_idx], out);
        free(lines[min_idx]);
        lines[min_idx] = NULL;
        lens[min_idx] = 0;

        if (getline(&lines[min_idx], &lens[min_idx], fps[min_idx]) == -1) {
            free(lines[min_idx]);
            lines[min_idx] = NULL;
        }
    }

    for (int i = 0; i < n; i++) {
        if (fps[i]) fclose(fps[i]);
        if (lines[i]) free(lines[i]);
    }
    fclose(out);
    free(fps);
    free(lines);
    free(lens);
    return 0;
}
