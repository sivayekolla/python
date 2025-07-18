#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[10];
    printf("enter a string of numbers:\n");
    fgets(str,10,stdin);
    int num = atoi(str);
    printf("number: %d\n", num);
    return 0;
}
