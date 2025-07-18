#include<stdio.h>

int main() {
    char str[] = "embedded";
    char *p = &str[4];
    while (p != str) {
        p--;
    }
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    return 0;
}
