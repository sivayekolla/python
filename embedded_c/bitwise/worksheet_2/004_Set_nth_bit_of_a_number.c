#include<stdio.h>
int main()
{
     int a,b;
     printf("enter value and bit position to set\n");
     scanf("%d %d",&a,&b);
     a=a|(1<<(b));
     for(int i=31;i>=0;i--)
     {
          printf("%d",(a>>i)&1);
     }
}