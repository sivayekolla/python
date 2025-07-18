#include <stdio.h>

union stu {
    int a;
    float b;
    char arr[20];
};

int main() {
    union stu data;

    data.a = 100;
    printf("Int: %d\n", data.a);

    data.b = 3.14;
    printf("Float: %f\n", data.b);  

    strcpy(data.arr, "Hello");
    printf("String: %s\n", data.arr);  

    return 0;
}
