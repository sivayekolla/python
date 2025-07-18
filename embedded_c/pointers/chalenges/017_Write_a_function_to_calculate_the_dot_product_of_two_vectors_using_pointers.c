#include <stdio.h>

int main() {
    int a[100], b[100], n, i, result = 0;
    int *p1, *p2;

    printf("Enter size of vectors: ");
    scanf("%d", &n);

    printf("Enter elements of first vector: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of second vector: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    p1 = a;
    p2 = b;

    for (i = 0; i < n; i++) {
        result += (*p1) * (*p2);
        p1++;
        p2++;
    }

    printf("Dot product: %d\n", result);

    return 0;
}
