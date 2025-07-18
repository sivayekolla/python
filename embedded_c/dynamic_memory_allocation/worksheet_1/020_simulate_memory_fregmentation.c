#include <stdio.h>
#include <stdlib.h>

int main() {
    void *a = malloc(100);
    void *b = malloc(200);
    void *c = malloc(300);
    void *d = malloc(400);
    void *e = malloc(500);
    free(b);
    free(d);
    void *f = malloc(350);
    if (f == NULL) {
        printf("Allocation failed due to fragmentation\n");
    } else {
        printf("Allocation succeeded at %p\n", f);
    }
    free(a);
    free(c);
    free(e);
    free(f);
    return 0;
}
