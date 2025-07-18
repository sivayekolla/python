#include<stdio.h>

struct Data {
    int id;
    union {
        int i;
        float f;
        char c;
    };
};

int main() {
    struct Data d;

    d.id = 1;
    d.i = 100;
    printf("%d %d\n", d.id, d.i);

    d.f = 3.14f;
    printf("%d %.2f\n", d.id, d.f);

    d.c = 'Z';
    printf("%d %c\n", d.id, d.c);

    return 0;
}
