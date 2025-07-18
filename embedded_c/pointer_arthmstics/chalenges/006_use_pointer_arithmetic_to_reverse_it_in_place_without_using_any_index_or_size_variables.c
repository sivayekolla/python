#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, -1};
    int *start = arr;
    int *end = arr;

    while (*end != -1) {
        end++;
    }
    end--;

    while (start < end) {
        int t = *start;
        *start = *end;
        *end = t;
        start++;
        end--;
    }

    int *p = arr;
    while (*p != -1) {
        printf("%d ", *p);
        p++;
    }

    return 0;
}
