#include<stdio.h>
#include<stdlib.h>
int main()
{
     int a, b, c;
     scanf("%d %d", &a, &b);

     int *arr1 = (int *)malloc(sizeof(int) * a);
     int *arr2 = (int *)malloc(sizeof(int) * b);

     for (int i = 0; i < a; i++) {
          scanf("%d", &arr1[i]);
     }
     for (int i = 0; i < b; i++) {
          scanf("%d", &arr2[i]);
     }

     c = a + b;
     int *arr3 = (int *)malloc(sizeof(int) * c);
     int *a1 = arr1, *a2 = arr2, *a3 = arr3;

     for (int i = 0; i < a; i++) {
          *(a3 + i) = *(a1 + i);
     }

     for (int i = 0; i < b; i++) {
          *(a3 + a + i) = *(a2 + i);
     }

     for (int i = 0; i < c; i++) {
          printf("%d ", *(a3 + i));
     }

     
     return 0;
}
