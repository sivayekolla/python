#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    float b = 10.98;
    char c = 'a';

    int *ptr1 = (int *)malloc(sizeof(int));
    float *ptr2 = (float *)malloc(sizeof(float));
    char *ptr3 = (char *)malloc(sizeof(char));

    ptr1 = &a;
    ptr2 = &b;
    ptr3 = &c;

    printf("%d\n", *ptr1);
    printf("%f\n", *ptr2);
    printf("%c\n", *ptr3);

    int *arr = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        *(arr + i) = i * 2;
    }

    int *p = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    void *vptr = (void *)arr;
    int *iptr = (int *)vptr;
    printf("%d\n", *iptr);
}
