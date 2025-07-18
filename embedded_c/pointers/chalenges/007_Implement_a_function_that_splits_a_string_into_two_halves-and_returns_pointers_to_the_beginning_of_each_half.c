#include <stdio.h>

int main() {
    char str[100];
    char *first_half, *second_half;
    int len = 0, i;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') {
        len++;
    }

    first_half = str;
    second_half = str + (len / 2);

    printf("First half: ");
    i = 0;
    while (i < len / 2) {
        printf("%c", *(first_half + i));
        i++;
    }

    printf("\nSecond half: ");
    while (*(second_half) != '\0') {
        printf("%c", *second_half);
        second_half++;
    }

    printf("\n");
    return 0;
}
