#include<stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    void *ptr = arr;

    ptr = (char *)ptr + sizeof(int);
    printf("%d\n", *(int *)ptr);

    return 0;
}
