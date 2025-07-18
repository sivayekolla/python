#include<stdio.h>
int main()
{
     int a,count=0,count1=0,v=0;
     printf("enter a number:\n");
     scanf("%d",&a);
     for(int i=0;i<32;i++)
     {
          if((a>>i)&1)
          {
               count++;
          }
     }
     a=a-1;
     while(a>0)
     {
          count1=0;    
          for(int i=31;i>=0;i--)
          {
               if((a>>i)&1)
               {
                    count1++;
                    
               }
          }
          if(count==count1)
          {
                v=a;
          }
          a--;
     }
     printf("%d",v);
}