#include<stdio.h>

int main() {
    char *s = "pointer";
    char *p = s;
    while (*p) {
        p++;
    }
    printf("%ld\n", p - s);
    return 0;
}
