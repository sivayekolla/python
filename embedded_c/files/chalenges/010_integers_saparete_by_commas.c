#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (!fp) return 1;

    int c;
    long num = 0;
    int sign = 1;
    int started = 0;
    int min = INT_MAX;
    int max = INT_MIN;

    while ((c = fgetc(fp)) != EOF) {
        if (c == '-') {
            sign = -1;
        } else if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
            started = 1;
        } else if (c == ',' || c == '\n' || c == ' ' || c == '\r') {
            if (started) {
                int val = (int)(num * sign);
                if (val < min) min = val;
                if (val > max) max = val;
                num = 0;
                sign = 1;
                started = 0;
            }
        } else {
           
        }
    }

   
    if (started) {
        int val = (int)(num * sign);
        if (val < min) min = val;
        if (val > max) max = val;
    }

    fclose(fp);

    if (min == INT_MAX && max == INT_MIN) {
        printf("No numbers found\n");
    } else {
        printf("Min: %d\nMax: %d\n", min, max);
    }

    return 0;
}
