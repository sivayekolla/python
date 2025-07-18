#include<stdio.h>
int main()
{
     int a,b,count=0;
     printf("enter a numbers:\n");
     scanf("%d %d",&a,&b);
     for(int i=31;i>=0;i--)
     {
          if(((a>>i)&1) != ((b>>i)&1))
          {
               count++;
          }
     }
     printf("%d",count);
}