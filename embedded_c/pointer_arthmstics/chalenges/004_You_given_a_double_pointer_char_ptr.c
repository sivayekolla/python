#include<stdio.h>
#include<string.h>

int main() {
    char *list[] = {"one", "two", "three"};
    char **ptr = list;

    for (int i = 0; i < 3; i++) {
        char *start = *(ptr + i);
        char *end = start + strlen(start) - 1;
        while (start < end) {
            char t = *start;
            *start = *end;
            *end = t;
            start++;
            end--;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%s\n", *(ptr + i));
    }

    return 0;
}
