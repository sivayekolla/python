#include<stdio.h>
int power(int m,int n)
{
     int c=1;
     for(int i=0;i<n;i++)
     {
       c= c*m;  
     }
     return c;
}
int main()
{
     int a,b;
     printf("enter number and power of thet number:\n");
     scanf("%d %d",&a,&b);
     int c=power(a,b);
     printf("%d",c);
}