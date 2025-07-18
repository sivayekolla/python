#include<stdio.h>
#include<string.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int (*get(char *s))(int, int) {
    if(strcmp(s, "add") == 0) return add;
    if(strcmp(s, "sub") == 0) return sub;
    if(strcmp(s, "mul") == 0) return mul;
    return NULL;
}

int main() {
    char op[10];
    int a, b;
    scanf("%s", op);
    scanf("%d %d", &a, &b);
    int (*f)(int, int) = get(op);
    if(f) printf("%d\n", f(a, b));
    return 0;
}
