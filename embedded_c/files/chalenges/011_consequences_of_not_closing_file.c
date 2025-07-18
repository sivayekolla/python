#include <stdio.h>
#include <stdlib.h>

int main() {
    int max_files = 100;
    FILE **files = malloc(max_files * sizeof(FILE *));
    if (!files) return 1;

    int opened = 0;

    for (int i = 0; i < max_files + 10; i++) {
        if (opened >= max_files) {
           
            fclose(files[0]);
            for (int j = 1; j < opened; j++) {
                files[j - 1] = files[j];
            }
            opened--;
        }

        FILE *fp = fopen("test.txt", "r");
        if (!fp) {
            printf("Failed to open file at iteration %d\n", i);
            break;
        }

        files[opened++] = fp;
    }

    for (int i = 0; i < opened; i++) {
        fclose(files[i]);
    }

    free(files);
    return 0;
}
