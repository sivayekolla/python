#include<stdio.h>
#include<stdlib.h>

int main() {
    int *a = malloc(3 * sizeof(int));

    int *p1 = &a[0];
    int *p2 = &a[2];

    int diff = p2 - p1; 
    printf("%d\n", diff);

    

    return 0;
}
