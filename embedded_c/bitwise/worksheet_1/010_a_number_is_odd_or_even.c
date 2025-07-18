#include<stdio.h>
int main()
{
     int a;
     printf("enter a number:\n");
     scanf("%d",&a);
     if((a>>0)&1)
     {
          printf("%d is odd number\n",a);
     }
     else
     {
          printf("%d is even number\n",a);
     }
}