#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("enter no of elementd in an array:\n");
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    printf("enter elements in an array:\n");
    for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    } 
    int k = 2;
    int x = 0;
    for (int i = 0; i < n; i++) 
    {
     if (i != k)
     { 
          x ^= a[i];
     }
    }
    printf("%d\n", x);
    return 0;
}
