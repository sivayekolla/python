#include <stdio.h>
#include <string.h>

long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int lexRank(char *s) {
    int n = strlen(s);
    long long rank = 1;
    for (int i = 0; i < n; i++) {
        int less_than = 0;
        for (int j = i+1; j < n; j++) {
            if (s[i] > s[j]) {
                less_than++;
            }
        }
        long long fact = 1;
        int freq[256] = {0};
        for (int j = i; j < n; j++) {
            freq[s[j]]++;
        }
        for (int j = 0; j < 256; j++) {
            if (freq[j] > 1) {
                fact *= factorial(freq[j]);
            }
        }
        rank += (less_than * factorial(n - i - 1)) / fact;
    }
    return (int)rank;
}

int main() {
    char str[20];
    printf("enter string:");
    scanf("%s",str);
    printf("Rank of %s is: %d\n", str, lexRank(str));
    return 0;
}