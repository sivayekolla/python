#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, xor1 = 0, xor2 = 0, missing;
    scanf("%d", &n);
    int *a = (int *)malloc((n - 1) * sizeof(int));
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 1; i <= n; i++) {
        xor1 ^= i;
    }
    for (i = 0; i < n - 1; i++) {
        xor2 ^= a[i];
    }
    missing = xor1 ^ xor2;
    printf("%d\n", missing);
    free(a);
    return 0;
}
