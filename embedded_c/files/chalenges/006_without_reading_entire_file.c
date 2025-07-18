#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu {
    int id;
    char name[20];
};

int main() {
    FILE *fp = fopen("data.bin", "r+b");
    if (!fp) return 1;

    struct stu s;
    int target_id;
    printf("enter id to search:\n");
    scanf("%d", &target_id);

    while (fread(&s, sizeof(struct stu), 1, fp) == 1) {
        if (s.id == target_id) {
            fseek(fp, -sizeof(struct stu), SEEK_CUR);
            printf("enter new name:\n");
            char *name = NULL;
            size_t len = 0;
            getchar();
            getline(&name, &len, stdin);
            name[strcspn(name, "\n")] = '\0';
            strncpy(s.name, name, sizeof(s.name) - 1);
            s.name[sizeof(s.name) - 1] = '\0';
            free(name);
            fwrite(&s, sizeof(struct stu), 1, fp);
            break;
        }
    }

    fclose(fp);
    return 0;
}
