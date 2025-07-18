#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *p1 = &arr[1];
    int *p2 = &arr[5];
    int diff = p2 - p1;
    printf("%d\n", diff);
    return 0;
}
