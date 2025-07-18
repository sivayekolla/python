#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int rows = 4, cols = 4;
    int **reg_block;

    reg_block = (int **)malloc(rows * sizeof(int *));
    if (reg_block == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        reg_block[i] = (int *)malloc(cols * sizeof(int));
        if (reg_block[i] == NULL) {
            printf("Memory allocation failed at row %d!\n", i);
            
            for (int k = 0; k < i; k++) {
                free(reg_block[k]);
            }
            free(reg_block);
            return 1;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            reg_block[i][j] = (i + 1) * 10 + j;  
        }
    }

    printf("Register block values:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3u ", reg_block[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(reg_block[i]);
    }
    free(reg_block);

    return 0;
}