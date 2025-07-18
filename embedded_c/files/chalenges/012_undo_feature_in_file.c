#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = fopen("file.txt", "r+");
    if (!fp) return 1;

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    char *buffer = malloc(size + 1);
    if (!buffer) { fclose(fp); return 1; }
    fread(buffer, 1, size, fp);
    buffer[size] = '\0';

    FILE *undo_fp = fopen("undo_backup.txt", "w");
    if (!undo_fp) { free(buffer); fclose(fp); return 1; }
    fwrite(buffer, 1, size, undo_fp);
    fclose(undo_fp);

    free(buffer);

   
    freopen("file.txt", "w", fp);
    char *new_content = NULL;
    size_t len = 0;
    printf("Enter new text (end with EOF):\n");
    ssize_t read;
    while ((read = getline(&new_content, &len, stdin)) != -1) {
        fwrite(new_content, 1, read, fp);
    }
    free(new_content);
    fclose(fp);

   

    return 0;
}
