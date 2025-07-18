#include<stdio.h>
int main()
{
     int a;
     printf("enter a value:\n");
     scanf("%d",&a);
     for(int i=31;i>=0;i--)
     {
          if(i%2==1)
          {
               if((a>>i)&1)
               {
                    a=a&~(a<<i);
               }
               else
               {
                    a=a|(1<<i);
               }
          }
     }
     for(int i=31;i>=0;i--)
     {
          printf("%d",(a>>i)&1);
     }
}