#include<stdio.h>

union Data {
    int i;
    float f;
    char c;
};

int main() {
    union Data arr[3];

    arr[0].i = 10;
    arr[1].f = 3.14f;
    arr[2].c = 'Z';

    printf("%d\n", arr[0].i);
    printf("%.2f\n", arr[1].f);
    printf("%c\n", arr[2].c);

    arr[0].f = 5.5f;
    printf("%d\n", arr[0].i);  // may show unexpected value due to overwrite
    printf("%.2f\n", arr[0].f);

    return 0;
}
