#include<stdio.h>
#include<stdlib.h>

struct mat {
    int *data;
    int row;
    int col;
};

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    struct mat m;
    m.row = r;
    m.col = c;
    m.data = (int *)malloc(sizeof(int) * r * c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", (m.data + i * c + j));
        }
    }

    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", *(m.data + i * c + j));
        }
        printf("\n");
    }

}
