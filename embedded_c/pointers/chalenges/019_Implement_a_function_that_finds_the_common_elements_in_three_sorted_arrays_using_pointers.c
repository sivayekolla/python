#include <stdio.h>

int main() {
    int a[100], b[100], c[100], n1, n2, n3, i;
    int *p1, *p2, *p3;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array (sorted): ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array (sorted): ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    printf("Enter size of third array: ");
    scanf("%d", &n3);
    printf("Enter elements of third array (sorted): ");
    for (i = 0; i < n3; i++) {
        scanf("%d", &c[i]);
    }

    p1 = a;
    p2 = b;
    p3 = c;

    printf("Common elements: ");
    while (p1 < a + n1 && p2 < b + n2 && p3 < c + n3) {
        if (*p1 == *p2 && *p2 == *p3) {
            printf("%d ", *p1);
            p1++;
            p2++;
            p3++;
        } else if (*p1 < *p2) {
            p1++;
        } else if (*p2 < *p3) {
            p2++;
        } else {
            p3++;
        }
    }

    printf("\n");
    return 0;
}
