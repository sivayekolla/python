#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr = malloc(5 * sizeof(int));
    int *end = ptr + 4;

    for (int i = 0; i < 5; i++) {
        *(ptr + i) = i + 1;
    }

    while (end >= ptr) {
        printf("%d ", *end);
        end--;
    }

    free(ptr);
    return 0;
}
