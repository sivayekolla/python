#include<stdio.h>
int main()
{
     int a=10;
     float b=20.98;
     int *app=&a;
     float *ppt=&b;
     app=(int*)ppt;
     printf("%d",*app);
}