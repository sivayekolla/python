#include <stdio.h>

int main() {
    int arr[100];
    int n, count = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;

    if (n >= 1) count++;
    if (n >= 2) count++;
    if (n >= 3) count++;
    if (n >= 4) count++;
    if (n >= 5) count++;
    if (n >= 6) count++;
    if (n >= 7) count++;
    if (n >= 8) count++;
    if (n >= 9) count++;
    if (n >= 10) count++;
    if (n > 10) {
        int *q = p + 10;
        while (q < p + n) {
            count++;
            q++;
        }
    }

    printf("Number of elements: %d\n", count);

    return 0;
}
