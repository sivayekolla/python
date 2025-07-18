#include<stdio.h>
#include<string.h>

int main() {
    char buf[10];
    char guard = '#';

    char *p = buf;
    fgets(buf, sizeof(buf), stdin);

    if (guard != '#') {
        printf("overflow\n");
    } else {
        while (*p) {
            printf("%c", *p);
            p++;
        }
    }

    return 0;
}
