#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record {
    int id;
    char data[100];
};

int main() {
    FILE *fp = fopen("records.dat", "rb");
    if (!fp) return 1;

    fseek(fp, 0, SEEK_END);
    long file_size = ftell(fp);
    long record_count = file_size / sizeof(struct record);
    fseek(fp, 0, SEEK_SET);

    struct record *index = malloc(record_count * sizeof(struct record));
    if (!index) { fclose(fp); return 1; }

    fread(index, sizeof(struct record), record_count, fp);
    fclose(fp);

    int *pos = malloc(record_count * sizeof(int));
    if (!pos) { free(index); return 1; }

    for (long i = 0; i < record_count; i++) {
        pos[i] = index[i].id;
    }

    int target_id = 123; // example search id
    long found_pos = -1;
    for (long i = 0; i < record_count; i++) {
        if (pos[i] == target_id) {
            found_pos = i;
            break;
        }
    }

    if (found_pos != -1) {
        FILE *fp2 = fopen("records.dat", "rb");
        if (!fp2) { free(index); free(pos); return 1; }
        fseek(fp2, found_pos * sizeof(struct record), SEEK_SET);
        struct record rec;
        fread(&rec, sizeof(struct record), 1, fp2);
        fclose(fp2);

        printf("Found ID: %d Data: %s\n", rec.id, rec.data);
    } else {
        printf("Record not found\n");
    }

    free(index);
    free(pos);
    return 0;
}
