#include<stdio.h>
int main()
{
     int a=10;
     int *ptr=&a;
     int **ptr1=&ptr;
     printf("%d %d %d",a,*ptr,**ptr1);
}