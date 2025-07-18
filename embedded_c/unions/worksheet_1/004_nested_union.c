#include<stdio.h>

union Number {
    int i;
    union {
        float f;
        char c;
    } nested;
};

int main() {
    union Number num;

    num.i = 10;
    printf("%d\n", num.i);

    num.nested.f = 3.14f;
    printf("%.2f\n", num.nested.f);

    num.nested.c = 'A';
    printf("%c\n", num.nested.c);

    return 0;
}
