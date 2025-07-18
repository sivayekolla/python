#include<stdio.h>
#include<stdlib.h>
int main()
{
     
     int *a=(int *)malloc(sizeof(int));
     scanf("%d",a);
     printf("%d",*a);
     free(a);
}