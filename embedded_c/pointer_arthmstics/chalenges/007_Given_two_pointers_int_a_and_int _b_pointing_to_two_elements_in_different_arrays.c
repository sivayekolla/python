#include<stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int *a = &arr1[1];
    int *b = &arr2[1];
    int d = b - a;
    printf("%d\n", d);
    return 0;
}
