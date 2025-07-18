#include<stdio.h>
#include<string.h>
#include<ctype.h>

void rev(char *s) {
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}

void up(char *s) {
    for (int i = 0; s[i]; i++) {
        s[i] = toupper(s[i]);
    }
    printf("%s\n", s);
}

void vow(char *s) {
    int c = 0;
    for (int i = 0; s[i]; i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') c++;
    }
    printf("%d\n", c);
}

int main() {
    void (*f[3])(char *) = {rev, up, vow};
    char s[100];
    int opt;
    printf("0-rev 1-up 2-vow\n");
    scanf("%d", &opt);
    getchar();
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = 0;
    f[opt](s);
    return 0;
}
