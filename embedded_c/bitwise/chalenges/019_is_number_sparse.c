#include<stdio.h>
int main()
{
     int a,count=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=31;i>=0;i--)
     {
          if(((a>>i)&1) && ((a>>(i-1)&1)))
          {
               count++;
          }
     }
     if(count!=0)
     {
          printf("the number is sparse:");
     }
     else
     {
           printf("the number is not sparse:");
     }

}