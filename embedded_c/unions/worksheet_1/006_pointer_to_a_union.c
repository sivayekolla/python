#include<stdio.h>
#include<stdlib.h>
union man
{
     int a;
     float b;
};
int main()
{
     union man *arr0=malloc(sizeof(union man));
     arr0->a=10;
     printf("%d\n",arr0->a);
     free(arr0);
     union man *arr1=malloc(sizeof(union man));
     arr0->b=10.857;
     printf("%f",arr0->b);//undefined behaviour.

}