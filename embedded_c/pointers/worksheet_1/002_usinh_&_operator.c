#include<stdio.h>
int main()
{
     int a=10,b=20,c=30;
     int * arr=&a;
     int * arr1=&b;
     int * arr2=&c;
     printf("%x %x %x",&a,&b,&c);
}