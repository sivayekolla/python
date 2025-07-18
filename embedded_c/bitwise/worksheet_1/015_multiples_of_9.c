#include<stdio.h>
int main()
{
     int a;
     printf("enter a number:\n");
     scanf("%d",&a);
     a= (a<<3)+a;
     printf("%d",a);
}