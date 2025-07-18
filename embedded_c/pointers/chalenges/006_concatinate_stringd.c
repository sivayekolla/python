#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char result[200];
    char *p1 = str1;
    char *p2 = str2;
    char *pres = result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (*p1 != '\0') {
        *pres = *p1;
        pres++;
        p1++;
    }

    while (*p2 != '\0') {
        *pres = *p2;
        pres++;
        p2++;
    }

    *pres = '\0';

    printf("Concatenated string: %s\n", result);

    return 0;
}
