#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void con(char *msg) {
    printf("console: %s\n", msg);
}

void fil(char *msg) {
    FILE *fp = fopen("log.txt", "a");
    if (fp) {
        fprintf(fp, "file: %s\n", msg);
        fclose(fp);
    }
}

void net(char *msg) {
    printf("network: %s\n", msg);
}

int main() {
    void (*logptr[3])(char *) = {con, fil, net};
    int opt;
    char msg[100];
    printf("0-console 1-file 2-network\n");
    scanf("%d", &opt);
    getchar();
    fgets(msg, 100, stdin);
    msg[strcspn(msg, "\n")] = 0;
    logptr[opt](msg);
    return 0;
}
