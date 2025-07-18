#include<stdio.h>
#include<stdlib.h>

int main() {
    int r = 3, c = 3;
    int **m = malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++) {
        m[i] = malloc(c * sizeof(int));
    }

    int *p = *m;
    for (int i = 0; i < r * c; i++) {
        *(p + i) = i + 1;
    }

    p = *m;
    for (int i = 0; i < r * c; i++) {
        printf("%d ", *(p + i));
    }
}
