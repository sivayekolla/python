#include <stdio.h>

int main() {
    char str[200], *start, *end, *p;
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    start = str;
    while (*start == ' ' || *start == '\t' || *start == '\n') {
        start++;
    }

    p = start;
    while (*p != '\0') {
        p++;
    }
    p--;
    while ((p > start) && (*p == ' ' || *p == '\t' || *p == '\n')) {
        p--;
    }
    *(p + 1) = '\0';

    printf("Trimmed string: %s\n", start);
    return 0;
}
