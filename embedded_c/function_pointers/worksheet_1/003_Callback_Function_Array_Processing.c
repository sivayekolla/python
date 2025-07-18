#include <stdio.h>

void process(int *arr, int size, void (*call)(int *)) {
    for (int i = 0; i < size; i++) {
        call(&arr[i]);
    }
}

void inc(int *x) {
    (*x)++;
}

void doubleValue(int *x) {
    *x = *x * 2;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    void (*f1)(int *) = inc;
    void (*f2)(int *) = doubleValue;

    process(arr, 5, f1);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    process(arr, 5, f2);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
