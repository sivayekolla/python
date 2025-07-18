#include<stdio.h>
int main()
{
     int a,count=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=31;i>=0;i--)
     {
          if((a>>i)&1)
          {
               count++;
               break;
          }
          count++;
     }
      a=32-count;
      printf("%d",(a+1));

}