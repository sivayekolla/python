#include<stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, -1}; // -1 is sentinel
    int *mid = &arr[2]; // pointer to element 30

    int before = 0;
    int *p = mid;
    while (p != arr && *(p-1) != -1) {
        p--;
        before++;
    }

    int after = 0;
    p = mid;
    while (*p != -1) {
        p++;
        after++;
    }
    after--; // exclude sentinel

    printf("before=%d after=%d\n", before, after);
    return 0;
}
