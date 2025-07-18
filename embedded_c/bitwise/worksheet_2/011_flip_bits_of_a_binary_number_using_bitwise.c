#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);
     int b=0xFF;
     a=a^b;
     for(int i=7;i>=0;i--)
     {
          printf("%d",(a>>i)&1);
     }
}