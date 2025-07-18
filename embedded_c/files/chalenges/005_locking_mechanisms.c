#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/file.h>

int main() {
    int fd = open("shared.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
    if (fd < 0) return 1;

    if (flock(fd, LOCK_EX) != 0) { close(fd); return 1; }

    FILE *fp = fdopen(fd, "a");
    if (!fp) { close(fd); return 1; }

    char *msg = NULL;
    size_t len = 0;
    printf("Enter message:\n");
    getline(&msg, &len, stdin);

    fputs(msg, fp);
    fflush(fp);

    free(msg);
    flock(fd, LOCK_UN);
    fclose(fp);
    return 0;
}
