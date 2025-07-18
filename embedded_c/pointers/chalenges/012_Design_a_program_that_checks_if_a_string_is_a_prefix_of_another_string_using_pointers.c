#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char *p1, *p2;
    int is_prefix = 1;

    printf("Enter main string: ");
    scanf("%s", str1);

    printf("Enter prefix string: ");
    scanf("%s", str2);

    p1 = str1;
    p2 = str2;

    while (*p2 != '\0') {
        if (*p1 == '\0' || *p1 != *p2) {
            is_prefix = 0;
            break;
        }
        p1++;
        p2++;
    }

    if (is_prefix) {
        printf("Prefix\n");
    } else {
        printf("Not a prefix\n");
    }

    return 0;
}
