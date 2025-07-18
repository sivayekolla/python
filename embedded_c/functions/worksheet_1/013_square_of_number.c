#include<stdio.h>
int sqr(int b)
{
     b=b*b;
     return b;
}
int main()
{
     int a;
     printf("enter a number to square\n");
     scanf("%d",&a);
     int c=sqr(a);
     printf("%d: is square of %d",c,a);
}