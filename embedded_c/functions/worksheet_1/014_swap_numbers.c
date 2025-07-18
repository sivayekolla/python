#include<stdio.h>
int swap(int *u,int *v)
{
     *u=*(u) ^ *(v);
     *v=*(v) ^ *(u);
     *u=*(u) ^ *(v);
}
int main()
{
     int a,b;
     printf("enter 2 numbers to swap:\n");
     scanf("%d %d",&a,&b);
     swap(&a,&b);
     printf("%d %d\n",a,b);
}