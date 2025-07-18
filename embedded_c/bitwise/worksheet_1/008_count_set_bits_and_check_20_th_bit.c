#include<stdio.h>
int main()
{
     int a,count=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
     {
          if((a>>i)&1)
          {
               count++;
          }
     }
     printf("%d is the count of set bits:\n",count);
     if((a>>20)&1)
     {
          printf("the bit in 20 th position is set\n");
     }
     else
     {
           printf("the bit in 20 th position is clear\n");
     }
}