#include<stdio.h>
#include<math.h>

float s(float x) {
    return sin(x);
}

float c(float x) {
    return cos(x);
}

float t(float x) {
    return tan(x);
}

float l(float x) {
    return log(x);
}

int main() {
    float (*f[4])(float) = {s, c, t, l};
    int opt;
    float val;
    printf("0-sin 1-cos 2-tan 3-log\n");
    scanf("%d %f", &opt, &val);
    printf("%f\n", f[opt](val));
    return 0;
}
