#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

int files_equal(const char *f1, const char *f2) {
    FILE *fp1 = fopen(f1, "rb");
    FILE *fp2 = fopen(f2, "rb");
    if (!fp1 || !fp2) {
        if (fp1) fclose(fp1);
        if (fp2) fclose(fp2);
        return 0;
    }

    int res = 1;
    size_t bufsize = 4096;
    unsigned char *b1 = malloc(bufsize);
    unsigned char *b2 = malloc(bufsize);
    if (!b1 || !b2) {
        res = 0;
        goto cleanup;
    }

    while (1) {
        size_t r1 = fread(b1, 1, bufsize, fp1);
        size_t r2 = fread(b2, 1, bufsize, fp2);
        if (r1 != r2) {
            res = 0;
            break;
        }
        if (r1 == 0) break;
        if (memcmp(b1, b2, r1) != 0) {
            res = 0;
            break;
        }
    }

cleanup:
    free(b1);
    free(b2);
    fclose(fp1);
    fclose(fp2);
    return res;
}

int main() {
    DIR *dir = opendir(".");
    if (!dir) return 1;

    struct dirent *entry;
    char **files = NULL;
    size_t count = 0;
    size_t cap = 16;

    files = malloc(cap * sizeof(char *));
    if (!files) { closedir(dir); return 1; }

    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_type == DT_REG) {
            if (count == cap) {
                cap *= 2;
                char **tmp = realloc(files, cap * sizeof(char *));
                if (!tmp) break;
                files = tmp;
            }
            files[count] = strdup(entry->d_name);
            if (!files[count]) break;
            count++;
        }
    }
    closedir(dir);

    for (size_t i = 0; i < count; i++) {
        for (size_t j = i + 1; j < count; j++) {
            if (files_equal(files[i], files[j])) {
                remove(files[j]);
                free(files[j]);
                files[j] = NULL;
            }
        }
    }

    for (size_t i = 0; i < count; i++) {
        if (files[i]) free(files[i]);
    }
    free(files);

    return 0;
}
