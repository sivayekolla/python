#include<stdio.h>
void swap(int *a,int *b)
{
     int temp=*a;
     *a=*b;
     *b=temp;
}
int main()
{
     int a,b;
     printf("enter two munbers:\n");
     scanf("%d %d",&a,&b);
     swap(&a,&b);
     printf("%d %d",a,b);
}