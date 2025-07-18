#include<stdio.h>
int main()
{
     int a,count=0;
     printf("enter a value:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
     {
          if((a>>i)&1)
          {
               count++;
          }
     }
     printf("%d is the no of set bits in %d",count,a);

}