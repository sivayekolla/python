#include<stdio.h>

struct data {
    char a;
    int b;
    float c;
};

int main() {
    struct data arr[3] = {
        {'x', 10, 1.1},
        {'y', 20, 2.2},
        {'z', 30, 3.3}
    };

    struct data *p = arr;
    for (int i = 0; i < 3; i++) {
        printf("%c %d %.1f\n", p->a, p->b, p->c);
        p++;
    }

    return 0;
}
