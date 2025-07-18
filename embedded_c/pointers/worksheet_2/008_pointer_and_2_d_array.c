#include <stdio.h>
#include <stdlib.h>

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

    for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
            scanf("%d", (m.data + i * m.col + j));
        }
    }

    for (int j = 0; j < m.col; j++) {
        for (int i = 0; i < m.row; i++) {
            printf("%d ", *(m.data + i * m.col + j));
        }
        printf("\n");
    }

    free(m.data);
    return 0;
}
