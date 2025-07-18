#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *tf = tmpfile();
    if (!tf) return 1;

    const char *data = "temporary data\n";
    fwrite(data, 1, strlen(data), tf);

    fseek(tf, 0, SEEK_SET);

    char *buf = NULL;
    size_t len = 0;
    ssize_t read = getline(&buf, &len, tf);
    if (read != -1) {
        printf("%s", buf);
    }

    free(buf);
    fclose(tf);
    return 0;
}
