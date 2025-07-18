#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main() {
    int fd = open("file.txt", O_RDWR);
    if (fd < 0) return 1;

    struct stat st;
    if (fstat(fd, &st) < 0) {
        close(fd);
        return 1;
    }

    size_t size = st.st_size;
    if (size == 0) {
        close(fd);
        return 1;
    }

    char *map = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (map == MAP_FAILED) {
        close(fd);
        return 1;
    }

    for (size_t i = 0; i < size; i++) {
        if (map[i] == 'a') map[i] = 'A';
    }

    msync(map, size, MS_SYNC);
    munmap(map, size);
    close(fd);

    return 0;
}
