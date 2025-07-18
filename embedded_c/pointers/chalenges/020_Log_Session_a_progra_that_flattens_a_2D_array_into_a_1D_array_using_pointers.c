#include<stdio.h>
#include<stdlib.h>

int main()
{
     int row, col;
     scanf("%d %d", &row, &col);

     int **arr = (int **)malloc(row * sizeof(int *));
     for (int i = 0; i < row; i++) 
     {
          *(arr + i) = (int *)malloc(col * sizeof(int));
     }

     for (int i = 0; i < row; i++) 
     {
          for (int j = 0; j < col; j++) 
          {
               scanf("%d", (*(arr + i) + j));
          }
     }

     int *arr1 = (int *)malloc(row * col * sizeof(int));
     int *ptr = arr1;

     for (int i = 0; i < row; i++) 
     {
          for (int j = 0; j < col; j++) 
          {
               *ptr = *(*(arr + i) + j);
               ptr++;
          }
     }

     ptr = arr1;
     for (int i = 0; i < row * col; i++) 
     {
          printf("%d ", *(ptr + i));
     }
}
