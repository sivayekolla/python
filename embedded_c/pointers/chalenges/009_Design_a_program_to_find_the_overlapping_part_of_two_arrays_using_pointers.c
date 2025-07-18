#include <stdio.h>

int main() {
    int a[100], b[100], overlap[100];
    int n1, n2, i, j, k = 0;
    int *p1, *p2, *p_overlap;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    p1 = a;
    p_overlap = overlap;

    for (i = 0; i < n1; i++) {
        p2 = b;
        for (j = 0; j < n2; j++) {
            if (*(p1 + i) == *(p2 + j)) {
                int found = 0;
                for (int m = 0; m < k; m++) {
                    if (*(p_overlap + m) == *(p1 + i)) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    *(p_overlap + k) = *(p1 + i);
                    k++;
                }
                break;
            }
        }
    }

    printf("Overlapping elements: ");
    for (i = 0; i < k; i++) {
        printf("%d ", *(p_overlap + i));
    }
    printf("\n");

    return 0;
}
