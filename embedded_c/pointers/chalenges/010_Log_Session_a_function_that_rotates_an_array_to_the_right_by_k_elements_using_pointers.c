#include <stdio.h>

int main() {
    int arr[100], temp[100];
    int n, k, i;
    int *p, *q;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter rotation count: ");
    scanf("%d", &k);

    k = k % n;

    p = arr + (n - k);
    q = temp;

    for (i = 0; i < k; i++) {
        *q = *p;
        q++;
        p++;
    }

    p = arr;
    for (i = 0; i < n - k; i++) {
        *q = *p;
        q++;
        p++;
    }

    p = temp;
    q = arr;
    for (i = 0; i < n; i++) {
        *q = *p;
        q++;
        p++;
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
