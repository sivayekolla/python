#include <stdio.h>

int main() {
    char *p1, *p2;
    int size;

    p1 = (char *)((int *)0);
    p2 = (char *)((int *)1);

    size = p2 - p1;

    printf("Size of int: %d bytes\n", size);

    return 0;
}
