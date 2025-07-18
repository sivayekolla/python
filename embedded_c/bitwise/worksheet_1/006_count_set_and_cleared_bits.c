#include<stdio.h>
int main()
{
     int s;
     printf("enter the value to find count of set and cleared bits:\n");
     scanf("%d",&s);
     int count0,count1;
     for(int i=0;i<32;i++)
     {
          if((s>>i)&1)
          {
               count1++;
          }
          else
          {
               count0++;
          }
     }
     printf("0:%d\n1:%d",count0,count1);

}