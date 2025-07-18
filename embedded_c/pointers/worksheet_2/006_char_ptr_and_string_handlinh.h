#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str1 = (char *)malloc(100 * sizeof(char));
    char *str2 = (char *)malloc(100 * sizeof(char));
    char *str3 = (char *)malloc(200 * sizeof(char));

    scanf("%s", str1);
    scanf("%s", str2);

    char *p1 = str1;
    char *p2 = str2;
    char *p3 = str3;

    while (*p1 != '\0') {
        *p3 = *p1;
        p1++;
        p3++;
    }
    while (*p2 != '\0') {
        *p3 = *p2;
        p2++;
        p3++;
    }
    *p3 = '\0';

    printf("%s\n", str3);

    char *copy = (char *)malloc(100 * sizeof(char));
    char *src = str1;
    char *dst = copy;
    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';
    printf("%s\n", copy);

    int len = strlen(str1);
    char *rev = (char *)malloc((len + 1) * sizeof(char));
    for (int i = 0; i < len; i++) {
        *(rev + i) = *(str1 + len - i - 1);
    }
    *(rev + len) = '\0';
    printf("%s\n", rev);

   

    return 0;
}
